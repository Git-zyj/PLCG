/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144040
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((unsigned int) ((unsigned short) arr_0 [i_0])));
                    var_20 *= ((/* implicit */signed char) var_10);
                    arr_6 [21ULL] [21ULL] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)65393)) : (arr_4 [i_2] [i_2] [i_1] [i_2]))) <= (max((((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_1] [i_1])), (var_8)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [(_Bool)1]))))))));
                }
            } 
        } 
    } 
    var_21 &= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)55197)) << (((/* implicit */int) ((_Bool) max((-6667961915134828342LL), (((/* implicit */long long int) (short)11549))))))));
    var_22 = ((((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned short)5110), (((/* implicit */unsigned short) (signed char)124)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3683015615U));
}
