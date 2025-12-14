/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144163
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
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) max((((unsigned long long int) (short)-11780)), (((/* implicit */unsigned long long int) min((((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) (short)614))))), (var_2)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0] [i_1]))));
                        arr_11 [i_0] [i_3 - 1] [i_3] [i_3 - 1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0]))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_4] = (i_0 % 2 == 0) ? (((/* implicit */int) ((((arr_3 [i_2] [i_0] [i_2 - 2]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_13 [i_4] [i_0] [i_0] [i_0 + 1])) - (11985)))))) : (((/* implicit */int) ((((((arr_3 [i_2] [i_0] [i_2 - 2]) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_13 [i_4] [i_0] [i_0] [i_0 + 1])) - (11985))) - (6683))))));
                        arr_15 [i_0] = ((/* implicit */unsigned char) arr_12 [i_0] [i_2 - 2] [i_0] [i_0]);
                        arr_16 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
                        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 + 1])) ? (arr_5 [i_0]) : (arr_5 [i_0])));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned char) var_3);
                        arr_21 [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_5 + 2]);
                        var_15 ^= ((/* implicit */unsigned int) var_6);
                    }
                }
            } 
        } 
        arr_22 [i_0] [i_0 - 1] = ((/* implicit */short) arr_12 [i_0] [i_0 - 1] [i_0] [i_0 + 1]);
    }
}
