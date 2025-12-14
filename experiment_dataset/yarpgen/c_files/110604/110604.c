/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = (min(((((max(-32760, var_9))) ? 1816928771 : (~536870911))), (!var_8)));
                var_19 = (max((((max(3207983425, var_14)))), (max(var_10, 2519193313))));
                arr_5 [i_1] [i_0] [i_0] = (max((max(var_9, (arr_1 [i_0]))), ((max(var_7, var_11)))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_0] &= (((arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? var_1 : var_9));
                    arr_10 [i_0] [i_0] [i_2] = (101 == -41);
                    var_20 = (max(var_20, (((((1 ? (arr_8 [i_0] [i_0]) : var_12)) > var_4)))));
                    var_21 = (((((-48 ? var_15 : var_7))) * ((1 ? 26 : var_13))));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    arr_13 [i_3] = (max(((~(arr_2 [i_1] [i_3]))), ((max((-65 == var_0), var_7)))));
                    var_22 = ((min(-3, 91)));
                    arr_14 [i_3] [i_1] [i_0] = (min(536870907, ((max(-21, var_11)))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_23 = -32750;
                                arr_21 [i_0] [i_1] [i_0] [i_4] [i_5] = -6608;
                            }
                        }
                    }
                }
                var_24 = (var_17 + 3207983417);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            {
                arr_26 [i_6] [i_6] = ((((max(75, -9))) / 1));
                var_25 = var_8;

                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            {
                                arr_35 [i_6] [i_6] [i_7] [i_6] [i_6] [i_6] = ((!(((((((arr_23 [i_6]) ? var_0 : var_8))) ? 1 : (~var_3))))));
                                arr_36 [i_10] [i_6] [i_8] [i_6] [i_6] = (min(1, 1));
                            }
                        }
                    }

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_39 [i_6] [i_7] [i_6] [i_6] = (!var_14);
                        var_26 -= ((((-18928 | 7540831422907768387) & var_11)));
                    }
                    for (int i_12 = 1; i_12 < 14;i_12 += 1)
                    {
                        arr_42 [i_6] [i_6] [i_6] [i_6] = (min((max(((53 ? 3207983428 : var_6)), (var_14 || 1691916309))), ((min(var_11, 1)))));
                        arr_43 [i_6 - 1] [i_6] = (~var_1);
                        arr_44 [i_6] [i_6] [i_6] [i_6] = ((-(1 / 2269814212194729984)));
                    }
                    for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
                    {
                        var_27 = ((18446744073709551615 ? -536870913 : var_7));
                        var_28 = (max((var_12 - -245174657641713416), (var_11 == var_14)));
                        arr_48 [i_6] [i_6] = (((var_1 ? (((max(1, 18941)))) : (arr_34 [i_6 + 1] [i_6] [i_6] [i_6] [i_6 - 1] [i_6] [i_6]))));
                    }
                    for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
                    {
                        arr_52 [i_6] [i_6] = (arr_46 [i_6] [i_6 + 1] [i_6] [i_6]);
                        var_29 = ((((((min(84, var_5))) ? (1 % var_6) : ((var_14 ? var_16 : var_12)))) < ((max(12169426, -22)))));
                        var_30 = (max(((max((!var_14), 1))), (((1086983876 || var_12) ? var_1 : (((arr_50 [i_6] [i_6] [i_8] [i_14]) ? var_1 : var_1))))));
                    }
                }
            }
        }
    }
    var_31 = (((((((max(var_10, 1)) ? var_0 : -var_2)) + 2147483647)) >> 1));
    #pragma endscop
}
