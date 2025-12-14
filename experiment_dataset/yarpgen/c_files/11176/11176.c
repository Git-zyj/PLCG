/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    var_21 = var_5;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_12 [i_3] [i_0] [i_3] = ((!(arr_1 [i_0])));

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            var_22 = ((!(!var_14)));
                            arr_17 [i_0] = ((!(arr_11 [0] [i_1] [i_1 + 2] [i_0])));
                            var_23 |= (!var_8);
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_20 [i_0] [i_3] [i_3 - 2] [i_2] [i_1] [i_0] = var_14;
                            var_24 -= (!(!var_9));
                            arr_21 [i_5] [i_0] [i_2] [i_3] [6] |= (~var_6);
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_25 = (!var_3);
                            var_26 = (min(var_26, ((((((((var_16 ? var_8 : (arr_24 [i_0] [i_0] [i_0] [i_0])))) ? (!var_4) : var_13)) >> ((((arr_6 [i_2 - 3] [i_1 + 3]) > (min(1464015875, var_4))))))))));
                            var_27 &= var_0;
                        }
                        var_28 = ((-(((!((min(20, 2830951446))))))));
                    }
                }
            }
            var_29 = (178 & 75);
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            arr_28 [i_0] = 8466883404071809630;
            var_30 = var_15;
            arr_29 [i_0] [i_0] = (((arr_2 [i_0]) ? (min(var_14, (((var_10 && (arr_10 [0] [0] [i_0] [0])))))) : (!var_7)));
            arr_30 [i_0] [i_0] = (~2830951438);
        }
        arr_31 [i_0] [i_0] = ((-((min(var_17, (arr_7 [i_0] [4] [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        var_31 = (2830951421 | 4159868504);
                        var_32 = (arr_18 [i_8] [i_8] [i_8] [i_8] [i_8]);
                    }

                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
                        {
                            var_33 = (arr_16 [i_0]);
                            var_34 = (max(var_34, var_9));
                            var_35 = ((!((!(!1)))));
                        }
                        for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
                        {
                            var_36 = (~var_4);
                            var_37 = (arr_11 [i_0] [i_0] [i_0] [i_0]);
                            arr_49 [i_0] [i_0] [i_0] [i_0] = (arr_43 [i_9] [i_9] [i_9] [i_9] [i_9] [10]);
                            arr_50 [i_0] [i_13] [i_0] [i_11 + 1] [i_13] = (arr_2 [i_0]);
                        }

                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_38 = ((2626203686 ? 2830951437 : 562949919866880));
                            var_39 = ((!((min(var_11, var_17)))));
                            var_40 = ((!((min((arr_41 [i_0] [i_8] [i_11] [i_8]), ((min((arr_36 [i_0]), var_13))))))));
                            var_41 = (max(var_41, var_7));
                        }

                        for (int i_15 = 0; i_15 < 12;i_15 += 1)
                        {
                            var_42 -= ((!((min((arr_51 [i_11 + 1] [i_11] [4] [i_11] [i_11]), (arr_51 [i_11 + 1] [10] [1] [1] [i_11]))))));
                            arr_55 [i_11] [i_0] [i_11 + 1] [4] = (((((arr_1 [i_8]) % (var_9 | var_13))) * (!var_6)));
                        }

                        for (int i_16 = 1; i_16 < 9;i_16 += 1)
                        {
                            var_43 = (arr_34 [i_0] [10] [i_0]);
                            var_44 ^= (!(!2830951417));
                            var_45 = ((~((-var_3 | (arr_18 [i_0] [9] [i_0] [i_0] [i_0])))));
                        }
                        for (int i_17 = 2; i_17 < 10;i_17 += 1)
                        {
                            arr_62 [i_0] [i_11 + 1] [i_0] [8] [2] [i_11 + 1] = min(((var_11 >> (arr_47 [i_11] [i_11] [i_9] [i_0]))), (arr_16 [i_11 + 1]));
                            arr_63 [1] [i_0] [i_9] [i_9] [i_17] = ((!(((14130704124752164165 ? 12331 : (arr_19 [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 1]))))));
                        }
                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            var_46 = (max(var_46, ((!((min((((arr_54 [i_0] [1] [1] [i_11] [i_0]) ? (arr_45 [i_18] [i_11] [2] [i_9] [2] [i_8] [i_0]) : var_18)), (arr_38 [i_11 + 1] [i_11 + 1] [0]))))))));
                            arr_66 [i_0] [i_8] [i_8] [i_8] [i_8] = ((+((var_18 ? (var_6 && var_14) : (min(127, 1464015868))))));
                        }

                        for (int i_19 = 0; i_19 < 12;i_19 += 1)
                        {
                            arr_71 [i_9] [i_9] [i_9] [i_0] [i_9] [i_9] [i_9] = var_1;
                            var_47 = ((((((arr_53 [i_0]) >= 2830951414)))) - (((-(arr_53 [i_0])))));
                        }
                        for (int i_20 = 0; i_20 < 12;i_20 += 1)
                        {
                            arr_76 [i_0] [i_0] [1] [i_0] [i_0] = (!var_19);
                            var_48 = (2830951434 < 19353757);
                        }
                        for (int i_21 = 2; i_21 < 8;i_21 += 1)
                        {
                            var_49 = ((var_4 >> ((((((var_17 ? var_17 : var_10))) || (((var_14 ? var_18 : var_6))))))));
                            arr_79 [i_0] = (((~524287) ? (!17559403344777945536) : ((min(var_16, (((!(arr_41 [i_8] [i_8] [2] [i_8])))))))));
                            arr_80 [i_0] [i_11] [8] [8] [i_0] = -1481764251609731577;
                        }
                    }
                    for (int i_22 = 2; i_22 < 11;i_22 += 1)
                    {
                        arr_84 [1] [i_8] [i_8] [i_8] &= var_11;
                        var_50 -= (1 & 130);

                        for (int i_23 = 0; i_23 < 12;i_23 += 1)
                        {
                            var_51 |= ((!((min((min(var_9, var_14)), (((!(arr_86 [i_23])))))))));
                            var_52 = (max(var_52, (arr_3 [0] [i_9])));
                            arr_87 [i_0] [i_0] [i_0] [i_0] [1] = ((2817048274 ? (max((((arr_9 [i_22 - 2] [i_22] [i_22 - 2]) ? (arr_53 [i_0]) : var_18)), (var_5 - var_4))) : (var_13 / var_8)));
                            var_53 = var_8;
                            var_54 = (min(var_54, var_18));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_24 = 0; i_24 < 12;i_24 += 1)
                    {
                        for (int i_25 = 3; i_25 < 10;i_25 += 1)
                        {
                            {
                                var_55 |= 4294967295;
                                var_56 -= 1;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_26 = 0; i_26 < 1;i_26 += 1) /* same iter space */
                    {

                        for (int i_27 = 0; i_27 < 12;i_27 += 1)
                        {
                            var_57 = var_13;
                            arr_97 [i_8] [i_8] [i_9] [i_0] [0] = (1 ^ -5589563289791006353);
                        }
                        var_58 = var_14;
                        var_59 = (arr_89 [i_26] [i_8]);
                        arr_98 [i_0] = (arr_27 [i_9] [4]);
                        var_60 = ((2859401223 >= (((var_8 / (arr_6 [i_0] [i_0]))))));
                    }
                    for (int i_28 = 0; i_28 < 1;i_28 += 1) /* same iter space */
                    {
                        var_61 = (max(var_61, var_6));
                        var_62 = arr_1 [i_9];
                    }
                    for (int i_29 = 0; i_29 < 12;i_29 += 1)
                    {

                        /* vectorizable */
                        for (int i_30 = 0; i_30 < 12;i_30 += 1)
                        {
                            var_63 = (max(var_63, (arr_61 [i_29] [i_29] [i_29])));
                            var_64 -= var_11;
                            var_65 = (min(var_65, ((((arr_78 [6] [i_29] [i_30] [i_9] [i_30] [i_8] [6]) ? (arr_102 [i_30] [i_9] [i_30]) : var_14)))));
                        }
                        arr_105 [i_8] [i_8] [i_29] [i_0] = ((3262 << (524285 - 524285)));
                    }
                }
            }
        }
    }
    for (int i_31 = 0; i_31 < 22;i_31 += 1)
    {
        var_66 += (arr_109 [0]);
        arr_110 [20] [20] &= var_3;
    }
    var_67 = ((min(((min(2830951448, 12331)), 562949919866906))));
    #pragma endscop
}
