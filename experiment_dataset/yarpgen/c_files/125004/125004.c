/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = (1417124567 % 18446744073709551615);
                var_12 += ((~((((262143 % -13262) <= ((((arr_2 [i_0] [i_0]) ? var_9 : var_5))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, ((((arr_7 [i_0]) ? ((((-1868264220 + 2147483647) >> (((arr_7 [10]) - 187))))) : var_0)))));
                                arr_11 [16] [i_1] [3] [i_2] [i_3] [i_4] = 1;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_16 [i_6] [i_1] [i_2] [1] [1] [17] [i_2] = (((arr_3 [1] [i_2] [i_1]) == var_5));
                                arr_17 [i_2] [i_5] [i_6] = 218;
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_27 [i_9 + 1] [i_1] [8] [i_1] [i_0] &= (max(-var_3, -8800));
                                arr_28 [i_7] [i_1] [i_9] = min(((((var_1 ? 8788891730749810088 : 3143378212)))), (-7106053153354318701 + 65528));
                                var_14 = 1;
                                arr_29 [i_7] = (arr_10 [i_9] [21]);
                            }
                        }
                    }
                    arr_30 [i_1] [i_1] |= (var_7 ? (218108697 / 8778) : ((((((-1868264218 ? var_0 : (arr_1 [i_0]))) == -1868264224)))));
                    var_15 = ((742133503 % ((693234803 - (arr_1 [i_0])))));

                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        arr_33 [20] [i_1] [i_0] [i_7] = (arr_0 [i_7]);
                        arr_34 [i_0] [i_1] [i_7] [i_1] [i_7] = 30;
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        arr_38 [i_11] [i_1] [20] [i_1] [20] |= (((arr_22 [6] [i_1] [i_1] [i_11]) * (((!(arr_7 [i_0]))))));
                        var_16 = (max(var_16, ((((arr_7 [i_7]) >> ((((var_3 ? 4343718841266609702 : var_5)) - 4343718841266609699)))))));
                    }
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        var_17 *= (min((~1), (((693234791 >= (~3601732505))))));
                        arr_43 [i_7] [17] [i_7] [i_1] [i_0] [i_7] = (((((~(~6)))) ? (!2097151) : (((arr_21 [i_7]) ? (((arr_6 [i_0] [i_1] [i_12]) ? (arr_40 [i_0] [i_7] [i_0] [i_0]) : var_9)) : ((var_7 ? 1 : 1))))));
                    }
                }
                var_18 = ((var_0 == -9239) == (arr_13 [16] [16] [20] [i_1]));
            }
        }
    }
    #pragma endscop
}
