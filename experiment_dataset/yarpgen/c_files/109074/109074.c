/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] = 17;
                            arr_13 [i_1] = ((!(((arr_1 [i_2] [i_2]) >= (arr_6 [i_1 - 1])))));
                        }
                    }
                }
                arr_14 [i_0] [i_1] = max(18446744073709551599, (arr_11 [3] [i_1 + 4]));

                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {

                    for (int i_5 = 2; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        arr_22 [1] [16] [i_4] [i_5] [i_1] = (((arr_16 [i_4] [i_5]) >> (var_3 + 858772554)));
                        arr_23 [i_5] [i_1 - 4] [i_4] [i_5] = ((((max((arr_17 [i_5] [i_5 + 2] [i_5 + 3] [i_0]), 18446744073709551599))) && ((((arr_17 [i_5] [i_5 + 1] [i_5 + 1] [i_0]) ? 1196130448 : (arr_17 [i_5 - 2] [i_5 + 1] [i_5] [i_5]))))));
                    }
                    for (int i_6 = 2; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        arr_27 [i_6] [i_6] [i_6] [i_0] = 254846698;
                        arr_28 [i_0] [i_1] [i_1] [i_6] = 15;
                        arr_29 [i_1] = 17102546967630759683;
                        arr_30 [i_0] [i_6] [i_4] [i_4] [i_0] = var_10;
                    }
                    for (int i_7 = 2; i_7 < 21;i_7 += 1) /* same iter space */
                    {
                        arr_33 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = (((((var_0 > (max((arr_18 [i_0] [i_1]), 18446744073709551599))))) != (arr_8 [i_0] [i_1 + 2] [i_4] [i_7])));
                        arr_34 [i_0] [i_1] [i_1] [i_7] = ((((((((arr_2 [20]) ? (arr_6 [i_0]) : 1344197106078791955))) || (arr_31 [i_0] [i_1 - 4] [i_4 + 2] [i_4 + 2] [i_7]))) ? var_2 : (((14 && (((var_10 ? 92 : var_8))))))));
                        arr_35 [i_4] [i_4 + 2] [7] [i_1] = -1;
                        arr_36 [i_0] [i_1] [i_4] [i_7] [i_7 - 1] [i_0] = (((((((90 >= (arr_15 [i_0] [5] [22]))) ? (var_11 * var_1) : var_1))) ? 17102546967630759683 : -114284812));
                    }
                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {
                        arr_41 [i_0] [i_0] [i_0] [i_1] [i_0] = ((!(arr_37 [i_1 + 2] [i_1] [i_8 + 2])));
                        arr_42 [i_1] [5] [i_4] = -4810884911138663233;
                    }
                    arr_43 [i_1] = -589835960;
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_46 [i_0] [i_0] [i_1] [1] = (111 && ((((arr_39 [i_1] [17] [i_0] [i_0]) ? 12 : 3238638228590529752))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 23;i_11 += 1)
                        {
                            {
                                arr_51 [i_11 + 1] [i_1] [i_1] [i_0] = ((!((var_4 >= (arr_18 [i_1 - 2] [i_1 - 1])))));
                                arr_52 [i_11] [i_1] [i_1] [5] [23] [12] [i_10] = var_7;
                                arr_53 [i_0] [i_1] [i_1] [i_10] [i_11] = (((min((arr_25 [i_0] [i_1] [9] [i_10] [i_11 + 1] [i_10]), (arr_50 [i_0] [i_0] [i_1]))) != (arr_26 [i_0] [i_9] [i_10])));
                                arr_54 [i_0] [1] [20] [i_1] [i_10] [i_10] [i_11] = (var_0 || 119);
                            }
                        }
                    }
                }

                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    arr_58 [i_1] [i_12] [11] [i_1] = var_9;
                    arr_59 [i_0] [i_0] [i_1] [i_0] = (arr_44 [i_0] [i_1] [i_12] [i_1]);
                }
            }
        }
    }
    var_12 = (max((max(var_1, var_5)), (max(var_5, 6125482121823998726))));
    var_13 = var_10;
    var_14 = -605850641;
    #pragma endscop
}
