/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 = (arr_7 [i_0] [i_2] [i_3]);
                            arr_10 [i_0] [0] [i_0] [i_1] [i_2] [i_3] = (min((((!(((~(arr_8 [i_3] [i_1] [i_3] [i_3]))))))), var_3));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_0] [i_4] [i_1] = -120;
                                var_16 = (arr_7 [i_0] [i_0] [i_0]);
                                var_17 = (arr_7 [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                }
                var_18 = (max(var_10, (((1 ? ((var_14 ? var_13 : var_7)) : (arr_9 [0] [i_1]))))));

                for (int i_5 = 2; i_5 < 8;i_5 += 1)
                {
                    var_19 = (((((var_9 ? (arr_8 [i_0] [i_0] [5] [i_0]) : 2888514430))) ? ((0 ? -7223573121314557701 : ((max(var_10, var_13))))) : (((-4294967295 ? ((var_12 ? (arr_5 [i_1] [i_1] [i_1] [i_1]) : (arr_3 [1] [i_1] [i_1]))) : ((var_1 ? var_7 : (arr_8 [i_0] [i_0] [i_5] [i_5]))))))));
                    var_20 = min(9094, (min((!1), (((arr_7 [i_0] [i_1] [i_5]) ? 135 : 136)))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_21 = -3859254712686944800;
                                var_22 = (!(var_10 >= var_10));
                                arr_22 [i_1] [i_7] = (min((arr_3 [i_0] [i_5] [i_1]), (((!(arr_15 [i_1] [i_1]))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 4; i_9 < 9;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_23 = (((arr_6 [0] [i_1] [i_9 - 1] [i_1]) ? 1 : 194));
                                arr_33 [i_8] [i_8] [8] &= (((arr_28 [i_1] [i_8] [i_10]) & (arr_28 [i_8] [i_1] [i_0])));
                                var_24 *= ((arr_14 [i_9] [7] [i_9 - 4] [i_9 - 1]) && (((~(arr_24 [i_1] [i_9] [i_9])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 8;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            {
                                var_25 = (arr_21 [i_1] [i_8] [i_11 - 3] [i_12]);
                                arr_39 [i_1] [i_1] = ((245 << (3859254712686944799 - 3859254712686944797)));
                                arr_40 [i_0] [i_0] [i_8] [i_1] = (((arr_20 [i_1] [i_11 - 2] [i_11 - 3] [i_11 - 3] [i_11 - 2]) ? (arr_18 [i_11] [i_11 - 2] [i_11] [i_11 - 3]) : (arr_30 [i_11] [i_11 + 1] [i_11] [i_11 - 1] [i_11 - 1])));
                            }
                        }
                    }
                    arr_41 [i_0] [i_1] [i_1] [i_0] = (arr_7 [i_0] [i_1] [i_8]);
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 7;i_14 += 1)
                        {
                            {
                                arr_47 [i_0] [i_0] [i_1] [i_1] = (~(arr_9 [i_0] [i_13]));
                                arr_48 [i_1] [i_1] [8] [i_1] [i_1] = var_2;
                                var_26 = var_10;
                                var_27 = (arr_8 [i_0] [i_1] [i_8] [i_13]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = ((((min(59, (min(1, 23040))))) ? (((((var_6 ? var_9 : var_14))) ? var_11 : ((4033528231 ? 7037744224704499856 : -1)))) : 318624892));
    var_29 = ((var_6 ? var_1 : (((var_1 >> var_13) ^ var_13))));
    #pragma endscop
}
