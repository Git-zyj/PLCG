/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -86;
    var_13 = (17635224591002527322 + (53 * 18446744073709551613));
    var_14 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (arr_1 [i_1])));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                        {
                            var_16 = (min(var_16, (var_3 + var_2)));
                            arr_13 [i_0] [i_0] [i_1] [i_2] [7] [i_4] = ((-1813811616 < (arr_3 [i_0] [i_0])));
                            arr_14 [i_1] [i_1] [9] [i_4] [i_4] = 53;
                            var_17 = arr_5 [i_0] [i_1];
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            var_18 = (min(var_18, -1898482419));
                            var_19 = (-37 * 2047);
                            var_20 -= ((524287 ? (arr_3 [i_1] [i_2]) : 392961752));
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            var_21 = (min(var_21, (arr_17 [i_0] [i_1] [i_6] [17] [i_6])));
                            var_22 = ((arr_19 [i_0] [i_1] [i_2] [i_3] [i_6]) || (arr_19 [i_0] [i_1] [3] [20] [i_6]));
                            var_23 = (((arr_7 [1] [i_3] [i_6]) ? var_7 : var_7));
                        }
                        arr_21 [i_0] [i_1] [i_1] [11] [5] = ((!((((arr_2 [i_3] [i_0]) ? var_6 : (arr_19 [i_0] [i_1] [i_2] [i_3] [i_0]))))));
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        var_24 -= (var_1 + (arr_6 [4] [i_2] [15] [4]));

                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            var_25 += (arr_26 [i_1] [i_8 - 1] [i_8] [i_8] [i_8]);
                            var_26 = (min(var_26, (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_27 += 53;
                            var_28 = (((((arr_26 [i_0] [8] [i_2] [i_7] [i_8]) / (arr_26 [i_8 - 1] [0] [11] [6] [i_0])))) ? ((var_3 / (((arr_20 [i_0] [i_1] [i_2] [i_7] [22]) + var_9)))) : -6897);
                        }
                        arr_28 [i_2] [i_0] [9] [19] [i_7] [i_0] = (((((arr_17 [3] [i_0] [i_1] [i_2] [7]) / (((arr_11 [i_1] [i_1] [5] [i_2] [20] [i_1]) / var_5)))) * (((-(arr_26 [i_2] [i_1] [i_2] [i_1] [i_7]))))));
                        var_29 = 524287;
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        arr_32 [i_0] [i_1] [i_2] [i_9] = ((169 ? 0 : ((55892 ? 18446744073709551598 : ((1 ? 169 : 32767))))));
                        arr_33 [i_0] = ((((!(arr_9 [i_0] [i_1] [i_9]))) && -3458098117143554819));
                    }
                    var_30 = ((!(arr_23 [9] [8] [22] [i_1] [i_2])));
                    var_31 = (((((arr_9 [i_0] [i_1] [15]) ? var_1 : (arr_9 [14] [i_1] [i_2]))) ^ (arr_9 [i_0] [i_1] [1])));
                }
            }
        }
    }
    var_32 = 3072;
    #pragma endscop
}
