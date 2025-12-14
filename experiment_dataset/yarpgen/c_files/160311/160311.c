/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (((!var_14) ? (arr_5 [i_0] [i_1]) : (arr_6 [i_1])));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_10 [i_3] [i_1] = var_15;
                        arr_11 [i_3] [i_2] [i_3] [i_3] = (~(min((~-112), (~1))));
                        var_17 = (((arr_0 [i_1] [i_1]) ? 9223372036854775807 : (!var_13)));
                        arr_12 [i_3] = 65535;
                    }
                    for (int i_4 = 3; i_4 < 9;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_2] = 1;
                        arr_16 [i_0] [i_1] [i_0] = (((arr_0 [i_0] [i_0]) ? var_13 : ((((!(arr_3 [i_2]))) ? (arr_13 [i_0] [i_0] [i_2] [i_4 - 3]) : (!var_0)))));
                        arr_17 [i_0] [i_1] [i_2] [i_4 + 1] = (arr_1 [i_0]);
                    }
                    for (int i_5 = 4; i_5 < 12;i_5 += 1)
                    {
                        var_18 = ((+(max((~45575), ((min(255, 64549)))))));
                        arr_20 [i_0] [i_1] [i_2] [i_5] = ((((((arr_18 [i_0] [i_0] [i_2] [i_0] [i_5]) ? (arr_18 [i_5] [i_2] [i_1] [i_1] [i_0]) : 1))) ? (min(-1, var_3)) : (arr_18 [i_0] [i_1] [i_1] [i_1] [i_1])));
                    }

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_19 -= ((+((((((arr_9 [i_6] [i_6]) ? 1 : var_2))) ? (((arr_18 [i_0] [i_0] [i_2] [i_6] [i_2]) | var_10)) : 15))));

                        for (int i_7 = 1; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            var_20 *= ((max(((~(arr_18 [i_0] [i_0] [i_0] [i_0] [i_7])), var_3))));
                            var_21 = (-(arr_9 [i_7] [i_0]));
                        }
                        for (int i_8 = 1; i_8 < 12;i_8 += 1) /* same iter space */
                        {
                            var_22 |= (((~(arr_25 [i_8 - 1] [i_8 - 1] [i_2] [i_0] [i_8] [i_6]))));
                            arr_28 [i_1] [i_8] [i_6] [i_2] [i_1] [i_8] [i_0] = (((arr_25 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 - 1]) ? (!65515) : 13344871088684053144));
                        }
                        arr_29 [i_0] [i_6] [i_2] [i_2] [i_1] = (arr_21 [i_6] [i_1] [i_1] [i_0]);
                        arr_30 [i_0] [2] [i_2] [i_2] [i_6] |= ((!(((-(arr_3 [i_2]))))));
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_23 = ((-((2147483647 ? (1226283891 - 1) : (!-1)))));
                        var_24 = (max((arr_7 [i_9] [2] [i_0] [i_0]), (((((!(arr_8 [i_0] [i_0] [i_0]))) ? var_5 : 1226283903)))));
                    }

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_25 = (min((((arr_14 [i_0] [i_0] [i_0] [i_10]) ? (arr_14 [i_0] [i_2] [i_0] [i_0]) : 14315)), -1285590065));
                        var_26 &= min(((min((arr_13 [i_0] [i_2] [i_2] [i_2]), var_14))), (arr_5 [i_0] [i_1]));
                        var_27 = (((arr_34 [i_10] [i_2] [1] [i_0]) ? (!var_3) : var_0));
                        arr_36 [1] [1] [1] [1] [1] [i_10] = 2528370021524589617;
                    }
                    for (int i_11 = 4; i_11 < 10;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            arr_41 [11] [11] [11] [i_1] [i_0] [i_0] = var_6;
                            arr_42 [11] = var_11;
                            arr_43 [i_0] [i_0] [i_0] [i_0] [1] [i_0] = ((!((min((arr_32 [i_11] [i_11 - 4] [i_11 + 3] [i_11]), -4)))));
                            var_28 = 1;
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_29 = ((!((min((~0), (arr_34 [i_0] [i_0] [i_11 + 2] [i_11]))))));
                            var_30 &= var_4;
                            var_31 = 666408857;
                        }
                        arr_46 [i_0] [i_0] = 140064188;
                    }

                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        var_32 = var_10;
                        arr_49 [i_0] [i_0] [i_0] [i_2] [i_0] [i_1] |= (arr_19 [i_0]);
                        arr_50 [i_0] [i_0] [i_0] [i_14] = ((arr_25 [i_0] [i_0] [i_1] [i_1] [i_14] [i_14]) & (~80));
                    }
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        arr_54 [i_15] [i_1] = (arr_44 [i_1] [i_1] [i_1] [i_1] [11] [i_1] [i_1]);
                        var_33 = (min(1285590056, var_13));
                        arr_55 [i_15] [i_2] [12] [12] = (65532 ^ -1);
                        arr_56 [i_0] [i_1] [i_2] [i_2] [i_1] = (~127);
                    }
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        var_34 = ((-(~var_9)));

                        for (int i_17 = 0; i_17 < 13;i_17 += 1)
                        {
                            var_35 = -249;
                            var_36 = ((((-((4194303 >> (var_15 + 50))))) << (!var_6)));
                        }
                    }
                }
            }
        }
    }
    var_37 = (min(var_3, ((~(~var_1)))));
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 11;i_19 += 1)
        {
            {
                arr_69 [i_18] [i_18] [i_19] = (arr_68 [3] [i_18] [i_18]);
                var_38 = 56;
            }
        }
    }
    var_39 = (~var_9);
    #pragma endscop
}
