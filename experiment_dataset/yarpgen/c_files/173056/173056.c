/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_20 = (((arr_1 [i_0 - 2]) & 18398516015721763775));
        var_21 = (((arr_0 [i_0] [i_0 - 1]) ^ (arr_0 [i_0] [i_0 - 1])));
        var_22 = (0 << var_13);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_23 = ((+(((arr_8 [i_3] [14] [i_1 + 1] [i_0 + 1]) ? var_16 : (arr_6 [i_1] [i_1])))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [i_4] = var_8;
                            var_24 = (arr_2 [i_0] [i_1]);
                            var_25 += ((var_9 ? (~var_16) : (arr_4 [i_0] [i_0] [i_0 - 2] [i_0])));
                        }

                        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_26 = (min(var_26, var_7));
                            arr_17 [i_5] [i_3] [i_1] [i_1] [0] = var_7;
                            arr_18 [i_1] [i_1] = (((!var_18) + ((-9960 ? 1 : 17226))));
                            var_27 = (min(var_27, (((((~(arr_12 [i_5] [i_5] [i_2] [i_5] [0]))) ^ (~0))))));
                            arr_19 [i_1] [i_2] [i_1] = ((var_11 ? (~var_19) : ((-(arr_16 [i_0] [i_0] [i_2] [i_2] [1] [i_0])))));
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_6] [i_1] [i_0] [i_2] [i_0] [i_1] [i_0] = (((arr_9 [i_1 + 1] [i_2] [i_2] [i_6]) ? var_17 : 18446744073709551615));
                            var_28 |= (~var_13);
                        }
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            var_29 = (((((-(arr_11 [i_7] [i_7] [i_0] [i_7])))) ? ((var_11 / (arr_0 [i_0] [i_7]))) : (((((arr_20 [i_0] [i_0] [i_7] [i_7] [i_7] [i_7]) != var_16))))));
            var_30 = ((((((arr_25 [i_7] [i_7]) * (arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])))) ? (arr_3 [i_0 - 3] [i_0 - 3] [i_7]) : ((var_17 | (arr_13 [i_0 - 1] [i_0] [i_0] [i_7] [i_7] [4])))));
        }
        for (int i_8 = 1; i_8 < 19;i_8 += 1)
        {
            var_31 = (((arr_15 [i_8] [14] [i_8 + 1] [i_8 - 1] [i_8] [i_8] [14]) ^ (((arr_11 [18] [i_0] [i_0] [18]) - (arr_29 [i_0] [i_0] [i_0])))));
            var_32 = var_11;
        }
    }
    var_33 = ((~(((!(((var_13 ? var_4 : var_18))))))));
    #pragma endscop
}
