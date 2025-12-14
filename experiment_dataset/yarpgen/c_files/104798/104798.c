/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((max(var_5, (var_2 | var_0))), var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    var_14 = (max(var_14, -4873));
                    arr_8 [i_2] [i_1 + 1] = var_4;
                    arr_9 [i_0] [i_2] = 4873;
                }

                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    arr_12 [5] = -8174;
                    arr_13 [i_0] [i_0] [i_1 + 1] [i_0] = ((((var_8 & (arr_2 [i_3]))) & (var_3 ^ 1)));
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {

            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                arr_23 [i_4] [i_6] = ((((((arr_7 [i_6 + 1] [i_6] [i_6]) & var_7))) || (((arr_7 [i_6 + 1] [7] [7]) < (arr_7 [i_6 + 1] [i_6 + 1] [i_6])))));

                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    arr_28 [i_4] [i_5] [i_4] [i_6] = 1666832037668189659;
                    var_15 = -4873;
                    var_16 *= (max(6139, 1218752746));
                    arr_29 [i_6] [i_5] [i_5] = (((-8174 << (((min(2139095040, 1667241310)) - 1667241308)))));
                    arr_30 [i_4] [i_4] [i_4] [i_4] [i_4] |= (min(((((((-407672237 + 2147483647) >> (43 - 40)))) % 3224458111)), (((3616588393 > (!var_9))))));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    arr_33 [i_6] [i_6] = 0;
                    var_17 = (max(var_7, ((!(arr_21 [i_8] [i_8] [i_6 + 1] [i_6 + 1])))));
                    arr_34 [i_6] = (!(((((((var_11 + 9223372036854775807) << (var_2 - 1772893513)))) ? ((-(arr_21 [i_8] [9] [i_5] [i_4]))) : (arr_17 [i_6 + 1] [i_6 - 1])))));
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    arr_39 [i_5] [i_6] = (max((((arr_6 [i_4] [i_4] [i_4]) ^ 1)), ((min((!var_11), var_5)))));
                    var_18 = -51;

                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        arr_43 [i_6] [i_6] [i_5] [i_9] [i_6] [i_6] [i_9] = arr_17 [i_6 + 2] [i_10 - 1];
                        arr_44 [i_4] [i_6] [i_4] [i_9] = (((arr_38 [10] [i_4] [i_6 + 1] [i_4]) ^ (arr_19 [6] [i_5] [i_6 - 2] [i_6])));
                        var_19 = (min(var_19, (((~(arr_21 [i_6 + 2] [i_10 - 1] [i_6 + 2] [i_6 - 1]))))));
                        arr_45 [i_4] [i_6] = (-var_7 * var_11);
                        arr_46 [i_4] [i_6] [i_4] [i_6] [14] = ((51147 & (arr_2 [i_6 + 2])));
                    }
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                {
                    var_20 *= (max((var_9 && 6800492729307476525), ((((var_8 | 256) || (11 > 1))))));
                    var_21 = var_4;
                    arr_50 [i_4] [i_5] [i_6] [i_6] = (arr_15 [0]);
                    var_22 = -74422515387863670;
                    arr_51 [i_4] [1] [i_6] [i_4] = min((min((arr_48 [i_4] [i_4] [i_4] [i_11]), (arr_25 [i_4] [i_4] [i_5] [i_5] [i_11]))), 215847350);
                }
            }
            /* LoopNest 2 */
            for (int i_12 = 3; i_12 < 16;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    {
                        var_23 ^= (((1086758762 | 2859260103665806515) << ((((-((37 ? (arr_55 [11] [i_5]) : (arr_21 [i_13] [i_12] [i_5] [14]))))) - 18446744073709542035))));
                        var_24 = ((((max(var_5, 1))) & ((~(arr_55 [i_12 + 1] [i_12 + 1])))));
                    }
                }
            }
            arr_58 [i_4] = (arr_0 [i_5]);
            /* LoopNest 3 */
            for (int i_14 = 1; i_14 < 16;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 13;i_16 += 1)
                    {
                        {
                            var_25 *= var_3;
                            var_26 = ((((arr_37 [i_14] [i_14 + 1] [i_14 - 1] [i_14]) ^ var_6)));
                            arr_71 [i_5] [i_14] = var_2;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 17;i_17 += 1)
        {
            var_27 = (arr_55 [i_4] [i_17]);

            for (int i_18 = 0; i_18 < 17;i_18 += 1)
            {
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 17;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 17;i_20 += 1)
                    {
                        {
                            arr_84 [i_4] [i_4] [i_4] [i_17] = var_8;
                            arr_85 [i_4] &= ((22363 % (arr_26 [i_17] [i_4])));
                            arr_86 [i_17] [i_17] [i_19] [i_18] [i_17] [i_17] = (((arr_61 [i_17] [i_19]) ^ var_5));
                        }
                    }
                }

                for (int i_21 = 0; i_21 < 0;i_21 += 1)
                {
                    var_28 += 1065353216;
                    var_29 = var_12;
                    var_30 -= (((arr_59 [i_21] [i_21] [i_21 + 1] [16]) ? (51147 ^ 12) : var_7));
                    var_31 = ((((var_3 ? 46962 : (-2147483647 - 1))) ^ (-1432019463 & -64)));
                    var_32 = 110;
                }
                arr_91 [i_4] [i_4] [i_17] [i_18] = (var_0 & -4294967295);
            }
        }
        arr_92 [i_4] = (((((!((max(119, var_10)))))) << (832872076 - 832872072)));
        arr_93 [i_4] &= arr_26 [2] [i_4];
    }
    var_33 = (max(var_33, 65535));
    #pragma endscop
}
