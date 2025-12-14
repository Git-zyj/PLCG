/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_15 += ((2047 * (((((213 ? 16840 : 29677))) ? 34 : ((1 ? 2899828769 : 1))))));
                            var_16 = (min(var_16, ((((~1) ? 17389884366402022664 : 0)))));
                            var_17 = 690886159;
                        }
                    }
                }
                var_18 = (min(var_18, (((-(max((arr_8 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1]), (arr_4 [i_1] [i_0]))))))));
                var_19 *= (+(((arr_10 [i_0] [0] [i_0] [i_0] [i_0] [i_1]) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]) : (arr_10 [i_0] [i_0] [1] [i_1] [i_1] [i_0]))));
                arr_11 [i_1] &= ((((!(arr_10 [i_1] [i_0] [2] [i_0] [i_0] [2]))) ? 0 : (max((min(-13, (arr_2 [i_0]))), (((var_13 ? (arr_1 [i_1] [i_0]) : (arr_9 [i_0] [i_0] [i_0]))))))));
                var_20 = (var_9 ? ((var_7 ? (~-690886129) : ((3760565523070702731 ? 32745 : 1)))) : 1);
            }
        }
    }

    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {
        arr_14 [i_4] = (arr_5 [i_4] [i_4 + 1] [i_4]);
        arr_15 [i_4] = ((var_10 ? (arr_4 [i_4 + 2] [i_4 - 1]) : -16442));
    }
    #pragma endscop
}
