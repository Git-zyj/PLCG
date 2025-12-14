/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132059
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */int) max((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) arr_2 [i_1] [i_0 - 1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 2])) / (((/* implicit */int) arr_0 [i_1]))))) : (3097762853U)))));
                var_15 = ((/* implicit */signed char) max(((+(min((((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_1])), (3097762853U))))), (((((1197204442U) - (((/* implicit */unsigned int) -102706073)))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) (~(6912116917621306611LL)));
}
