/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] = var_8;
                var_18 = (max(((~(~128))), ((~(~-674890128)))));
                arr_7 [i_0] = var_12;
            }
        }
    }

    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_19 = 123;
            var_20 = (min((max((~var_1), (min(var_7, -674890119)))), (~var_16)));
            var_21 = (min((((!((max(var_5, 96)))))), (max(86, 144))));

            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                var_22 = (max(((max(var_11, 123))), (max(0, (max(7168, -12545))))));
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        {
                            arr_22 [i_3] [i_3] [i_5] [i_6 + 1] [i_2] [i_5] [i_6] = ((-(!1710298408)));
                            arr_23 [i_2] [i_3] [5] [i_5] [i_2] [4] = ((!((!((min(var_8, var_9)))))));
                            var_23 = 674890118;
                            var_24 = (max(((max(7188, var_15))), (~var_15)));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_7 = 2; i_7 < 18;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            var_25 = (!var_17);
                            var_26 = (~-674890133);
                        }
                    }
                }
                arr_31 [i_2] [i_3] [i_3] = (!var_4);
                arr_32 [i_2] [i_2] [i_2] [i_2] &= var_17;
            }
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                arr_35 [i_2 - 1] = (max(163, (~-12546)));
                var_27 = 92;
                var_28 = ((-((-(min(-7176, var_17))))));
            }
            arr_36 [i_2] = (max(var_10, (max(var_7, 7172))));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    var_29 = -1;
                    var_30 = -7173;
                    var_31 = (!255);
                    var_32 = (max(var_32, var_14));
                }
                for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
                {
                    var_33 = (!var_5);
                    arr_46 [i_11] [i_11] [i_12] [i_12] = -76;
                    var_34 = var_3;
                    var_35 = var_14;
                }
                for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
                {
                    var_36 -= (~-2141504644);
                    var_37 = -57904;
                    var_38 = -119;
                    arr_49 [i_11] [i_11] = (~400729678);
                    var_39 = (~var_3);
                }
                var_40 = (~var_16);
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 21;i_17 += 1)
                    {
                        {
                            var_41 = var_17;
                            var_42 = (min(var_42, (!var_7)));
                        }
                    }
                }
                arr_56 [i_11] [i_11] [i_11] = -var_1;
            }
            for (int i_18 = 0; i_18 < 21;i_18 += 1)
            {
                arr_60 [i_11] [i_11] [i_11] = 7180;
                arr_61 [i_2] [7] [i_11] [i_11] = (!7);
            }
            var_43 = ((~(~32761)));
        }
        for (int i_19 = 0; i_19 < 21;i_19 += 1)
        {

            for (int i_20 = 0; i_20 < 21;i_20 += 1)
            {
                arr_68 [i_2] [i_19] [i_20] = var_1;
                arr_69 [i_2 + 4] [i_2] [i_2] |= (max((-2147483647 - 1), (max(var_12, 4366055986682508663))));
            }
            for (int i_21 = 0; i_21 < 21;i_21 += 1)
            {
                var_44 = var_2;
                arr_72 [i_2] [i_2] |= min((max(49, 2147483647)), 7172);
                var_45 = ((((!((min(var_2, 4294967295)))))));
                var_46 &= 7638;
            }
            for (int i_22 = 4; i_22 < 19;i_22 += 1) /* same iter space */
            {
                var_47 = ((!((min((max(7638, var_13)), ((max(-12, var_13))))))));
                arr_75 [i_22] [i_22] [i_22] = ((-(max(-var_15, 205))));
                var_48 -= ((-(~4294967280)));
            }
            for (int i_23 = 4; i_23 < 19;i_23 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 21;i_24 += 1)
                {
                    for (int i_25 = 3; i_25 < 20;i_25 += 1)
                    {
                        {
                            var_49 = (min((!var_9), (min(var_16, var_9))));
                            var_50 = var_17;
                        }
                    }
                }
                var_51 = ((!((max(((max(var_8, var_3))), (~var_17))))));
            }
            var_52 = (max(-12, 7190));
        }
        /* LoopNest 2 */
        for (int i_26 = 1; i_26 < 20;i_26 += 1)
        {
            for (int i_27 = 0; i_27 < 21;i_27 += 1)
            {
                {

                    for (int i_28 = 4; i_28 < 19;i_28 += 1)
                    {

                        /* vectorizable */
                        for (int i_29 = 0; i_29 < 21;i_29 += 1)
                        {
                            var_53 = var_8;
                            var_54 = (~var_13);
                        }

                        for (int i_30 = 0; i_30 < 21;i_30 += 1) /* same iter space */
                        {
                            var_55 = (!15);
                            var_56 = 205;
                            var_57 = 32760;
                        }
                        for (int i_31 = 0; i_31 < 21;i_31 += 1) /* same iter space */
                        {
                            var_58 = (max(((min((!61524), (!1185002700)))), (max(var_6, (max(238, var_14))))));
                            arr_98 [20] [i_26] [i_26] [i_2 - 2] [17] = (min(137, 2384284232));
                            var_59 = (max(((max(255, 18446744073709551615))), var_16));
                        }
                    }
                    arr_99 [i_26] [13] [i_2] [i_26] = (min((~18446744073709551615), (max(var_17, -115))));
                    arr_100 [i_2] [6] [i_26] [i_27] = ((~(min(var_16, 2857678377))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_32 = 0; i_32 < 23;i_32 += 1)
    {
        var_60 = 8;
        arr_103 [i_32] = var_12;
        arr_104 [i_32] = -249;
    }
    #pragma endscop
}
