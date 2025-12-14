/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_19 = ((((min(((var_15 ? var_14 : (arr_1 [i_0] [i_1 - 1]))), var_17))) ? -var_0 : (((~((min((arr_5 [i_0] [i_0]), var_7))))))));
                arr_6 [i_0] [i_0] = ((~((((arr_2 [i_0]) > ((var_5 ? (arr_1 [i_0] [i_1 + 1]) : var_7)))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_9 [i_2] [18] = var_17;
        arr_10 [i_2] = var_1;
        arr_11 [i_2] [i_2] = ((-var_8 > (arr_8 [i_2])));
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 17;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            arr_16 [i_3] [0] [i_4 - 1] = ((var_7 ? (((arr_15 [i_4] [i_4] [i_3 - 2]) ? (arr_8 [i_3]) : var_5)) : var_4));
            var_20 = (min(var_20, (arr_12 [7])));
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_21 ^= var_15;

            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                var_22 = (arr_15 [i_6] [i_5] [i_3]);
                var_23 = (max(var_23, (((!(arr_21 [i_3] [i_5] [6]))))));
            }
            arr_23 [i_5] = ((-(arr_20 [i_3])));
            arr_24 [i_3] [1] [i_5] = -var_6;
        }
        for (int i_7 = 1; i_7 < 19;i_7 += 1)
        {
            arr_28 [i_7] = (arr_22 [i_3] [i_7]);
            var_24 = ((!(arr_22 [i_7 + 1] [i_3 - 2])));
        }
        arr_29 [i_3] [i_3] = (arr_15 [1] [1] [i_3]);
        arr_30 [i_3] = var_12;
    }
    for (int i_8 = 3; i_8 < 13;i_8 += 1)
    {
        var_25 *= (min((arr_22 [i_8] [i_8]), var_2));

        /* vectorizable */
        for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
        {

            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                var_26 = (min(var_26, (arr_18 [i_10])));
                arr_39 [i_9] [i_9] [i_8] = var_3;
                var_27 = (min(var_27, var_4));
            }
            var_28 = (min(var_28, ((((~(arr_27 [8] [8] [8])))))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    {

                        for (int i_13 = 2; i_13 < 12;i_13 += 1)
                        {
                            var_29 = arr_33 [i_8] [i_12];
                            var_30 = (arr_42 [i_8]);
                        }
                        arr_48 [i_9] = arr_33 [i_9] [6];
                    }
                }
            }
        }
        for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
        {
            var_31 = (max(var_7, ((-(arr_21 [i_8] [i_14] [i_14])))));
            arr_51 [i_14] [i_14] = ((-var_10 ? (((((arr_13 [i_8] [i_8]) ? (arr_19 [i_8] [i_8]) : (arr_41 [i_8] [i_8] [i_14] [13]))) / (min((arr_40 [i_8] [i_14] [i_8]), (arr_31 [i_14] [i_8]))))) : var_1));
            arr_52 [i_14] = (arr_49 [i_8] [7] [i_8]);
        }
        /* vectorizable */
        for (int i_15 = 3; i_15 < 12;i_15 += 1)
        {

            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                arr_58 [i_8 - 2] [i_15] [i_16] = (arr_20 [i_8 - 3]);
                var_32 ^= (arr_47 [i_8] [i_15 + 1] [i_16]);
                arr_59 [i_16] [i_15] [i_8] |= var_6;
            }
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 14;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 14;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 14;i_19 += 1)
                    {
                        {
                            arr_67 [i_18] = (((arr_18 [i_8]) ? var_14 : (arr_41 [i_8] [i_8] [i_17] [i_18])));
                            var_33 *= (arr_19 [i_8 - 3] [i_19]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 14;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 14;i_21 += 1)
                {
                    {
                        arr_74 [i_21] [1] [i_15 - 1] [i_8] = (arr_65 [i_20] [i_15] [i_15] [i_15 - 3] [i_15] [i_15 - 2]);
                        arr_75 [i_8] [10] [i_8] [i_8] = var_12;
                    }
                }
            }
            var_34 -= ((~((-(arr_45 [i_8] [i_8] [i_15 + 1] [i_15])))));
            var_35 = (arr_46 [i_8] [6] [i_8]);
        }
        for (int i_22 = 3; i_22 < 13;i_22 += 1)
        {
            arr_80 [i_8] [i_8] [i_22] = (min((max((~var_9), var_6)), ((((min((arr_40 [i_8 + 1] [3] [i_8 + 1]), (arr_64 [i_8] [i_22] [1] [i_22])))) ? (((~(arr_35 [i_22])))) : (arr_45 [i_8 - 3] [i_8 - 3] [i_8 - 3] [12])))));
            /* LoopNest 2 */
            for (int i_23 = 3; i_23 < 12;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 14;i_24 += 1)
                {
                    {
                        arr_87 [8] [i_22] [i_22] [i_8] = var_14;
                        arr_88 [i_24] [i_22] [i_22] [i_8] = (((((((((arr_26 [i_22] [i_22]) & var_15))) ? (((max(var_1, var_7)))) : (((arr_69 [i_24] [i_23] [i_8 - 3] [i_8 - 3]) ? (arr_54 [i_22]) : var_12))))) ? (((~(arr_69 [i_24] [i_22] [6] [6])))) : (max(((var_16 ? (arr_45 [i_8] [i_8] [i_23] [i_24]) : (arr_83 [4] [i_8] [i_8]))), var_11))));

                        /* vectorizable */
                        for (int i_25 = 1; i_25 < 13;i_25 += 1)
                        {
                            arr_91 [i_8 - 2] [1] [i_22] [i_23] [i_23] [i_24] [i_24] = ((~((var_2 ? var_18 : (arr_55 [i_23 + 1] [i_22 - 3] [i_23])))));
                            arr_92 [i_8 - 2] [i_22] [i_8 + 1] [i_8] [i_8] [i_8 + 1] [i_22] = (((!(arr_20 [i_8 - 2]))));
                        }
                    }
                }
            }
            arr_93 [i_8] [i_22] = (((((-(arr_69 [i_8] [i_8] [i_22] [i_22])))) ? var_2 : (arr_42 [i_8])));
        }
    }
    var_36 = var_3;
    var_37 = var_12;
    #pragma endscop
}
