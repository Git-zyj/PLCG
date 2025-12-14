/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_10, var_4));
    var_19 |= ((var_7 * (!var_15)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = var_10;

                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] = (max(((max(((6992512100351762229 ? -9628 : 0)), (arr_1 [i_4] [i_3 + 1])))), (arr_7 [i_0] [i_0] [i_2] [11] [11])));
                                arr_14 [i_0] [i_4] [i_0] = ((~(((arr_1 [i_1 - 2] [i_1 + 1]) + (((arr_9 [i_1] [1] [14]) ? var_2 : var_9))))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1 + 1] [i_0] = 244;
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    var_21 = (max(var_21, ((((((arr_17 [i_1 + 1] [i_1 - 2] [i_1 - 1]) * (arr_9 [i_0] [i_1 + 1] [i_0]))) != ((-(arr_9 [18] [i_1 + 2] [i_5]))))))));

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_22 = ((!(arr_7 [13] [13] [13] [i_1 + 1] [13])));
                        arr_23 [i_0] [i_1] [i_5] [i_6] [i_5] = (max(((!(arr_6 [i_1 - 2] [i_1 + 1]))), (7769012881736909922 || 250)));
                        arr_24 [i_0] [1] [i_0] [i_6] = ((((!((32766 != (arr_3 [i_0]))))) ? ((~((2147483647 ? var_12 : var_6)))) : (arr_18 [i_1 + 2])));
                        var_23 = ((~(max(9, (max(-1, (arr_21 [i_0] [i_1] [i_5] [i_6])))))));
                        var_24 = 11454231973357789379;
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_25 = 2435;
                        var_26 = (arr_18 [i_0]);
                        var_27 = (min(var_27, (((2147483647 ? 31 : 1)))));
                        var_28 = (2433 <= ((~(arr_20 [i_0] [i_1] [i_5] [i_7]))));
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_29 = 2743530123737653949;
                        arr_30 [i_8] [i_8] [1] [7] [12] [i_0] = -1958152810;
                        var_30 += ((!(!var_2)));
                    }
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        var_31 *= (((((var_17 / (((arr_20 [i_9] [i_5] [i_0] [i_0]) ? (arr_9 [i_5] [i_1 - 1] [i_0]) : (arr_32 [i_9] [i_5] [i_0] [i_0])))))) ? ((var_0 ? ((246 & (arr_6 [i_0] [10]))) : (arr_1 [i_1 + 3] [i_1 + 3]))) : (~var_8)));
                        var_32 = (-32767 - 1);
                    }
                }
            }
        }
    }
    #pragma endscop
}
