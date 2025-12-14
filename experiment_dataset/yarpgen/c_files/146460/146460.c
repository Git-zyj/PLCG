/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = var_15;
                var_19 = (max(var_19, ((!(((max(var_11, var_7))))))));
                var_20 = (min(-941756552461907156, 15));
                var_21 = (((min((arr_5 [i_1]), (min((arr_5 [i_1]), (-9223372036854775807 - 1))))) * (((((var_12 > 30) > (min(258048, 0))))))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_22 = (arr_1 [i_0]);

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        arr_13 [i_3] [i_2] [i_1] [i_1] [i_0] [i_0] = (min(((((min(var_5, 32768))) ? var_4 : ((var_5 ? var_11 : var_0)))), (((8 / (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        var_23 = (arr_3 [i_3]);
                    }
                    arr_14 [i_0] [i_1] [i_1] [i_1] = min(var_15, (((var_4 ^ (arr_8 [i_1] [i_1] [i_2])))));
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_24 = (min(var_24, 0));
                    var_25 = (max(var_25, (((((max((var_7 && var_10), ((var_1 ? var_8 : var_2))))) || ((min(var_13, 28))))))));
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 19;i_5 += 1)
                {
                    var_26 *= (!-36);
                    var_27 -= (((arr_11 [i_0] [i_0] [i_0] [i_0]) < (arr_11 [i_5 + 1] [i_5] [i_5] [i_0])));
                }
            }
        }
    }
    var_28 = var_2;
    var_29 = 222;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            {
                arr_24 [i_6] [4] &= ((((min((~228), (min((arr_20 [i_6] [i_6]), var_12))))) ? 15 : (((max(var_11, -30))))));

                for (int i_8 = 1; i_8 < 10;i_8 += 1)
                {
                    var_30 = 9;
                    arr_28 [i_7] = (max(var_16, (min(((min(68, 1))), (~3656540240695792536)))));
                    var_31 *= (((((arr_1 [0]) << (var_17 + 1868366458861854773))) * (((!((max(var_4, (arr_9 [0])))))))));
                }
                for (int i_9 = 3; i_9 < 11;i_9 += 1)
                {
                    var_32 = (((9 ? ((max((arr_11 [i_9 + 1] [i_7] [i_7] [i_6]), var_4))) : (((arr_30 [i_6] [i_7] [1]) & var_10)))));
                    arr_32 [0] [4] [i_9 + 1] &= ((!((min(((max(var_9, 231))), (arr_8 [0] [i_7 - 1] [i_9]))))));
                    arr_33 [8] [4] [2] &= (arr_5 [12]);
                }
                for (int i_10 = 2; i_10 < 8;i_10 += 1) /* same iter space */
                {
                    arr_36 [i_10 - 1] [i_7] [i_10] = min((min(228, var_17)), (((1 >> ((((8191 ? var_1 : var_4)) - 5585023060053718228))))));

                    for (int i_11 = 2; i_11 < 10;i_11 += 1) /* same iter space */
                    {
                        var_33 &= (var_1 >> (((min((arr_2 [i_10] [i_10]), (arr_20 [i_7] [i_10 + 3]))))));

                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            var_34 = (max(var_34, var_16));
                            var_35 = (max(var_35, (arr_4 [i_10])));
                            arr_41 [i_6] [i_7 - 1] [i_10] [i_11 + 1] [i_6] [i_7] = (arr_6 [i_6] [i_12] [i_10 - 2]);
                        }
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            arr_44 [11] [11] [11] [i_7] [3] = (((arr_15 [i_6] [i_7] [i_11 - 1] [i_7]) && var_13));
                            var_36 *= (min((30 & var_5), 8070450532247928832));
                            var_37 = ((((((arr_20 [i_7 - 1] [i_7 - 1]) + 110))) ? ((min(105, var_1))) : (var_11 || 36)));
                            arr_45 [8] [i_7] [3] [i_7] [i_7] [0] [i_13] = (max((min(var_16, (min((arr_3 [19]), 1)))), (((var_2 / (arr_23 [i_7 - 1] [i_7] [7]))))));
                            arr_46 [i_13] [1] [i_13] [i_13] [i_13] [8] [i_7] = var_13;
                        }
                        arr_47 [i_6] [i_7] [i_7] [i_11] [i_11] = (((~((var_11 >> (var_1 - 5585023060053718222))))));
                        arr_48 [i_6] [i_7] [i_7] [2] [i_11 - 2] = (((1 ? 1 : -30)));
                        arr_49 [i_11] [i_7] [i_7] [i_6] = ((!(((-((8468254225693632765 >> (-350731883131694672 + 350731883131694673))))))));
                    }
                    for (int i_14 = 2; i_14 < 10;i_14 += 1) /* same iter space */
                    {
                        arr_54 [i_6] [i_10] [i_10] [i_14 + 1] &= 32767;

                        /* vectorizable */
                        for (int i_15 = 2; i_15 < 10;i_15 += 1)
                        {
                            arr_57 [i_6] [i_7] [i_6] [i_6] [i_7] = (!(arr_7 [i_6] [i_10 + 3] [i_6]));
                            var_38 = (~var_15);
                            var_39 = ((arr_20 [i_14 - 2] [i_15 - 2]) ? (arr_37 [i_6] [i_6] [i_10] [i_10] [i_10 - 1]) : (arr_2 [i_15] [i_15 + 2]));
                        }
                    }
                }
                for (int i_16 = 2; i_16 < 8;i_16 += 1) /* same iter space */
                {
                    arr_60 [i_6] [i_7] [i_6] = (-6330 / 23640);

                    for (int i_17 = 2; i_17 < 10;i_17 += 1)
                    {
                        var_40 *= ((var_10 ? (arr_23 [i_7 - 1] [i_17] [i_7 - 1]) : (min(36, var_7))));
                        var_41 = var_12;
                        var_42 = ((-195 < ((-(min(var_0, var_11))))));
                        var_43 = (max(((1 ? 14172953550090596734 : 6643022613747030483)), ((1 ? (arr_61 [i_7] [i_7 - 1] [i_7] [i_7]) : -15))));
                    }
                    for (int i_18 = 0; i_18 < 12;i_18 += 1)
                    {
                        arr_67 [i_7] [i_7] = ((0 ? (min(-13938, 17774560003925415088)) : (((max(-30, 249))))));
                        var_44 += ((~(arr_30 [i_18] [i_16] [i_6])));
                        arr_68 [i_18] [i_16 + 4] [i_7] [i_7] [i_6] [i_6] = ((~(((((var_6 >> (arr_63 [i_6] [i_6] [i_6])))) ? (max((arr_12 [i_16] [i_7]), var_1)) : (arr_2 [i_16] [i_16 + 2])))));
                    }
                }
                /* LoopNest 2 */
                for (int i_19 = 2; i_19 < 11;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 12;i_20 += 1)
                    {
                        {
                            var_45 |= ((((min((arr_22 [i_6] [0] [i_20]), (arr_8 [2] [2] [16])))) ? (min(22, 115)) : var_4));
                            arr_75 [i_7] = (min(((((arr_72 [i_7 - 1] [i_7 - 1] [i_19 - 1] [i_19 - 2]) ? var_1 : var_5))), (min(9941241445506682104, (arr_56 [i_7 - 1] [i_7 - 1] [i_7 - 1])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
