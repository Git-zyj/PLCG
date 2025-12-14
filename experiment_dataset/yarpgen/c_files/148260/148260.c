/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = ((var_1 ? (min((((arr_4 [i_0] [i_1 - 1]) ^ var_9)), ((-1847485249 ? 0 : 255)))) : (arr_0 [i_0 - 4] [i_1 + 1])));

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    arr_7 [i_0] = (max(var_8, var_1));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 = var_10;
                                var_13 = ((248 ? 0 : 128));
                                arr_14 [i_4] [i_0] [i_2] [i_0] [i_0] = ((~((max(var_5, 140)))));
                                var_14 = ((((min((244 ^ 255), (((!(arr_1 [i_0]))))))) ? ((var_6 & ((-245707576457608955 ? (arr_2 [i_0] [i_1]) : var_2)))) : ((((var_7 & var_5) ? var_8 : ((max(var_0, var_1))))))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_15 *= var_7;
                    var_16 = ((-((max((arr_4 [i_0] [i_0 + 3]), (arr_4 [i_0] [i_0 + 3]))))));
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 15;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        arr_23 [i_0] [i_7] = (0 ? 0 : 0);
                        arr_24 [i_0] [i_1 - 1] [i_1 - 1] [11] = (((~var_4) - 13));
                        var_17 = var_3;
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {

                        for (int i_9 = 1; i_9 < 17;i_9 += 1)
                        {
                            var_18 = ((var_7 >= (arr_27 [i_0 + 1] [i_0 + 2] [i_6] [i_6 + 2] [i_0 + 2])));
                            arr_32 [i_1] [i_6 + 3] [i_8] [i_0] = (var_2 & var_10);
                        }
                        for (int i_10 = 4; i_10 < 15;i_10 += 1)
                        {
                            var_19 += (((arr_17 [2] [i_0] [2]) ? var_3 : var_7));
                            var_20 ^= ((var_2 ? (var_1 - var_7) : var_8));
                            arr_35 [i_0] [i_8] [i_8] [i_6] [i_6 + 4] [i_1 - 1] [i_0] = (~(arr_6 [i_10 - 2]));
                        }
                        for (int i_11 = 2; i_11 < 18;i_11 += 1)
                        {
                            var_21 = (((var_6 >= var_8) / ((var_1 ? var_9 : (arr_5 [i_1] [i_1] [i_6 + 1])))));
                            var_22 = (((arr_19 [i_11 - 1] [i_11 - 1] [i_0] [i_8]) - var_3));
                            var_23 |= ((((((arr_10 [6]) ? var_2 : 0))) ? var_2 : (arr_20 [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 1])));
                            var_24 = (((~var_7) ? ((233 ? 26573 : 5545)) : (1 >= 1091)));
                            var_25 = (max(var_25, (var_1 - var_9)));
                        }
                        for (int i_12 = 1; i_12 < 17;i_12 += 1)
                        {
                            var_26 = ((!7892) ? (arr_21 [9] [i_0 - 2] [i_0 - 3] [i_0 + 3] [i_0 - 1]) : var_8);
                            var_27 = var_9;
                        }
                        var_28 = (arr_27 [i_8] [i_8] [i_8] [i_8] [i_8]);
                        arr_42 [i_8] [i_0] [i_0] [i_0] = var_4;
                    }
                    for (int i_13 = 2; i_13 < 18;i_13 += 1)
                    {
                        var_29 -= -4056896747622638709;
                        arr_46 [i_0] = (var_2 > 969917403);
                        var_30 = ((var_5 ? (arr_25 [i_6 + 1] [i_0 - 1] [i_1 - 1] [i_6] [i_0] [i_13 - 2]) : (arr_25 [i_6 + 3] [i_0 + 2] [i_1 + 1] [i_6 + 3] [i_6] [i_13 + 1])));

                        for (int i_14 = 1; i_14 < 17;i_14 += 1)
                        {
                            var_31 = var_8;
                            arr_49 [i_0] [i_13] [i_6] [i_6 + 2] [i_1] [i_0] = (((~var_4) == (~var_1)));
                        }
                    }
                    for (int i_15 = 1; i_15 < 18;i_15 += 1)
                    {

                        for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
                        {
                            var_32 = (arr_5 [i_0] [i_0] [i_0 - 4]);
                            arr_57 [i_6] [i_0] [1] = (((arr_52 [i_0 - 4] [i_16] [i_16] [i_0 - 4]) >= (arr_52 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2])));
                            var_33 = (max(var_33, ((((((var_4 ? var_8 : var_0))) ? var_2 : var_6)))));
                        }
                        for (int i_17 = 0; i_17 < 19;i_17 += 1) /* same iter space */
                        {
                            var_34 = ((var_4 ? (arr_50 [i_0 + 2] [i_0 + 2] [i_6 + 4]) : 65535));
                            arr_61 [i_0 - 2] [i_0] [i_6] [i_15] [i_17] = (((arr_31 [i_0 + 4] [i_1 + 1] [i_1 + 1] [i_6 + 3] [i_6 + 2] [i_15] [i_15 - 1]) ? (arr_31 [i_0 - 3] [i_1 + 1] [i_6] [i_6] [i_6 + 2] [i_15] [i_15 + 1]) : 14214994810368847843));
                        }
                        for (int i_18 = 0; i_18 < 19;i_18 += 1) /* same iter space */
                        {
                            var_35 = (var_7 <= var_7);
                            var_36 = (max(var_36, (((var_1 ? (arr_31 [i_1 - 1] [i_18] [i_18] [i_18] [i_18] [i_18] [14]) : var_2)))));
                            var_37 = (((((var_4 ? var_10 : var_5))) ? (!0) : var_9));
                            var_38 = 34;
                        }
                        var_39 = (((var_7 ? var_10 : var_5)));
                    }
                    var_40 = var_6;
                    var_41 = var_2;
                }
                /* LoopNest 2 */
                for (int i_19 = 2; i_19 < 18;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 19;i_20 += 1)
                    {
                        {
                            var_42 = var_1;
                            var_43 = (min(var_43, ((((arr_21 [i_1] [i_19 - 1] [i_19 + 1] [i_20] [i_20]) > ((var_7 ? var_9 : (!var_1))))))));
                            arr_69 [i_0] = (arr_21 [i_19 + 1] [i_1 - 1] [i_0 - 4] [i_0 - 4] [i_0 - 1]);
                            arr_70 [i_0] = ((((((max((arr_52 [i_0] [i_0] [i_0] [i_0]), var_8)) >> (((~var_10) + 250))))) ? (((var_6 + var_5) & 26572)) : ((max(((var_9 ? var_10 : var_5)), ((((arr_48 [i_0] [i_1] [11] [i_0]) <= var_0))))))));
                            var_44 = var_6;
                        }
                    }
                }
            }
        }
    }
    var_45 = (((var_8 + 9223372036854775807) >> (var_8 & var_7)));
    var_46 = var_2;
    /* LoopNest 3 */
    for (int i_21 = 0; i_21 < 21;i_21 += 1)
    {
        for (int i_22 = 0; i_22 < 21;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 21;i_23 += 1)
            {
                {
                    var_47 = var_9;
                    arr_78 [i_23] [i_23] [i_22] [i_21] = (((((-19 ? (var_4 >= var_9) : var_1))) & ((4488865057710028527 ? 4488865057710028542 : 2005605903))));
                }
            }
        }
    }
    #pragma endscop
}
