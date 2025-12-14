/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_10 += (((arr_3 [i_0]) ? (arr_2 [1]) : (arr_2 [0])));
        var_11 = (arr_1 [i_0]);

        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_12 *= (arr_6 [i_0] [i_2] [i_2]);
                    var_13 = (arr_0 [i_3]);
                    var_14 = (min(var_14, (((~(arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                    var_15 = (((arr_4 [i_2] [i_1] [i_0]) ? (arr_0 [i_3]) : ((~(arr_7 [i_0])))));
                }

                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    var_16 = (((arr_5 [i_1]) || (arr_10 [i_0] [i_1])));
                    var_17 -= ((-(arr_8 [i_1 - 2] [i_4] [i_4])));

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_18 = (arr_1 [i_0]);
                        var_19 += var_1;
                        var_20 *= 65;
                        var_21 = (arr_3 [i_2]);
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                    {
                        var_22 = (arr_1 [i_0]);
                        var_23 = ((-(arr_1 [i_0])));
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                    {
                        var_24 = ((131064 ? (arr_5 [i_4]) : 1));
                        var_25 = (max(var_25, (((0 ? 4294967272 : 9223372036854775808)))));
                    }
                    for (int i_8 = 4; i_8 < 24;i_8 += 1)
                    {
                        var_26 = (i_0 % 2 == 0) ? (((var_5 / (arr_12 [i_0] [i_1] [i_2] [i_0])))) : (((var_5 * (arr_12 [i_0] [i_1] [i_2] [i_0]))));
                        var_27 += (arr_22 [i_4] [i_4] [i_4] [i_4] [i_1] [i_4]);
                    }
                    var_28 = (arr_12 [18] [18] [i_2] [i_0]);
                }
                var_29 = var_3;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        {
                            var_30 = (arr_12 [i_0] [i_1] [i_2] [i_0]);
                            arr_31 [i_0] = 1;
                        }
                    }
                }
            }
            var_31 ^= (arr_6 [i_0] [i_0] [4]);
        }
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            var_32 ^= ((-((var_9 ? (arr_0 [i_0]) : var_5))));
            /* LoopNest 3 */
            for (int i_12 = 3; i_12 < 24;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        {
                            var_33 = (arr_36 [i_0] [i_11] [i_0]);
                            arr_42 [i_14] [i_11] [i_0] [i_0] [1] = 64;
                            arr_43 [i_0] = ((~(((var_3 == (arr_41 [i_14] [i_11] [i_14] [6] [6] [i_12]))))));
                        }
                    }
                }
            }
            var_34 = (min(var_34, (((1 ? (arr_37 [2] [i_11] [i_11] [i_11] [i_0] [i_11]) : (arr_21 [i_0]))))));
            var_35 = ((-(arr_1 [i_0])));
            arr_44 [8] |= var_8;
        }
        for (int i_15 = 2; i_15 < 21;i_15 += 1)
        {
            arr_47 [i_0] [i_15 + 3] = (~(arr_21 [i_0]));
            /* LoopNest 2 */
            for (int i_16 = 1; i_16 < 22;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    {
                        var_36 = (arr_16 [i_0] [i_0] [i_0] [i_16 + 3] [i_0]);
                        var_37 = 254;
                    }
                }
            }

            for (int i_18 = 1; i_18 < 23;i_18 += 1)
            {
                var_38 = (((arr_37 [i_0] [1] [i_0] [i_0] [1] [i_18]) / var_9));

                for (int i_19 = 1; i_19 < 23;i_19 += 1)
                {
                    var_39 *= (arr_3 [i_0]);
                    var_40 = (max(var_40, (arr_36 [6] [i_15 + 2] [6])));
                    var_41 = (((arr_12 [i_15 + 4] [i_15] [i_15] [i_0]) ^ -1));
                    var_42 = 1;
                }
                for (int i_20 = 1; i_20 < 21;i_20 += 1)
                {
                    var_43 = (0 > 67);
                    var_44 = (max(var_44, (arr_36 [i_0] [20] [2])));
                }
                for (int i_21 = 1; i_21 < 22;i_21 += 1)
                {
                    var_45 = ((-((var_9 ? var_2 : -3966038535294903872))));
                    var_46 = (((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) >= 120));
                    var_47 = ((var_9 <= (arr_37 [1] [i_15] [14] [i_18] [i_21] [i_21])));
                    arr_62 [3] [i_15 - 2] [i_0] [i_21 - 1] = -3589289617;
                }
            }
            for (int i_22 = 1; i_22 < 1;i_22 += 1)
            {
                arr_65 [i_22] [i_0] [i_0] [i_0] = ((+(((arr_16 [12] [i_15] [1] [5] [5]) ? (arr_41 [i_22] [i_0] [i_0] [i_15 - 2] [i_0] [i_0]) : (arr_52 [i_0] [i_0] [i_22])))));
                var_48 = 0;
            }
            var_49 ^= (arr_21 [i_0]);
            var_50 = (arr_7 [i_0]);
        }
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 14;i_23 += 1)
    {

        for (int i_24 = 2; i_24 < 13;i_24 += 1)
        {
            arr_73 [i_23] = (arr_19 [i_23] [i_24 - 2] [i_24 - 2] [i_24] [i_24]);
            var_51 ^= ((((((arr_22 [i_24] [16] [i_24] [i_23] [i_23] [4]) ? 15716 : (arr_4 [i_23] [i_23] [i_23])))) ? (arr_29 [i_23] [i_23] [i_23] [i_24] [18]) : var_4));
        }
        for (int i_25 = 4; i_25 < 11;i_25 += 1)
        {
            var_52 = 0;
            var_53 = (max(var_53, (arr_49 [i_23])));
            var_54 ^= (arr_14 [i_23] [i_23] [i_23] [i_23] [i_23] [23]);
        }
        for (int i_26 = 0; i_26 < 14;i_26 += 1)
        {
            var_55 = (max(var_55, (arr_20 [i_26] [i_26] [i_26] [i_26] [i_26])));
            var_56 = 4;
        }
        var_57 = (arr_35 [i_23] [i_23] [i_23] [i_23]);
        var_58 += (((((var_8 / (arr_3 [i_23])))) ? (((arr_63 [i_23]) + (arr_74 [i_23] [12] [10]))) : (((var_9 ? (arr_50 [18] [i_23] [i_23] [i_23]) : 1)))));
    }

    for (int i_27 = 0; i_27 < 24;i_27 += 1)
    {
        var_59 = (min(var_59, -1732420844));
        arr_83 [i_27] [i_27] = (((~1) ? var_4 : ((~(~1)))));
    }
    var_60 |= var_4;
    #pragma endscop
}
