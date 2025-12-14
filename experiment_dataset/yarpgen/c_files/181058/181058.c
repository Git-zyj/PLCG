/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_20 -= 0;
            var_21 = (min(var_21, -1));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_22 = var_10;
                            var_23 = (-var_4 <= (0 ^ var_7));
                            var_24 = (687361930 * -73445435);
                            var_25 = arr_9 [i_0] [i_0] [i_0] [i_0];
                        }
                    }
                }
                var_26 = (arr_4 [i_0] [i_2]);
            }
            /* vectorizable */
            for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
            {
                arr_18 [i_0] [i_2] [1] [i_0] = (((arr_0 [i_6 - 1] [i_6 - 2]) + var_15));
                var_27 *= 268402688;
                var_28 = var_13;

                for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                {
                    arr_22 [i_0] [i_0] [i_0] [i_0] [i_2] [1] &= 1713424467;
                    var_29 *= (arr_15 [16] [i_6 + 1] [i_6] [i_6] [i_6 + 2] [i_6] [22]);
                    arr_23 [i_0] [i_6] [11] [i_2] [i_0] = 2500370438;
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                {
                    arr_28 [i_0] [i_0] [20] [i_6 + 3] [i_0] [11] = arr_25 [i_0];
                    var_30 = (arr_8 [1] [i_2] [1] [i_8]);
                    var_31 += 1;
                }
            }
            for (int i_9 = 2; i_9 < 20;i_9 += 1) /* same iter space */
            {
                arr_31 [i_9] [i_2] [i_9 + 2] &= arr_29 [i_9] [i_9] [i_9] [i_9];

                for (int i_10 = 2; i_10 < 22;i_10 += 1)
                {
                    var_32 = ((1 ^ var_6) >> (((var_7 > (arr_27 [i_9] [i_9 + 2] [i_9 + 1] [i_9] [0])))));
                    var_33 = ((((((var_4 <= 1) < var_10))) * (!var_13)));
                    arr_36 [i_0] = var_16;
                }
                for (int i_11 = 0; i_11 < 0;i_11 += 1)
                {
                    arr_39 [i_0] [i_0] [i_2] [i_2] [i_11] = (!(arr_30 [i_0] [i_9 + 2]));
                    arr_40 [0] [i_2] [i_0] [1] = ((var_18 >> (1171113833 - 1171113806)));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    var_34 = -2373687010;
                    arr_45 [i_0] [i_0] = (arr_8 [i_0] [i_0] [i_9] [i_12]);
                    arr_46 [10] [i_0] = 0;
                }
                var_35 += var_11;
            }
            var_36 -= ((!((min(var_0, (arr_15 [1] [1] [i_2] [1] [i_2] [i_2] [i_2]))))));
            var_37 = (arr_30 [i_0] [i_2]);

            for (int i_13 = 1; i_13 < 1;i_13 += 1)
            {

                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    var_38 = ((((((min(1880304880, (arr_35 [i_14] [i_13] [1] [1] [i_2] [i_0])))))) <= 2387968663));
                    var_39 *= (min((!-0), (~1)));
                }
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    var_40 = (arr_19 [i_13] [i_13 - 1] [i_13 - 1] [i_13] [i_15]);
                    arr_54 [i_0] [0] [i_2] [i_0] = var_1;
                }
                var_41 = 0;
            }
        }
        var_42 &= (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [1] [i_0]);

        for (int i_16 = 0; i_16 < 23;i_16 += 1)
        {
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    {
                        arr_62 [i_0] [i_16] [i_0] [i_17] [i_0] = ((~((1 ^ (arr_32 [i_16] [i_0] [i_0])))));
                        arr_63 [i_0] [i_0] [i_0] = (0 == ((var_5 >> (((arr_3 [i_0] [i_16] [i_17]) - 487635448)))));
                        arr_64 [i_0] [i_16] [i_0] = 1;
                        var_43 -= var_13;
                    }
                }
            }

            for (int i_19 = 0; i_19 < 0;i_19 += 1)
            {
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        {
                            var_44 -= ((-((~(arr_21 [i_0] [i_16] [i_19 + 1] [i_0] [i_21])))));
                            arr_71 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 2866341940;
                            var_45 = var_15;
                        }
                    }
                }
                var_46 = (max(var_46, 1396777708));
            }
            for (int i_22 = 0; i_22 < 1;i_22 += 1)
            {
                arr_76 [i_22] [i_16] [i_16] [12] &= arr_57 [15] [11] [15] [i_0];
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 1;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 23;i_24 += 1)
                    {
                        {
                            var_47 = arr_68 [i_23] [i_16] [i_0];
                            var_48 = arr_69 [i_0] [i_16];
                            var_49 = var_2;
                        }
                    }
                }
                arr_81 [i_0] [1] [i_22] = max(-1, (max((arr_57 [i_0] [i_16] [i_16] [i_22]), (arr_57 [i_0] [i_16] [3] [11]))));
                var_50 = ((~((~(arr_52 [i_0] [i_0] [i_16] [10] [i_16] [i_22])))));
            }
        }
        for (int i_25 = 3; i_25 < 22;i_25 += 1) /* same iter space */
        {

            for (int i_26 = 0; i_26 < 1;i_26 += 1)
            {
                arr_88 [i_0] [1] [i_0] = 2581542828;
                var_51 = (min(var_51, ((max(0, (arr_66 [i_0] [i_25]))))));
                arr_89 [i_26] [i_26] [i_0] = (min((min(var_12, var_2)), (min(var_6, 4294967286))));
            }
            var_52 = arr_82 [i_0];

            for (int i_27 = 2; i_27 < 22;i_27 += 1)
            {
                var_53 &= (!(~var_14));
                var_54 = var_17;
                arr_93 [i_0] [i_25 - 2] [i_25 + 1] [i_0] = -1396777708;

                for (int i_28 = 2; i_28 < 20;i_28 += 1)
                {
                    var_55 |= (max(1, var_1));
                    arr_96 [i_0] [i_28] [i_27 - 2] [i_28] |= arr_38 [i_0] [i_0] [i_0] [i_0];
                }

                for (int i_29 = 0; i_29 < 1;i_29 += 1)
                {
                    arr_101 [2] [i_25] [i_27] [i_25] [i_0] &= ((var_11 >> (arr_59 [i_27 + 1] [i_27 + 1] [i_25 - 1] [i_25 - 1])));
                    var_56 |= 3970518976;
                    var_57 = (min(var_57, (max((arr_68 [i_27] [i_25 - 1] [i_25 - 1]), 3757721670))));

                    for (int i_30 = 0; i_30 < 23;i_30 += 1)
                    {
                        var_58 = (max(var_58, (min(((((!(arr_61 [i_0]))))), 1))));
                        var_59 *= (min(((((arr_67 [i_25 - 2] [i_27] [i_27] [1] [i_27] [i_27 + 1]) > var_6))), (0 / var_10)));
                    }
                }
            }
            for (int i_31 = 0; i_31 < 1;i_31 += 1)
            {

                for (int i_32 = 0; i_32 < 0;i_32 += 1)
                {

                    /* vectorizable */
                    for (int i_33 = 0; i_33 < 23;i_33 += 1)
                    {
                        var_60 = (max(var_60, (((-(arr_67 [i_32 + 1] [i_32 + 1] [i_33] [i_33] [i_32 + 1] [i_25 - 3]))))));
                        arr_113 [i_33] [i_32] [i_0] [i_0] [i_0] [i_0] = -1;
                    }

                    for (int i_34 = 0; i_34 < 1;i_34 += 1)
                    {
                        var_61 = (((((!(arr_16 [13] [i_31] [i_32] [i_34]))))) * (((arr_84 [i_0] [i_0] [i_32 + 1]) ^ 2119746083)));
                        arr_116 [i_0] [i_32 + 1] [i_31] [i_25] [i_0] = (min(1, 2898189610));
                        var_62 = (~(min((arr_4 [i_0] [i_32 + 1]), var_6)));
                    }
                    var_63 = (arr_100 [i_32] [7] [i_0] [1] [i_32 + 1]);
                    var_64 = (!var_12);
                }

                for (int i_35 = 0; i_35 < 23;i_35 += 1) /* same iter space */
                {
                    var_65 = (arr_10 [i_25 + 1] [i_25 - 1]);
                    arr_120 [i_35] [0] [4] [i_35] |= arr_69 [i_35] [i_25 - 2];
                }
                for (int i_36 = 0; i_36 < 23;i_36 += 1) /* same iter space */
                {
                    var_66 ^= var_7;
                    arr_123 [i_36] [i_0] [i_0] [i_0] = ((1 % (((((((1 >= (arr_33 [4] [i_25 - 3] [4] [i_0]))))) < var_0)))));
                }
                /* vectorizable */
                for (int i_37 = 2; i_37 < 20;i_37 += 1) /* same iter space */
                {

                    for (int i_38 = 0; i_38 < 23;i_38 += 1)
                    {
                        var_67 &= var_13;
                        var_68 = 1;
                        arr_128 [i_0] [i_0] [i_38] = (~var_4);
                        arr_129 [i_0] [i_25 - 3] [i_25 - 2] [i_25 - 2] [1] [5] [i_0] = ((-(arr_98 [i_0] [i_37 - 2])));
                    }
                    for (int i_39 = 0; i_39 < 1;i_39 += 1)
                    {
                        var_69 = (arr_42 [i_0] [i_0] [i_31] [i_37 - 2]);
                        var_70 = 1;
                    }
                    var_71 += 1;
                    var_72 = ((arr_98 [i_0] [i_25 - 3]) - var_1);
                    var_73 ^= arr_70 [i_0] [i_37 + 1] [i_37 - 1] [i_37 + 1] [i_37];
                }
                for (int i_40 = 2; i_40 < 20;i_40 += 1) /* same iter space */
                {

                    for (int i_41 = 0; i_41 < 1;i_41 += 1) /* same iter space */
                    {
                        var_74 = var_4;
                        var_75 = 1407883996;
                        arr_139 [8] [i_0] [i_0] [i_25] [i_0] = (((arr_55 [1] [i_0]) * 0));
                        var_76 ^= var_4;
                    }
                    for (int i_42 = 0; i_42 < 1;i_42 += 1) /* same iter space */
                    {
                        var_77 *= var_14;
                        var_78 = (min(var_78, var_17));
                        arr_142 [i_0] = 1722942859;
                        var_79 = (1 || ((!(arr_11 [1] [1] [i_0] [i_25 + 1]))));
                        var_80 = var_4;
                    }
                    for (int i_43 = 0; i_43 < 0;i_43 += 1)
                    {
                        arr_145 [1] [i_0] [1] [i_0] [i_0] [i_43] [17] = (!((var_14 || (arr_100 [i_40 + 3] [i_25] [i_0] [i_0] [i_43]))));
                        var_81 = (var_6 == (((((arr_25 [i_0]) <= var_14)))));
                    }

                    for (int i_44 = 0; i_44 < 23;i_44 += 1)
                    {
                        var_82 *= (var_1 == var_5);
                        arr_149 [i_0] [i_0] = ((!(arr_53 [i_44] [i_0] [i_44] [i_0] [i_0] [i_25])));
                        var_83 = var_11;
                    }
                }
                /* LoopNest 2 */
                for (int i_45 = 0; i_45 < 23;i_45 += 1)
                {
                    for (int i_46 = 0; i_46 < 1;i_46 += 1)
                    {
                        {
                            var_84 = var_17;
                            var_85 = (min((!0), ((var_4 >> (arr_4 [i_0] [i_25 - 3])))));
                            var_86 = (max(var_86, (min((((~(arr_84 [i_45] [i_25 - 2] [i_25 - 3])))), (max(var_15, (max((arr_43 [i_45] [i_25] [i_25]), (arr_104 [i_46] [i_45] [7] [i_0] [i_0])))))))));
                            var_87 = (~536870908);
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_47 = 0; i_47 < 23;i_47 += 1)
            {
                for (int i_48 = 1; i_48 < 1;i_48 += 1)
                {
                    for (int i_49 = 0; i_49 < 0;i_49 += 1)
                    {
                        {
                            var_88 = (!var_13);
                            var_89 -= (max((arr_58 [i_0] [0] [1] [1]), 2119746083));
                        }
                    }
                }
            }
        }
        for (int i_50 = 3; i_50 < 22;i_50 += 1) /* same iter space */
        {
            var_90 |= var_3;
            var_91 = 1;
        }
        var_92 = (((~(arr_125 [i_0] [i_0] [i_0] [i_0] [i_0]))) <= (arr_105 [i_0] [i_0] [i_0]));
    }

    for (int i_51 = 0; i_51 < 18;i_51 += 1)
    {
        var_93 += 110806801;
        arr_165 [i_51] = (!(((((-(arr_77 [i_51] [1] [i_51]))) ^ 1))));
    }
    var_94 = var_2;
    #pragma endscop
}
