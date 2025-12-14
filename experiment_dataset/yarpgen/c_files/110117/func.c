/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110117
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) var_2);
        arr_3 [7ULL] = ((/* implicit */long long int) var_11);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            var_17 = ((/* implicit */_Bool) arr_1 [i_1 + 1]);
            /* LoopSeq 1 */
            for (int i_2 = 4; i_2 < 13; i_2 += 4) 
            {
                arr_9 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_1 + 2]))));
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1)))))));
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (unsigned short)0))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 1; i_3 < 13; i_3 += 4) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) arr_8 [i_4] [i_2 - 2] [i_1 + 1] [i_0]);
                            var_21 *= ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_4] [i_2 + 1] [i_1 - 1] [i_1]))));
                        }
                    } 
                } 
            }
            arr_18 [i_1] [6] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 2] [i_1 - 1])) < (((/* implicit */int) var_3))));
            arr_19 [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_11 [i_1] [i_1] [i_1 - 2] [i_1] [i_1]))));
        }
        for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 4) 
        {
            var_22 = ((/* implicit */unsigned long long int) arr_6 [i_5] [i_5] [i_5]);
            var_23 = ((/* implicit */signed char) (+(arr_1 [i_5 + 1])));
        }
        arr_22 [i_0] [i_0] = arr_14 [i_0] [i_0] [i_0] [i_0];
    }
    var_24 ^= ((/* implicit */unsigned short) var_0);
}
