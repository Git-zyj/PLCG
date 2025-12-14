/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148269
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
    var_17 = ((/* implicit */short) min((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((unsigned char)137), (((/* implicit */unsigned char) (_Bool)1))))))), (((((min((((/* implicit */int) (_Bool)1)), (var_0))) + (2147483647))) << ((((_Bool)1) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) ((min(((~(((/* implicit */int) arr_0 [i_1 - 1])))), ((((_Bool)1) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)159)))))) >= ((+(((/* implicit */int) (short)32760))))));
                    arr_8 [i_1] = ((/* implicit */int) ((_Bool) (~(arr_4 [i_1 - 1]))));
                    arr_9 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((min((var_16), ((_Bool)0))) ? (2011080698) : (((/* implicit */int) min((var_4), (((/* implicit */unsigned char) arr_6 [i_1] [20U] [i_2] [i_2]))))))) < (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [14U])), (var_5)))) ? ((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (var_15))) : (((/* implicit */int) ((_Bool) (unsigned short)39535)))))));
                }
            } 
        } 
    } 
}
