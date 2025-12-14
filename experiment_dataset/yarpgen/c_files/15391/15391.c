/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((((((min(var_4, var_10))) ? (min(0, var_11)) : ((max(-1695198293, var_10)))))))));
    var_18 = (max(255, -13778));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = -1695198301;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_20 = (max(var_20, (((var_14 ? (arr_6 [i_0] [i_1] [i_2]) : -var_9)))));
                        var_21 = (max(var_21, (((-11029 * (arr_1 [i_0] [i_3]))))));
                        arr_11 [i_1] = (((arr_8 [i_3] [i_3] [i_0] [i_1] [i_0]) || (arr_8 [13] [i_1] [i_1] [i_3] [i_1])));
                        arr_12 [i_0] [i_0] [i_2 + 1] [i_3] [11] [i_1] = ((((arr_0 [i_2 - 1] [i_1]) * var_13)));
                        var_22 *= (arr_6 [i_1] [i_2 - 1] [10]);
                    }
                }
            }

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_21 [i_1] [11] [4] [i_5] [i_6] = (((arr_15 [i_0] [i_1] [i_1] [i_5 + 2] [i_6 - 2]) + (arr_18 [i_0] [i_6 - 2] [i_4] [i_5] [i_6 - 2] [i_5 + 1])));
                            var_23 |= (((((arr_16 [10] [i_1] [i_4] [i_5 + 1]) || (arr_1 [i_1] [i_5 - 1]))) ? var_10 : -15736));
                            arr_22 [i_0] [i_0] [i_4] &= (arr_7 [i_0] [3] [14] [7]);
                            var_24 = 9687369055734426669;
                        }
                    }
                }

                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    var_25 = (min(var_25, 4));
                    arr_25 [i_1] = ((arr_5 [i_1] [i_1] [i_7 + 1] [i_7 + 1]) ? (arr_5 [i_1] [i_4] [i_7 - 1] [i_7 + 1]) : (arr_5 [2] [i_7 + 1] [i_7 + 1] [2]));
                    var_26 = (((arr_14 [i_7 - 1] [i_7] [5] [i_7 - 1]) ? 11029 : -13775));
                    var_27 = (3152017525282927630 * 11054471536182396851);
                }
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    arr_30 [i_0] [i_1] [i_1] = (arr_2 [0]);
                    var_28 = (((arr_27 [i_0] [i_1] [i_4] [i_8] [i_8]) ? (arr_13 [i_4]) : (arr_27 [i_0] [i_1] [i_4] [i_8] [8])));
                    var_29 = (max(var_29, -4));
                }
            }
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                arr_33 [i_1] [i_1] = var_8;
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        {
                            var_30 = (arr_4 [i_1] [5] [11]);
                            arr_39 [i_10] [i_1] [i_1] [i_0] [i_11] [i_0] = (arr_19 [i_1] [i_1] [i_9] [i_11] [i_11] [i_11] [i_11]);
                            arr_40 [14] [i_9] [i_1] [i_9] [i_9] = var_14;
                            var_31 = (min(var_31, 3929129031));
                        }
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 13;i_12 += 1)
    {
        arr_45 [i_12] [i_12] = (((arr_36 [1] [i_12] [i_12] [4] [i_12] [7]) ? (min(8192, (((arr_3 [i_12] [i_12]) & 1458079620160169912)))) : ((max((!2), (var_2 & var_1))))));
        var_32 = (((max((((~(arr_16 [i_12] [i_12] [i_12] [i_12])))), (arr_20 [i_12] [i_12] [i_12] [i_12]))) > (min((~15752433820734305903), (65519 % var_15)))));
        var_33 += 33779;
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {
                {
                    arr_52 [i_12] [i_13] [i_13] = -var_1;
                    var_34 = ((((((!1765695917) ? (arr_16 [i_13 - 1] [i_13] [i_13 + 1] [i_13]) : 15294726548426623992))) ? (((16988664453549381708 ? (arr_35 [i_13 + 1] [i_13 + 1] [i_13] [i_13 + 1]) : (arr_35 [12] [i_13 - 1] [i_13 + 1] [i_13 - 2])))) : (((((var_15 * (arr_38 [i_12] [i_13 + 1] [i_14] [7])))) ? 1458079620160169908 : (min(var_8, var_5))))));
                }
            }
        }
    }
    var_35 = var_7;
    var_36 = min(31756, 15294726548426623972);
    #pragma endscop
}
