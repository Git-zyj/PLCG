/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (((arr_4 [i_0 + 1]) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 + 1])));
                    var_17 = (((arr_1 [i_1 + 1] [i_1 + 1]) ? (arr_1 [i_1 + 1] [i_1 + 1]) : var_5));
                }
            }
        }

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_12 [i_0] [i_0] = (var_11 & (arr_10 [i_0] [i_0]));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {

                        for (int i_6 = 3; i_6 < 12;i_6 += 1)
                        {
                            arr_21 [i_0] [i_5] [i_3] [i_3] [i_0] = arr_9 [i_0] [i_0];
                            var_18 = (((arr_4 [i_0]) ^ (arr_15 [i_4] [i_4])));
                            arr_22 [i_0] [i_0] [i_4] [i_5] [i_0] = -10629;
                        }
                        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0] = (arr_25 [i_4] [i_5] [i_4] [i_0] [4] [4] [i_0]);
                            var_19 = var_12;
                        }
                        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                        {
                            var_20 = ((-6430878227531221904 ? (arr_19 [i_0] [i_3] [i_0] [i_3] [i_8] [i_8] [i_0 + 1]) : (arr_19 [i_8] [i_3] [i_0] [i_0] [i_8] [i_5] [i_0 + 1])));
                            arr_29 [i_0] [i_0] [i_4] [i_4] [i_0] [i_5] [i_8] = ((arr_16 [i_0] [i_0] [i_0 + 1] [i_0]) && 172);
                            arr_30 [i_0] [9] [i_4] [i_0] [i_0] = ((((((arr_7 [i_0] [i_0] [i_0] [6]) / var_4))) ? (arr_15 [i_0 + 1] [i_0 + 1]) : (arr_13 [1] [1] [i_0])));
                            arr_31 [i_0 + 1] [i_0] [i_4] [i_4] [i_5] [i_5] = (arr_18 [i_8]);
                        }
                        for (int i_9 = 1; i_9 < 10;i_9 += 1)
                        {
                            var_21 += ((((var_0 ? (arr_17 [i_0] [i_5]) : -6430878227531221908)) % (arr_18 [i_0 + 1])));
                            var_22 = ((((~(arr_33 [4] [3] [3] [i_4] [i_5] [3]))) - var_9));
                        }
                        var_23 = (arr_6 [i_0]);
                        var_24 = (((arr_0 [i_0]) * (arr_0 [i_0])));
                        var_25 = arr_3 [i_0] [i_0];
                    }
                }
            }
            var_26 ^= var_13;
            arr_34 [i_0] [i_0] [i_0] = (((arr_20 [i_0] [i_0 + 1] [i_0 + 1]) / (arr_20 [i_0] [i_0 + 1] [i_0 + 1])));

            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {
                var_27 = (((arr_18 [i_0 + 1]) ? (arr_18 [i_0 + 1]) : (arr_18 [i_0 + 1])));
                var_28 -= (((arr_11 [2]) + (arr_11 [0])));
            }
            for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
            {
                var_29 = (((arr_38 [i_0 + 1] [i_3] [i_0]) & ((((arr_28 [i_0] [i_0] [i_3] [i_3] [i_11] [i_3] [i_11]) ? (arr_15 [i_3] [12]) : (arr_0 [i_0]))))));
                arr_41 [i_0] [i_3] [i_0] [i_3] = ((-1 ? -1 : 6430878227531221904));
            }
            for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
            {
                var_30 = var_0;
                arr_45 [i_0] [i_12] [10] [i_0] = ((((var_16 ? (arr_7 [i_0] [i_0] [i_3] [i_12]) : (arr_0 [i_0])))) ? (((arr_20 [i_0] [i_3] [i_0]) ^ (arr_24 [i_0] [i_0] [i_0] [i_0 + 1] [i_3] [i_0 + 1] [i_12]))) : ((((arr_1 [1] [i_3]) ? (arr_27 [i_3] [i_3]) : (arr_18 [0])))));
            }
        }
        var_31 += var_5;
    }
    var_32 = var_5;
    var_33 = (max((-9223372036854775807 - 1), 14099));
    #pragma endscop
}
