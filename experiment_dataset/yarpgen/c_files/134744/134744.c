/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_20 = (min(var_20, ((((arr_3 [i_0] [i_1] [i_1]) ? 37781 : (arr_3 [i_0] [i_0] [3]))))));
            var_21 &= var_16;
        }

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_22 = (!0);
            var_23 = ((var_9 ? var_3 : (arr_3 [i_0] [i_2] [i_0])));
        }
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            var_24 = (((arr_2 [8]) == (arr_5 [i_0] [i_3])));

            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                var_25 = ((!1) << (((arr_1 [6]) - 7757325492126748773)));
                var_26 = (min(var_26, var_16));
            }
            for (int i_5 = 3; i_5 < 10;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_27 = arr_4 [i_3 - 1];
                        var_28 = (!-1505848056);
                        var_29 = var_9;
                        var_30 = (1 - 8387584);
                    }
                    var_31 &= 33;
                    var_32 = 8387568;
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    var_33 ^= (((arr_21 [i_5 - 1]) ? var_8 : (arr_12 [i_8] [i_5 - 2] [3] [i_0])));
                    var_34 = (((1 ? var_12 : (arr_20 [i_0] [i_3 + 1] [0] [2] [4]))));
                }
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    var_35 = 9098;
                    var_36 = (var_2 || (arr_23 [i_3 - 1] [i_5] [i_5 - 3] [9]));
                }
                var_37 ^= (arr_14 [i_0] [10] [i_3] [6]);

                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        var_38 = (arr_34 [i_0] [i_3 + 2] [i_5 + 1] [1] [i_5 + 1] [i_5]);
                        var_39 = 28003;
                        var_40 = (arr_8 [i_3 + 1]);
                    }
                    var_41 -= (((arr_29 [i_5] [i_0] [i_5] [i_3 + 3]) - (arr_29 [5] [i_3 + 3] [i_5 + 2] [i_3 + 2])));
                }
            }
            for (int i_12 = 1; i_12 < 8;i_12 += 1)
            {
                var_42 = (((arr_21 [i_0]) ? (arr_18 [i_0] [i_3] [i_12 + 2] [i_12 + 3]) : -115));
                var_43 *= (arr_31 [i_0]);
            }
            var_44 = var_13;

            for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        {
                            var_45 = (!var_6);
                            var_46 = (arr_21 [i_3]);
                        }
                    }
                }

                for (int i_16 = 1; i_16 < 10;i_16 += 1)
                {
                    var_47 = (min(var_47, (((arr_14 [i_3 - 1] [i_3 - 1] [i_16 + 1] [i_16 - 1]) & var_16))));

                    for (int i_17 = 0; i_17 < 12;i_17 += 1)
                    {
                        var_48 = var_10;
                        var_49 = (min(var_49, ((((var_5 | var_3) < (((~(arr_43 [i_0] [i_3 + 3] [i_13] [i_17])))))))));
                        var_50 = ((1 ? 8794149404642937310 : (var_1 | 5)));
                        var_51 = (max(var_51, (((~((((arr_19 [i_0] [i_0] [i_13] [i_16 + 1] [11] [i_17]) < var_5))))))));
                        var_52 = var_11;
                    }
                    for (int i_18 = 0; i_18 < 12;i_18 += 1)
                    {
                        var_53 = var_13;
                        var_54 = var_8;
                        var_55 = (var_4 != 1);
                    }
                }
                for (int i_19 = 0; i_19 < 12;i_19 += 1)
                {
                    var_56 = (max(var_56, var_3));
                    var_57 = ((var_15 ? (arr_47 [i_3 - 1] [i_3] [6] [2] [i_3 + 2]) : 1));
                }
                var_58 ^= (arr_47 [i_0] [i_3 + 1] [i_3 + 2] [i_13] [i_13]);
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 12;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 12;i_21 += 1)
                    {
                        {
                            var_59 = (max(var_59, (-11 || var_18)));
                            var_60 = var_1;
                            var_61 = ((31 | (((arr_23 [i_0] [i_3 + 3] [i_13] [6]) ? -1103038140 : (arr_52 [i_21] [i_20] [10] [i_3] [i_0])))));
                        }
                    }
                }
            }
            for (int i_22 = 0; i_22 < 12;i_22 += 1) /* same iter space */
            {
                var_62 *= (arr_25 [0] [i_22]);

                for (int i_23 = 0; i_23 < 12;i_23 += 1)
                {
                    var_63 = -var_16;
                    var_64 = (arr_36 [8]);
                    var_65 = var_0;

                    for (int i_24 = 0; i_24 < 12;i_24 += 1)
                    {
                        var_66 = (3782538315764302860 || var_17);
                        var_67 = (!14159565918803149306);
                    }
                    for (int i_25 = 0; i_25 < 12;i_25 += 1)
                    {
                        var_68 = (min(var_68, ((((arr_39 [i_25]) ? ((-3361023106150493677 - (arr_43 [i_0] [i_3] [4] [2]))) : 1)))));
                        var_69 = (~-13);
                    }
                    for (int i_26 = 2; i_26 < 8;i_26 += 1)
                    {
                        var_70 = (31 != var_13);
                        var_71 = var_12;
                        var_72 = -var_7;
                        var_73 = (max(var_73, 6141326468498678132));
                    }
                }
                var_74 = (((var_2 <= (arr_33 [3] [i_0] [i_0] [i_0] [i_3 + 1] [i_0] [6]))) ? var_5 : var_2);
                var_75 = (max(var_75, (2624178951 != var_15)));
            }
        }
        for (int i_27 = 1; i_27 < 9;i_27 += 1)
        {
            var_76 = 42842;
            /* LoopNest 3 */
            for (int i_28 = 0; i_28 < 12;i_28 += 1)
            {
                for (int i_29 = 0; i_29 < 12;i_29 += 1)
                {
                    for (int i_30 = 4; i_30 < 11;i_30 += 1)
                    {
                        {
                            var_77 &= (((var_7 ^ (arr_22 [i_30] [i_30 - 3] [8] [i_28] [i_27 + 3] [i_0]))));
                            var_78 &= var_8;
                        }
                    }
                }
            }
            var_79 = (((~1) - -var_5));
        }
        var_80 = (!397892558099496472);
    }
    var_81 &= ((!(((var_9 ? (!var_15) : (var_14 + var_18))))));
    #pragma endscop
}
