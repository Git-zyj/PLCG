/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = max((491388915 < -1957389439), ((~(arr_0 [i_0] [i_0]))));
        var_14 = (min(var_14, ((max(((max(var_2, var_3))), var_5)))));
        var_15 *= ((-(max((arr_1 [i_0] [13]), var_5))));
    }
    var_16 = ((!(((max(var_10, var_2))))));

    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    arr_10 [i_2] [i_3] [3] [i_2] = var_3;
                    var_17 |= max((max(20, (min(8812098141936762030, var_8)))), 45424);
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            arr_13 [i_4] [i_4] [i_4] = var_11;
            var_18 += 20;
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                var_19 = ((-(8812098141936762030 / 13)));
                var_20 = (((((((var_2 ^ (arr_1 [i_5] [i_6]))) >= 20))) | (min(-var_3, (var_12 / var_1)))));
                var_21 = (-8812098141936762013 == 144115188071661568);
            }
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {

                /* vectorizable */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    var_22 -= var_1;
                    var_23 = (!var_11);
                }
                var_24 = (max(var_24, ((((arr_3 [i_7] [4]) <= var_6)))));
                var_25 = ((!((min((-8812098141936762030 * 0), (max(var_1, (arr_15 [1] [10] [1]))))))));
            }
            arr_24 [i_1] [i_5] = ((!(arr_6 [i_1] [10] [i_5])));
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            arr_33 [2] [i_9] [i_10] [i_11] [7] = var_4;
                            arr_34 [i_12] [i_11] [9] [i_1] [i_1] = (((min((arr_16 [0] [0]), (((-1916825656 ? var_0 : var_11))))) * (((max(144115188071661568, 6962)) / (((8812098141936762030 ? -3 : (arr_26 [i_1] [i_1] [i_11]))))))));
                            arr_35 [i_1] [i_1] [i_9] [2] [3] [i_12] [i_12] = (((var_7 ? ((((arr_17 [i_1] [i_1] [1]) >= (arr_14 [i_1] [i_1])))) : (var_11 / var_1))));
                        }
                    }
                }
            }
            var_26 = (max(var_26, (((((((var_2 ? var_2 : (arr_0 [9] [9]))))) << (((~var_4) + 160)))))));
        }
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            var_27 ^= ((-((~(arr_32 [i_1] [8] [i_1])))));
            var_28 = ((-((var_4 ? 1957389439 : (((arr_25 [i_1] [i_13]) ? (arr_16 [i_1] [i_1]) : var_12))))));
            var_29 = ((((((!((min((arr_27 [i_13] [3] [i_1]), var_4))))))) >= (max((((20 * (arr_14 [i_1] [i_1])))), (max(91, 18166053059859386898))))));

            /* vectorizable */
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                var_30 *= (!-27);
                var_31 = (0 <= var_2);
                arr_42 [2] = (20 == var_6);
            }
            for (int i_15 = 0; i_15 < 12;i_15 += 1)
            {

                /* vectorizable */
                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    var_32 = var_5;
                    arr_48 [11] [i_13] [i_15] [i_15] [6] &= -var_11;
                }
                for (int i_17 = 0; i_17 < 12;i_17 += 1)
                {
                    arr_51 [i_1] [i_1] [i_1] [4] = (((((arr_12 [i_1]) / -7)) == ((((((arr_37 [9]) >> (var_11 + 44)))) ? ((236 << (var_1 - 50723))) : (arr_26 [i_1] [i_13] [i_17])))));
                    arr_52 [i_15] = (-27 ? (arr_31 [i_1] [i_1] [i_1] [i_17] [i_1]) : (~1));
                }
                arr_53 [i_1] [i_13] [1] [i_15] = ((((arr_21 [i_1] [i_1] [1]) * var_11)));
            }
            for (int i_18 = 0; i_18 < 12;i_18 += 1)
            {
                var_33 = (min(var_33, (((var_6 ? var_12 : ((((min(var_9, var_9))) ? (!1957389412) : (arr_16 [i_13] [i_13]))))))));
                var_34 = (arr_23 [i_1] [i_1] [i_13] [i_18] [i_13] [i_13]);
                arr_57 [i_1] [0] [i_18] = (((((((((arr_29 [7]) == 47008))) << 1))) ? (arr_49 [i_1] [i_1] [i_1] [i_1] [i_1]) : 57));
            }
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                arr_61 [0] [i_13] = (max(242, (((23 == var_8) << (((arr_6 [i_1] [i_1] [i_13]) - 14571230644250386682))))));

                for (int i_20 = 0; i_20 < 12;i_20 += 1)
                {
                    arr_64 [i_1] [i_13] [i_20] [i_20] = (((max((arr_6 [i_1] [i_13] [i_13]), (arr_6 [i_13] [i_19] [i_1]))) + (((((arr_6 [i_1] [i_13] [i_1]) > (arr_6 [i_1] [i_1] [i_20])))))));
                    var_35 = var_0;
                    var_36 = (arr_58 [10] [i_13] [i_1]);
                }
                arr_65 [5] [2] = ((1957389421 != (max((var_5 / var_5), -var_2))));
                arr_66 [i_1] [i_1] [i_1] [i_1] = (((arr_23 [i_19] [i_19] [i_19] [i_1] [i_1] [i_1]) ? ((((((arr_50 [i_19] [10] [10] [i_1]) ? -1569402351 : 18535))) ? var_5 : (min(46991, (arr_40 [i_1] [i_13] [i_19]))))) : var_8));
            }
        }
    }
    #pragma endscop
}
