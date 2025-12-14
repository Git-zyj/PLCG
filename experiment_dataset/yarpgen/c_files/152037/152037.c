/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, var_6));
                    arr_8 [i_0] [i_1] = max(((((var_4 ? (arr_5 [i_0] [i_1] [i_1] [i_2]) : (arr_6 [i_0]))) + (arr_4 [i_2]))), 217);

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_12 [i_1] [i_1] [i_2] [i_3] = arr_6 [i_3];
                        var_16 ^= ((((max((arr_11 [i_0] [5] [5] [i_3] [i_0 - 3]), (arr_6 [i_0])))) && ((!(((var_2 ? var_2 : var_13)))))));
                        var_17 = (((var_4 < (arr_7 [i_0 - 1] [i_1] [i_2 + 2]))));
                        var_18 = (max(var_12, (((((var_12 ? (arr_2 [i_1] [i_1 - 1] [i_1]) : var_12))) ? -1 : var_6))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        var_19 = (min(var_19, var_5));
                        var_20 = (max(var_20, (arr_6 [5])));
                    }
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            arr_20 [i_1] [i_1] = (arr_13 [i_0] [1] [i_0 - 2] [i_0] [i_0]);
                            var_21 *= ((((((arr_17 [5] [i_1] [i_1 - 1] [i_2] [i_2] [i_5] [i_2]) + (max((arr_11 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1]), var_1))))) & (min((max(var_0, var_1)), ((((arr_9 [i_6] [i_5]) * (arr_4 [i_0]))))))));
                        }

                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_22 ^= ((((min((arr_2 [i_0] [i_1] [i_7]), ((~(arr_6 [i_0])))))) ? ((+((((arr_15 [i_0] [i_1 - 1] [i_2 - 2] [i_5]) >= 1))))) : ((min((arr_2 [i_7] [i_0 + 1] [i_7]), 191)))));
                            var_23 = (arr_3 [i_0]);
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                        {
                            var_24 = var_4;
                            var_25 = ((((max(((var_12 ? var_2 : var_0)), (arr_1 [i_2])))) || (arr_11 [i_0] [i_1] [i_2] [i_5] [i_8])));
                            var_26 *= (((2341000752920944099 ? (arr_4 [i_0]) : ((var_13 ? (arr_9 [0] [0]) : var_10)))) == (arr_11 [i_0 - 2] [11] [i_2] [i_5] [11]));
                            arr_27 [i_1] [i_1] = (arr_21 [i_0] [i_1] [i_2 - 2] [i_1] [i_1]);
                        }
                        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            arr_31 [i_1] [i_9] = (min(0, ((var_9 - (min(var_8, (arr_7 [i_0] [i_1] [i_5 - 2])))))));
                            arr_32 [i_1] [i_1] [i_2] [i_1] [i_0] = (!((max((((arr_6 [i_1 - 1]) / var_13)), var_3))));
                        }
                        for (int i_10 = 1; i_10 < 9;i_10 += 1)
                        {
                            arr_36 [i_1] [i_1] [6] [0] [i_5] [i_10] = (((((max((min(var_14, 84)), var_10)))) > (max(((min(var_11, var_1))), (arr_34 [i_0] [4] [i_10 + 2])))));
                            arr_37 [i_0] [i_1] [6] [i_5] [i_1] = (max(52060, (max(-var_6, var_4))));
                        }
                        arr_38 [i_0] [0] [i_1] [i_5] = (((((var_14 ? ((((arr_22 [4] [7]) <= (arr_4 [i_5])))) : ((var_9 ? 1 : -2))))) && ((max(var_4, (((arr_1 [i_0]) & (arr_35 [i_0 + 1] [i_2 - 1] [i_5]))))))));
                    }
                }
            }
        }
        var_27 = (arr_29 [i_0 - 3] [i_0] [4]);
        var_28 = (max(var_28, (arr_3 [0])));
        var_29 *= (arr_30 [i_0 - 3] [i_0] [2] [i_0 + 1] [2]);
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {

        for (int i_12 = 3; i_12 < 6;i_12 += 1)
        {

            for (int i_13 = 1; i_13 < 7;i_13 += 1)
            {
                var_30 = var_11;
                arr_45 [i_13] = var_5;
            }
            var_31 = (~(arr_24 [9] [i_11] [i_12] [i_12] [i_11] [i_12]));
        }
        for (int i_14 = 0; i_14 < 10;i_14 += 1)
        {
            var_32 *= (((arr_42 [i_11] [i_14]) || (arr_10 [i_11] [i_11] [i_11])));
            arr_48 [i_11] [i_14] [i_14] = var_14;
            var_33 = ((64 ? (((arr_30 [i_11] [i_11] [i_14] [i_11] [2]) ? (arr_17 [1] [1] [i_11] [i_11] [i_14] [i_14] [i_14]) : var_1)) : (((arr_28 [i_11] [i_11] [0] [i_11] [9]) ? 0 : var_12))));
            var_34 = ((!(arr_25 [i_11] [i_11] [i_11] [i_11] [i_11])));
        }
        var_35 = ((65535 | (((arr_16 [5] [i_11] [5] [i_11] [8] [5]) | -1))));

        for (int i_15 = 0; i_15 < 10;i_15 += 1)
        {
            /* LoopNest 3 */
            for (int i_16 = 1; i_16 < 9;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 10;i_17 += 1)
                {
                    for (int i_18 = 4; i_18 < 6;i_18 += 1)
                    {
                        {
                            var_36 = (((((arr_43 [i_11] [i_15] [i_15] [i_18 - 3]) - (arr_30 [i_11] [i_15] [i_17] [i_17] [i_17]))) - (((arr_22 [i_16] [i_17]) ? var_13 : var_5))));
                            var_37 = ((var_3 - var_14) - (arr_19 [i_16 + 1] [i_18 - 4] [i_18] [i_18 - 2] [i_18]));
                        }
                    }
                }
            }
            arr_60 [i_15] [i_11] = (arr_24 [i_11] [i_11] [i_11] [i_11] [i_15] [1]);

            for (int i_19 = 0; i_19 < 10;i_19 += 1)
            {
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 10;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 10;i_21 += 1)
                    {
                        {
                            var_38 *= ((!(arr_23 [8] [i_19] [i_19] [i_15] [i_11])));
                            var_39 ^= (((arr_35 [i_11] [i_15] [1]) + var_12));
                            var_40 = (max(var_40, (arr_59 [i_19] [i_11])));
                        }
                    }
                }
                arr_68 [9] [i_15] [i_19] [i_19] = ((-var_10 ? (var_1 > var_6) : (9223372036854775807 & var_8)));
                var_41 = var_12;
                arr_69 [i_11] [i_15] [i_19] = var_6;
                var_42 ^= (arr_65 [i_11] [5] [6] [1] [i_15] [i_11]);
            }
            for (int i_22 = 0; i_22 < 10;i_22 += 1)
            {
                var_43 = 248;
                arr_72 [i_15] [i_11] = (arr_9 [i_22] [i_22]);
            }
            for (int i_23 = 1; i_23 < 7;i_23 += 1)
            {
                /* LoopNest 2 */
                for (int i_24 = 1; i_24 < 6;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 10;i_25 += 1)
                    {
                        {
                            var_44 -= ((-(arr_44 [i_23] [0] [i_23 + 1])));
                            arr_80 [i_11] [i_23] [i_23] [i_24] [i_25] = (!var_9);
                            arr_81 [i_11] [i_15] [i_15] [i_23] [i_23] [i_24] [i_23] = (((arr_57 [i_11] [i_15] [i_15] [i_15] [i_24 + 3]) == ((12 / (arr_10 [i_11] [i_23] [i_23])))));
                            arr_82 [i_23] [i_23] [i_15] [i_23] = (arr_78 [i_11] [i_23] [i_23] [i_24 + 3] [1] [i_23] [i_25]);
                            var_45 = (((arr_78 [i_25] [i_23] [1] [i_23 - 1] [i_15] [i_23] [i_11]) / (arr_26 [i_23 - 1] [i_23] [i_23] [i_15])));
                        }
                    }
                }
                var_46 = (arr_25 [i_11] [i_15] [i_15] [i_23 + 3] [i_23]);
            }
        }
        for (int i_26 = 0; i_26 < 10;i_26 += 1)
        {

            for (int i_27 = 1; i_27 < 9;i_27 += 1)
            {
                var_47 = (arr_44 [i_11] [i_11] [i_11]);
                arr_87 [i_27] [1] [i_26] [i_27] = var_13;
                var_48 &= var_12;
                var_49 ^= (arr_17 [i_11] [i_26] [i_11] [i_26] [6] [i_26] [6]);
            }
            for (int i_28 = 0; i_28 < 10;i_28 += 1)
            {
                arr_90 [1] [i_26] = (((var_8 ? -2 : (arr_71 [5] [i_26] [i_26] [5]))) % (arr_35 [i_11] [i_26] [i_28]));
                arr_91 [i_11] [2] [i_11] [i_11] = ((var_12 ? (arr_59 [i_11] [i_28]) : (arr_19 [i_11] [7] [i_28] [i_28] [i_11])));
            }
            var_50 ^= ((var_11 != (arr_4 [1])));
        }
    }
    var_51 *= var_3;
    #pragma endscop
}
