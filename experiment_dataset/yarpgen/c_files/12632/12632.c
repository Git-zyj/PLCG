/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (65527 * 2147467264);
        var_20 = (~var_10);
        var_21 = -var_15;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_22 = (((!220) == var_8));
            arr_9 [i_1] [i_1] = (((((min(var_9, var_6)))) & (78219568182860677 | 238)));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_13 [i_1] [i_3] [i_1] = ((var_16 / var_8) * var_13);

            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                var_23 = (min((var_2 ^ var_5), ((max(var_11, var_17)))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            arr_23 [i_4] [i_4] [i_4] [i_4] [i_1] = (min(-var_17, var_2));
                            arr_24 [i_1] [i_1] = ((~(~1335891414670308181)));
                        }
                    }
                }
                arr_25 [i_1] [i_3] [i_1] = (min((max(26, 2147500020)), ((min(var_17, var_1)))));
                arr_26 [i_1] [i_3] [i_3] = (max((var_15 >> var_17), (~var_8)));
            }

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                arr_29 [i_1] [i_3] [i_7] [i_7] = (min((4072246912 - 65527), -60));
                arr_30 [7] [i_1] [i_7] [i_1] = (max(var_0, var_8));
                arr_31 [i_1] [i_1] [i_1] = ((~(min(var_1, var_16))));
            }
            for (int i_8 = 1; i_8 < 22;i_8 += 1)
            {

                for (int i_9 = 4; i_9 < 22;i_9 += 1)
                {
                    arr_38 [i_1] [i_1] = (max(((max(var_12, var_2))), (min((min(var_16, var_9)), var_7))));
                    arr_39 [i_1] [i_3] [i_8] [i_9] = ((+(((var_17 / var_10) - var_12))));
                    arr_40 [i_1] [6] [18] [i_1] = max(var_1, ((max(65527, 20333))));

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        arr_45 [i_1] [i_3] [0] [i_3] [i_3] &= (var_9 | var_1);
                        var_24 ^= var_8;
                    }
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        var_25 -= ((-(max(var_11, var_12))));
                        arr_50 [i_1] [i_1] [i_8] [13] [i_11] = (max((var_15 - var_1), ((min(var_15, var_10)))));
                        var_26 = ((-(!-1)));
                    }

                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        var_27 = (min((var_5 | var_9), (var_8 * var_13)));
                        var_28 = var_18;
                    }
                }
                arr_53 [i_1] [i_1] [1] [i_1] = (min(((min(var_9, var_15))), (230 | 251)));
            }
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        {
                            var_29 = var_11;
                            var_30 = (max((max(var_13, var_10)), var_15));
                            var_31 = max(var_1, (var_15 / var_7));
                            var_32 = (min(34811379, var_17));
                        }
                    }
                }

                /* vectorizable */
                for (int i_16 = 0; i_16 < 24;i_16 += 1)
                {
                    var_33 = (min(var_33, (var_15 == var_8)));
                    arr_65 [i_1] = (var_13 != var_13);
                    var_34 = (var_6 != var_15);
                }

                /* vectorizable */
                for (int i_17 = 1; i_17 < 22;i_17 += 1)
                {
                    var_35 += (var_5 | var_7);

                    for (int i_18 = 1; i_18 < 22;i_18 += 1)
                    {
                        arr_70 [i_13] [i_13] &= (var_8 * var_6);
                        arr_71 [i_1] [i_17] [i_13] [10] [i_1] = var_17;
                    }
                    arr_72 [i_1] [i_1] = var_16;
                }
            }
            /* vectorizable */
            for (int i_19 = 0; i_19 < 24;i_19 += 1)
            {
                arr_76 [i_1] [i_1] [i_1] [i_1] = -var_4;

                for (int i_20 = 0; i_20 < 24;i_20 += 1) /* same iter space */
                {
                    var_36 ^= (var_8 | var_13);
                    arr_79 [i_19] [i_1] = var_8;
                    var_37 = (max(var_37, var_2));
                }
                for (int i_21 = 0; i_21 < 24;i_21 += 1) /* same iter space */
                {
                    arr_84 [8] [i_3] |= (var_2 < var_18);
                    var_38 = (max(var_38, (var_10 == var_13)));
                    arr_85 [14] [i_19] [i_19] [i_1] [i_21] [i_19] = -var_15;

                    for (int i_22 = 3; i_22 < 21;i_22 += 1)
                    {
                        arr_88 [i_1] [i_3] [5] [i_1] [i_1] = (var_7 + var_6);
                        var_39 = (var_11 && var_2);
                        arr_89 [i_1] [i_1] [i_1] [i_1] [i_1] [1] [17] = -var_3;
                    }
                }
                for (int i_23 = 0; i_23 < 24;i_23 += 1) /* same iter space */
                {
                    var_40 &= (205 / 5);
                    var_41 = (~var_9);

                    for (int i_24 = 0; i_24 < 24;i_24 += 1)
                    {
                        arr_97 [19] [i_3] [i_24] [i_24] [i_1] [i_24] = var_18;
                        var_42 = (var_0 / var_1);
                        var_43 = (min(var_43, (~var_2)));
                    }
                    for (int i_25 = 2; i_25 < 21;i_25 += 1)
                    {
                        var_44 = (min(var_44, var_5));
                        arr_102 [i_1] [22] [i_1] [i_19] [i_19] [22] [i_25] = (var_1 && var_10);
                        var_45 = (var_7 | var_5);
                    }
                }
                for (int i_26 = 0; i_26 < 24;i_26 += 1) /* same iter space */
                {
                    var_46 = (~var_12);
                    var_47 += (var_12 || var_6);
                    arr_107 [1] [i_3] &= var_11;

                    for (int i_27 = 0; i_27 < 24;i_27 += 1) /* same iter space */
                    {
                        var_48 = (min(var_48, var_8));
                        var_49 ^= (~var_4);
                    }
                    for (int i_28 = 0; i_28 < 24;i_28 += 1) /* same iter space */
                    {
                        var_50 = var_7;
                        var_51 = (var_18 || var_7);
                    }
                    for (int i_29 = 0; i_29 < 24;i_29 += 1) /* same iter space */
                    {
                        arr_119 [i_1] [i_3] [i_1] = var_2;
                        arr_120 [i_1] [i_1] [i_19] [i_1] [i_29] = (var_1 && var_18);
                        var_52 -= (19925641513440956 <= -22814);
                    }
                }
            }
            var_53 = ((~(var_4 / var_4)));
        }
        arr_121 [i_1] = ((-(min(((max(var_9, var_9))), var_8))));
    }
    for (int i_30 = 0; i_30 < 24;i_30 += 1) /* same iter space */
    {

        for (int i_31 = 3; i_31 < 23;i_31 += 1)
        {
            arr_128 [i_30] = (~var_14);
            var_54 = (((var_13 && var_4) - (~var_2)));
            var_55 = (min(0, (!-1539426909)));
        }
        for (int i_32 = 0; i_32 < 24;i_32 += 1)
        {
            var_56 -= (min((min(var_7, var_8)), var_18));
            var_57 += (((var_14 == var_6) && (~var_7)));
        }
        for (int i_33 = 3; i_33 < 23;i_33 += 1)
        {
            /* LoopNest 3 */
            for (int i_34 = 0; i_34 < 24;i_34 += 1)
            {
                for (int i_35 = 1; i_35 < 1;i_35 += 1)
                {
                    for (int i_36 = 0; i_36 < 24;i_36 += 1)
                    {
                        {
                            var_58 *= (((max(var_12, var_1)) - ((var_3 & (min(var_12, var_17))))));
                            var_59 = (((((max(var_3, var_17)))) != (var_4 | var_14)));
                            arr_143 [i_36] [i_30] [i_30] [i_30] [i_30] [6] = ((!(var_2 <= var_17)));
                        }
                    }
                }
            }
            arr_144 [i_30] = (min(19, ((max(1, 32)))));
        }
        arr_145 [i_30] = ((-(((!var_18) * (250 > 4294967295)))));
    }
    #pragma endscop
}
