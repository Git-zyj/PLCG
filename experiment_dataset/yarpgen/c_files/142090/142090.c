/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (var_13 && -1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        var_16 = (~var_0);
        var_17 *= (((arr_0 [i_0 + 1]) ^ var_8));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1 + 1] &= ((((((var_2 >= (arr_2 [19] [i_1 + 1]))))) >= ((var_11 ? 2128992344390015916 : 1))));
        var_18 *= var_13;

        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_19 = (max(var_19, var_7));

            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                var_20 = (min((~0), (((((1 ? var_14 : var_2))) ? var_0 : ((((arr_0 [i_1 + 1]) >= var_5)))))));
                var_21 = (min(var_21, -1));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                var_22 -= ((1 % ((var_10 ? 1 : 1))));
                arr_15 [i_2] [1] = (arr_0 [i_1 + 1]);
                arr_16 [1] [i_2] [i_2] &= (((arr_2 [8] [14]) ? (arr_2 [i_1] [i_2]) : 1));

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_23 = (var_6 && var_3);
                    arr_19 [i_1] [i_2] [16] &= var_0;
                }
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    arr_22 [i_2] = 1;

                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_24 *= var_6;
                        arr_26 [i_1 + 1] [i_1 + 1] [1] [i_6] [i_7] = ((-(arr_3 [i_1 + 1])));
                        var_25 = (min(var_25, ((((((1 ? var_12 : 11819560481512777636))) ? 1 : (arr_10 [i_6]))))));
                    }
                    var_26 = (min(var_26, (~var_0)));
                    var_27 = (arr_12 [i_1 + 1] [i_2] [i_4]);
                }
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    arr_31 [i_1 + 1] [i_8] = var_7;
                    var_28 *= 965417525470290610;
                    var_29 = ((((57 ? var_14 : 1106251563868802153)) <= (((var_8 ? var_6 : (arr_29 [i_1] [i_2] [i_4] [i_1 + 1] [i_8]))))));
                    var_30 ^= -121465172;
                }
            }
            for (int i_9 = 1; i_9 < 20;i_9 += 1)
            {
                var_31 |= var_7;
                var_32 = (!((((((arr_29 [2] [i_2] [i_2] [i_2] [0]) && (arr_24 [i_9] [i_1]))) ? 1 : var_0))));
                arr_34 [i_1 + 1] [i_1 + 1] [i_1 + 1] = var_10;
                var_33 = (max(var_33, (((((((arr_4 [i_1 + 1]) > (arr_4 [i_1 + 1])))) | (min((arr_4 [i_1 + 1]), 1)))))));
                var_34 |= (min(1, (min((0 * -1106251563868802164), (arr_27 [i_9 - 1] [i_9 - 1] [i_9 + 2] [i_2] [i_1] [i_1])))));
            }

            /* vectorizable */
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                var_35 = (~1);
                var_36 = (var_3 ? (!146) : ((7160025129232972002 ? (arr_18 [i_1] [1] [i_2] [i_1 + 1]) : 1)));
                var_37 = (max(var_37, 1));
                arr_37 [i_1] [i_1] [i_2] = 0;
            }
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                arr_41 [i_2] [10] = (((!((((arr_24 [i_11] [8]) ? var_0 : 1))))));
                var_38 ^= var_6;
                var_39 = (var_4 <= (min(-1, (((1 | (arr_1 [6])))))));
            }
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
        {
            var_40 = (max(var_40, ((max((min((arr_33 [i_1] [i_1] [i_1]), (~var_0))), (((!(((var_11 ^ (arr_9 [i_1] [i_1]))))))))))));
            var_41 = (arr_27 [i_12] [i_12] [i_12] [i_1 + 1] [i_1 + 1] [i_1]);
            arr_45 [10] [i_12] = (min((max((((var_6 ? -1106251563868802153 : 1))), (min((arr_39 [i_12] [i_12] [i_1 + 1]), 8810041923599886081)))), var_3));
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
        {
            arr_49 [i_13] [i_13] = ((((!(arr_35 [i_1] [i_13] [i_1] [i_13])))));
            var_42 = ((((!(arr_43 [i_1 + 1] [i_1 + 1])))));
            var_43 = (max(var_43, 1681429570));
        }
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            var_44 = (min(var_44, ((max((((arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? (arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) : (arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))), (((arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) ^ (arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))))));
            var_45 -= (((!var_12) && ((max((arr_30 [i_14] [i_1 + 1] [i_1 + 1]), var_3)))));
            var_46 -= var_13;
            arr_52 [i_1] [i_14] [i_1 + 1] = (((((min((arr_2 [i_1] [7]), 1)))) <= (((0 ? var_11 : var_7)))));
        }
        var_47 ^= var_1;
    }
    for (int i_15 = 0; i_15 < 0;i_15 += 1) /* same iter space */
    {
        var_48 ^= (max(-8, (((((min(113, var_14))) | ((max(var_6, 1))))))));
        var_49 = (min(var_49, 1));
    }
    for (int i_16 = 0; i_16 < 22;i_16 += 1)
    {
        var_50 = (min(var_50, (arr_17 [i_16] [19] [i_16] [1] [i_16] [i_16])));
        /* LoopNest 3 */
        for (int i_17 = 1; i_17 < 20;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    {

                        for (int i_20 = 0; i_20 < 1;i_20 += 1)
                        {
                            var_51 *= (((((-(arr_0 [i_17 - 1])))) ? 113 : (min(((110 ? (arr_55 [i_16]) : (arr_23 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]))), 1))));
                            arr_68 [i_16] [i_16] [i_16] [i_16] [i_16] [i_17] [i_16] = -var_13;
                            arr_69 [i_16] [i_17] [i_19] [16] [i_16] [i_17] = 1;
                        }
                        for (int i_21 = 0; i_21 < 22;i_21 += 1)
                        {
                            var_52 += (arr_40 [13] [i_18] [1]);
                            arr_72 [1] [1] [i_17] [1] [16] = 249;
                            var_53 = 0;
                            arr_73 [i_16] [i_18] [10] |= var_14;
                        }
                        arr_74 [i_17] [i_17 + 2] = ((!((max(576460735123554304, (arr_62 [i_17] [i_18] [i_17 - 1] [i_17]))))));
                    }
                }
            }
        }
    }
    var_54 = (max(var_2, (min(((var_4 ? var_11 : var_8)), var_5))));
    #pragma endscop
}
