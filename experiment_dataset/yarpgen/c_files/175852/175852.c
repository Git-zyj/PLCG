/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!((max(var_2, (!var_4))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_15 = var_2;
            arr_5 [i_0] = ((~(((!(~var_6))))));

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                arr_10 [i_0] = var_12;
                var_16 ^= var_9;
                arr_11 [i_0] [i_1] [i_2] = (max((!-var_8), var_13));
                arr_12 [i_0] [5] [i_0] = (max((~-var_9), (max(2836532088048345893, 244968572415178755))));
                arr_13 [i_2] [i_1] [2] = (min((max((max(var_12, var_10)), var_7)), var_6));
            }
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_17 = var_2;
                var_18 = (max(var_18, var_6));
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_19 = (max(-var_3, (max(var_9, (min(var_8, var_12))))));
                var_20 = ((!(((~(~var_5))))));
                var_21 = var_10;
            }
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_21 [i_0] [i_5] = var_1;

            for (int i_6 = 4; i_6 < 17;i_6 += 1)
            {
                arr_26 [i_0] [i_0] [i_0] [6] = (min(var_9, (~25)));
                arr_27 [i_5] [i_5] [i_5] = (min(var_0, var_0));
                arr_28 [i_0] [i_5] &= var_8;
            }
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                var_22 = var_5;
                var_23 = var_11;
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        {
                            var_24 = max((((!(~var_3)))), var_12);
                            var_25 = var_10;
                            arr_38 [i_0] = var_3;
                        }
                    }
                }
            }
        }
        for (int i_10 = 1; i_10 < 17;i_10 += 1)
        {
            var_26 = (!var_10);
            var_27 |= ((-((~(max(var_9, var_10))))));
            var_28 = (min(var_28, (~var_11)));
            arr_41 [i_0] = (min((!var_10), (min(var_11, -var_11))));
        }
        arr_42 [i_0] [i_0] = ((!((min(var_0, var_8)))));

        for (int i_11 = 1; i_11 < 18;i_11 += 1)
        {
            var_29 = var_7;
            arr_46 [i_11] [i_11 - 1] [i_11 - 1] = var_13;
        }
        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        {
                            arr_59 [i_0] [i_12] [i_12] [i_14] [i_15] = (min(var_11, var_8));
                            var_30 *= var_7;
                        }
                    }
                }
            }
            var_31 = (min(var_31, var_11));

            /* vectorizable */
            for (int i_16 = 0; i_16 < 19;i_16 += 1)
            {
                arr_62 [i_12] = ((!(~var_10)));
                var_32 -= (!var_2);
            }
            /* vectorizable */
            for (int i_17 = 0; i_17 < 19;i_17 += 1)
            {
                var_33 = (min(var_33, var_10));

                for (int i_18 = 0; i_18 < 19;i_18 += 1)
                {
                    var_34 = var_4;
                    var_35 = -var_6;
                }
            }
            for (int i_19 = 0; i_19 < 19;i_19 += 1)
            {
                var_36 = ((-((~(min(var_0, var_1))))));
                /* LoopNest 2 */
                for (int i_20 = 1; i_20 < 16;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 19;i_21 += 1)
                    {
                        {
                            var_37 = ((!(!244)));
                            arr_74 [i_0] [i_0] [i_12] [i_20 - 1] [i_21] = (max((max((~var_6), (~var_8))), (min(-var_9, var_0))));
                        }
                    }
                }
                arr_75 [i_12] = ((!((!(!var_0)))));
            }

            for (int i_22 = 1; i_22 < 18;i_22 += 1)
            {
                var_38 = (max((~var_8), var_13));
                arr_78 [i_12] = var_9;
                var_39 = var_8;
                var_40 -= (-(((!(~var_4)))));
            }
        }
        arr_79 [i_0] [i_0] |= var_6;
    }
    for (int i_23 = 0; i_23 < 19;i_23 += 1) /* same iter space */
    {
        var_41 &= (~var_3);

        for (int i_24 = 0; i_24 < 19;i_24 += 1)
        {
            var_42 = var_1;
            var_43 = var_5;
            var_44 += (min(var_10, (!var_1)));
        }
    }
    for (int i_25 = 0; i_25 < 23;i_25 += 1)
    {
        arr_89 [6] [10] |= (max((((-(~var_10)))), (max((max(var_10, var_5)), var_7))));
        arr_90 [i_25] [i_25] = (!var_7);
    }
    for (int i_26 = 1; i_26 < 7;i_26 += 1)
    {
        var_45 = (max(var_13, var_4));
        /* LoopNest 2 */
        for (int i_27 = 0; i_27 < 10;i_27 += 1)
        {
            for (int i_28 = 0; i_28 < 10;i_28 += 1)
            {
                {
                    var_46 &= (min((max(var_1, (!var_2))), (~var_4)));
                    var_47 = var_10;

                    for (int i_29 = 0; i_29 < 10;i_29 += 1)
                    {
                        arr_103 [i_27] [i_28] = var_13;

                        for (int i_30 = 0; i_30 < 10;i_30 += 1)
                        {
                            var_48 = (~var_1);
                            var_49 = var_3;
                        }
                        var_50 *= (min((((~((max(var_6, var_7)))))), (min(((max(var_2, var_3))), var_4))));
                    }
                }
            }
        }
        var_51 -= (max(var_8, -var_2));
    }
    var_52 = var_10;

    for (int i_31 = 0; i_31 < 25;i_31 += 1)
    {
        var_53 &= var_7;
        /* LoopNest 2 */
        for (int i_32 = 0; i_32 < 25;i_32 += 1)
        {
            for (int i_33 = 0; i_33 < 1;i_33 += 1)
            {
                {
                    arr_117 [i_32] [i_32] [i_32] [i_32] &= max(((max(var_2, (!var_0)))), (max((!var_7), var_1)));
                    var_54 *= var_0;
                    var_55 = var_2;
                    var_56 = ((-((-(~var_6)))));
                    var_57 += (max(-var_7, (max(var_9, var_11))));
                }
            }
        }
    }
    for (int i_34 = 2; i_34 < 23;i_34 += 1)
    {
        var_58 *= var_5;
        /* LoopNest 3 */
        for (int i_35 = 0; i_35 < 24;i_35 += 1)
        {
            for (int i_36 = 0; i_36 < 24;i_36 += 1)
            {
                for (int i_37 = 0; i_37 < 24;i_37 += 1)
                {
                    {
                        arr_130 [i_34] [i_34] [i_34] = var_10;
                        arr_131 [i_34] [i_34] [8] [i_37] = (~var_13);
                        arr_132 [i_34] = var_10;
                        var_59 = var_5;
                    }
                }
            }
        }
        var_60 &= (~((~(~var_0))));
        arr_133 [i_34] [i_34] = (~var_11);
    }
    for (int i_38 = 0; i_38 < 13;i_38 += 1)
    {
        arr_136 [6] = (~var_7);
        var_61 = (max(-var_12, ((max(var_11, var_5)))));
        /* LoopNest 2 */
        for (int i_39 = 2; i_39 < 9;i_39 += 1)
        {
            for (int i_40 = 0; i_40 < 13;i_40 += 1)
            {
                {
                    var_62 = var_11;
                    var_63 = -var_6;
                }
            }
        }
        arr_141 [i_38] |= (!var_3);
    }
    /* LoopNest 2 */
    for (int i_41 = 3; i_41 < 17;i_41 += 1)
    {
        for (int i_42 = 0; i_42 < 19;i_42 += 1)
        {
            {
                var_64 += (!29);
                /* LoopNest 2 */
                for (int i_43 = 0; i_43 < 19;i_43 += 1)
                {
                    for (int i_44 = 3; i_44 < 15;i_44 += 1)
                    {
                        {
                            arr_155 [i_41] [i_41] [i_44] [i_44] [i_44 + 3] = var_10;
                            var_65 *= var_7;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
