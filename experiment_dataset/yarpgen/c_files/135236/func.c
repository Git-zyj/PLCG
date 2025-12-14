/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135236
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (~(268435456U))))) >> ((((~(((/* implicit */int) (short)0)))) + (5)))));
            var_18 *= ((/* implicit */signed char) arr_5 [i_0]);
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_0 - 1]))) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) arr_5 [i_0 + 1]))));
        }
        arr_8 [i_0 + 1] = ((/* implicit */long long int) ((((((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 2])) + (2147483647))) >> (((((/* implicit */int) ((signed char) arr_1 [i_0 - 1] [i_0 + 1]))) + (102)))));
        arr_9 [i_0] = ((/* implicit */signed char) max((268435456U), (((/* implicit */unsigned int) ((4169999009U) < (4026531842U))))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (unsigned char)14))));
    }
    var_20 = ((/* implicit */unsigned int) 267896655);
}
