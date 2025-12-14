/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_10 = (((var_2 == var_6) ? (((!(arr_4 [i_0] [i_0] [11])))) : (~-901972132)));
            var_11 = var_5;
            var_12 = (min(var_12, ((((arr_3 [i_0] [12]) ? (arr_3 [2] [12]) : ((-10356 ? 15 : -74)))))));
            var_13 = (arr_1 [3]);
        }
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_14 = (89 & 52);
                        var_15 = (!var_4);

                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 12;i_5 += 1)
                        {
                            var_16 = (min(var_16, var_7));
                            var_17 = (-(arr_2 [0] [i_2 - 1] [1]));
                        }
                        var_18 = (max(var_18, ((((-110 ? 15 : (arr_8 [9] [i_2 - 1] [3]))) * (((arr_8 [i_0] [i_2 - 1] [i_3]) ? (arr_8 [i_3] [i_2 - 1] [3]) : (arr_8 [i_0] [i_2 - 1] [i_3])))))));
                    }
                }
            }
        }
        arr_15 [i_0] = ((((((arr_11 [i_0] [i_0] [12] [i_0]) ? var_7 : ((((arr_14 [12] [i_0] [1]) ? (arr_0 [6]) : var_6)))))) ? ((+((1 ? (arr_8 [9] [i_0] [4]) : 73)))) : (arr_11 [i_0] [8] [8] [i_0])));
        var_19 = ((((((~(arr_2 [9] [i_0] [i_0]))) + 2147483647)) >> (((arr_10 [i_0]) - 11919503547671182556))));
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {

        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                var_20 = (((arr_16 [13]) == (max((arr_19 [i_6] [i_7] [9]), (arr_21 [9] [12] [1] [i_8])))));

                /* vectorizable */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    var_21 = ((-(arr_21 [i_6] [5] [11] [8])));
                    var_22 = (min(var_22, ((((arr_22 [i_9]) && (((var_2 ? var_8 : -73))))))));
                }
            }
            arr_26 [i_6] = (max(63, 511));
        }

        /* vectorizable */
        for (int i_10 = 1; i_10 < 14;i_10 += 1)
        {
            arr_30 [i_6] [1] [1] = (((arr_18 [i_10 + 1] [i_10 + 1] [i_10 + 1]) * 195));
            var_23 = (min(var_23, (arr_19 [i_10 + 1] [0] [8])));
            var_24 = (((((-(arr_24 [4] [10] [1] [i_10])))) ? -63 : (arr_24 [i_10 - 1] [1] [i_10] [i_6])));
            var_25 = ((((((arr_29 [i_6] [3]) ? (arr_22 [7]) : (arr_16 [i_6])))) - ((88 * (arr_23 [3] [1])))));

            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                var_26 = (((arr_21 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 + 1]) ? (arr_21 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 - 1]) : var_6));
                var_27 = var_9;
                var_28 *= ((-74 ? 74 : 74));
            }
        }
        for (int i_12 = 1; i_12 < 13;i_12 += 1)
        {

            for (int i_13 = 4; i_13 < 12;i_13 += 1)
            {
                var_29 &= (var_2 ? ((-(~74))) : ((-var_8 ? (var_4 != var_4) : (var_2 < var_8))));

                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    var_30 |= (((arr_20 [7] [14] [i_6]) ? (((var_7 ? 110 : (arr_40 [i_6] [1] [14] [i_14] [i_14])))) : (arr_32 [4])));
                    var_31 = -3;
                }
                for (int i_15 = 0; i_15 < 15;i_15 += 1)
                {
                    var_32 = ((-((63 - (~var_0)))));
                    arr_46 [7] [9] [3] [i_15] [8] [i_13] = ((-28091 ^ ((31 ? (arr_37 [i_13] [i_13] [i_13 + 3]) : -1562965868))));
                    var_33 = (!1562965890);
                }
                var_34 = ((((-1695907627 ? var_0 : 87)) ^ (max(-28090, (arr_20 [i_13 - 4] [i_13 + 2] [6])))));
            }
            var_35 &= ((((((-1 ? 370370712 : 58))) ? ((((arr_45 [i_12] [i_12] [12] [i_12]) && var_8))) : (((arr_17 [8]) ? 853246338 : (arr_44 [i_12] [i_6] [i_6] [2]))))));
            var_36 = ((+((+(((arr_31 [i_6] [i_12]) ? -75 : var_2))))));
        }
        var_37 = ((-(-1 - -28091)));
    }
    for (int i_16 = 0; i_16 < 18;i_16 += 1)
    {

        /* vectorizable */
        for (int i_17 = 0; i_17 < 18;i_17 += 1)
        {
            var_38 = (max(var_38, 36844));
            var_39 = 74;
            var_40 = 255;
        }
        var_41 = (max(var_41, (arr_51 [i_16] [i_16])));
        var_42 = (min(var_42, 28091));
    }
    var_43 = 235;
    var_44 = ((!((((((1695907638 ? var_5 : var_9))) * var_7)))));
    #pragma endscop
}
