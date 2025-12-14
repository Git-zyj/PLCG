/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    var_14 = ((((var_9 ? var_5 : -var_7)) != var_2));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = ((+(min(var_2, ((((arr_1 [i_0]) < (arr_2 [i_0]))))))));
        var_15 = (min(var_15, ((((arr_1 [i_0]) < 1)))));
        var_16 &= ((~(min(((((arr_2 [i_0]) == -83))), ((1 ? 6 : var_9))))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_17 ^= 127;
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_17 [i_1] = ((~(((arr_14 [i_2 + 1] [i_1] [i_3 + 1]) + (arr_14 [i_2 + 1] [i_1] [i_3 - 2])))));
                            var_18 = (max((8835 ^ -8836), (arr_13 [i_0] [i_1] [i_1] [i_3] [i_3] [i_3] [i_4])));
                        }
                    }
                }
            }
            var_19 = (min(((max((arr_5 [i_1]), (arr_5 [i_0])))), ((-(arr_5 [i_1])))));
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_20 -= var_1;
            arr_21 [i_0] [i_0] [i_0] = min((max(var_4, (arr_9 [i_5]))), (((((max(78, 205)))) % -6805576071151294940)));
            var_21 ^= ((((((arr_7 [i_0] [i_0] [i_0]) * (arr_7 [i_5] [i_5] [i_0])))) ? (arr_7 [i_0] [i_5] [i_5]) : var_8));
            var_22 = (min(1, (((~33) ? -21320 : ((min(1, 1)))))));
        }
        /* vectorizable */
        for (int i_6 = 4; i_6 < 22;i_6 += 1)
        {

            for (int i_7 = 3; i_7 < 22;i_7 += 1) /* same iter space */
            {
                var_23 = (min(var_23, (~1)));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 19;i_9 += 1)
                    {
                        {
                            var_24 &= ((~(arr_13 [i_0] [i_0] [22] [i_7 - 2] [i_8] [i_8] [i_8])));
                            var_25 &= var_9;
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0] [i_0] = ((var_0 ? (arr_6 [i_7 - 1]) : (arr_6 [i_7 + 1])));
                            var_26 = (arr_8 [i_0] [i_6] [i_8] [i_9]);
                        }
                    }
                }
            }
            for (int i_10 = 3; i_10 < 22;i_10 += 1) /* same iter space */
            {
                var_27 = (arr_35 [i_0] [i_0]);
                var_28 = (arr_7 [i_6] [i_10 - 2] [i_10]);
            }
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 19;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 22;i_13 += 1)
                    {
                        {
                            var_29 = var_10;
                            arr_50 [i_13] &= var_9;
                        }
                    }
                }
                arr_51 [i_0] [i_6] [i_11] = arr_48 [i_0] [i_6] [i_11] [i_11];
            }

            for (int i_14 = 3; i_14 < 22;i_14 += 1)
            {
                var_30 = (min(var_30, (((var_3 ? var_1 : (arr_34 [i_6] [i_14 - 2] [i_14]))))));
                var_31 = (max(var_31, (arr_11 [i_14] [i_14] [i_14] [i_14 - 3] [i_6 - 2])));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 0;i_16 += 1)
                    {
                        {
                            var_32 = (8835 && 1);
                            arr_60 [i_16] [i_15] [i_6] [i_6] [i_0] = var_0;
                        }
                    }
                }

                for (int i_17 = 0; i_17 < 23;i_17 += 1)
                {
                    var_33 = (((arr_19 [i_6 - 2] [i_14 - 2] [i_14]) << (((arr_19 [i_6 - 2] [i_14 - 2] [i_14]) - 2416451971847652832))));

                    for (int i_18 = 0; i_18 < 23;i_18 += 1)
                    {
                        arr_65 [i_0] [i_6] [i_6] [i_17] [i_17] [i_18] [i_18] = (((arr_12 [i_6 - 2] [i_14 + 1] [i_6] [i_18]) | (arr_52 [i_6 - 2] [i_14 + 1] [i_6] [i_17])));
                        var_34 = (min(var_34, (arr_62 [i_0] [i_6] [i_14] [i_17])));
                    }
                    for (int i_19 = 0; i_19 < 23;i_19 += 1) /* same iter space */
                    {
                        var_35 = (222 < 1);
                        var_36 = ((-(arr_48 [i_14] [i_14] [i_14 - 1] [i_14])));
                        var_37 *= (arr_14 [i_0] [18] [i_14 - 2]);
                    }
                    for (int i_20 = 0; i_20 < 23;i_20 += 1) /* same iter space */
                    {
                        var_38 = (arr_30 [i_6] [i_6]);
                        var_39 ^= ((0 + (arr_27 [i_6] [4])));
                        var_40 = (((arr_41 [i_0] [i_14 - 3] [i_17] [i_20]) - (arr_41 [i_0] [i_6 - 3] [i_14 - 3] [i_17])));
                    }
                    for (int i_21 = 0; i_21 < 23;i_21 += 1) /* same iter space */
                    {
                        var_41 *= (((arr_13 [i_0] [i_6] [4] [i_14] [i_21] [i_6 - 4] [i_14]) << (((arr_13 [i_0] [i_6] [0] [i_17] [i_21] [i_6 - 4] [i_17]) - 37))));
                        var_42 = ((var_4 < (arr_72 [i_21] [i_21] [i_21] [i_14] [i_6 - 1] [i_6] [i_6])));
                        arr_74 [i_6] = (((var_1 ^ var_12) ? (arr_58 [i_6] [i_6] [i_6] [i_6] [i_6]) : (arr_45 [i_6] [i_14 + 1] [i_6 - 4] [i_6])));
                        var_43 = (((arr_64 [i_14] [i_0] [i_14 - 2] [i_17] [i_6 - 3]) ? var_6 : (arr_64 [i_0] [i_6] [i_14 - 1] [i_21] [i_6 + 1])));
                        var_44 = (~1);
                    }
                    arr_75 [i_0] [i_6] = (((-32767 - 1) ? 1 : 0));
                    var_45 = (max(var_45, (arr_54 [i_6] [i_6] [i_6] [i_6] [12] [i_6])));
                    var_46 = (((((arr_35 [i_0] [i_6]) + (arr_46 [i_14] [i_0]))) != var_3));
                }
                for (int i_22 = 1; i_22 < 21;i_22 += 1)
                {
                    var_47 = (min(var_47, 223));
                    var_48 = ((var_11 * (arr_67 [i_0] [i_6] [i_14] [i_14 - 2] [i_22 + 1] [i_22])));
                }
            }
            for (int i_23 = 3; i_23 < 19;i_23 += 1)
            {
                var_49 = (min(var_49, (((-(arr_11 [i_0] [i_6] [i_6] [i_23] [i_23]))))));
                var_50 = var_12;
                var_51 = ((((((arr_16 [i_23] [i_23] [i_6] [i_6] [i_0] [i_0]) ? (arr_69 [i_23] [i_23] [i_6] [i_6] [i_0] [i_0] [i_0]) : (arr_16 [i_0] [i_0] [i_6] [i_23] [i_23] [i_23])))) ? (arr_10 [i_23 + 2] [i_6 - 1] [i_6 + 1]) : (arr_54 [i_6] [i_6] [i_6 + 1] [i_6 - 1] [i_6] [i_23])));
                arr_80 [i_0] [i_6] [i_0] = (arr_29 [i_6] [i_6] [i_23] [i_23]);
                var_52 = (max(var_52, ((((120 - 1) == (arr_29 [0] [i_6] [i_6] [0]))))));
            }
            var_53 = (min(var_53, ((((arr_41 [i_0] [i_6] [i_6 - 4] [i_0]) ^ (arr_41 [i_6] [i_6] [i_6 - 1] [i_0]))))));
            var_54 = (min(var_54, (((((var_11 && (arr_22 [i_0] [i_6]))) && ((!(arr_67 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
        }
    }
    #pragma endscop
}
