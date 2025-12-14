/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128494
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
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) (unsigned short)0))))))));
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 2] [i_1 - 2] [i_2])) ? (((/* implicit */int) arr_3 [i_2] [i_1])) : (((/* implicit */int) arr_4 [i_2] [i_1] [i_0] [i_0])))), (((/* implicit */int) arr_3 [i_2] [i_2])))) < (((/* implicit */int) ((min((1017114751924963862LL), (((/* implicit */long long int) (signed char)55)))) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [15ULL] [i_0])) : (((/* implicit */int) (unsigned short)65535)))))))))))));
                    var_16 = min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) == (var_0)))), ((+(((/* implicit */int) (unsigned short)26)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) (unsigned short)65534);
}
