/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_13 |= var_12;
                            var_14 = ((min((arr_3 [i_4 - 1] [i_2 - 1] [i_1 - 1]), (arr_3 [i_4 - 1] [i_2 + 2] [i_1 - 1]))));
                            arr_13 [i_3] [i_3] = ((9219865347109937455 ? ((max((arr_12 [i_1] [i_3] [i_2 + 1] [i_3] [i_1]), var_0))) : ((((207 ? 3836749447029091409 : 1))))));
                            arr_14 [1] [1] &= (arr_12 [i_4 - 1] [2] [i_1 - 1] [2] [i_0]);
                            arr_15 [i_3] [i_2] [i_2] [i_1] [i_3] = (arr_6 [i_0]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {
                        arr_23 [i_6] [i_5] [3] = ((0 ? 1 : 1));
                        var_15 = ((((arr_18 [i_5] [i_5]) ? (arr_18 [i_5] [4]) : (arr_18 [i_5] [i_1]))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_16 = (!237);
                            var_17 += ((((((arr_21 [i_7]) ? var_1 : (arr_7 [i_0])))) && (arr_2 [17] [i_1 - 1])));
                        }
                    }
                }
            }
            var_18 = (((arr_12 [i_1] [i_1 - 1] [i_1] [1] [i_1]) - (max(9219865347109937455, 1))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    {
                        var_19 = 122;
                        var_20 = (max(var_20, (((~((~((10705039967491158212 ? (arr_16 [i_0] [i_0]) : var_11)))))))));
                        arr_32 [0] [1] [i_8] [0] [i_0] [i_8] = ((var_7 <= (min(0, ((~(arr_1 [i_0] [i_0])))))));
                    }
                }
            }
        }
        var_21 -= (0 - 1);
    }
    var_22 = (min(var_22, ((((((((min(var_6, var_2))) ? ((var_8 ? 9219865347109937455 : 122)) : var_7))) ? (min(((17 ? var_11 : 255)), var_3)) : (min(((var_9 ? 18 : var_6)), (!var_9))))))));
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {

                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {

                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_23 = (((arr_40 [i_12] [i_10]) ? (arr_40 [i_13] [i_14]) : (arr_40 [i_13] [i_13])));
                            var_24 = ((var_4 * (var_9 != 18)));
                            var_25 &= -var_9;
                            arr_48 [i_14] [i_14] [i_11] &= ((~(arr_19 [i_10])));
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            var_26 = ((-((122 ? -1101747213733615855 : var_12))));
                            var_27 = var_4;
                        }
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            var_28 = (min(var_28, (~253)));
                            var_29 += (((((var_8 - (arr_24 [i_12] [i_12] [i_12] [i_10] [i_11])))) ? (((arr_19 [i_10]) ? (arr_19 [i_16]) : (arr_41 [i_10] [i_11] [i_12]))) : (~169)));
                            var_30 = (arr_52 [i_10] [i_10] [i_10] [i_12] [i_12]);
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 19;i_17 += 1)
                        {
                            var_31 -= var_6;
                            arr_57 [i_11] [i_12] = (~(arr_20 [1] [i_11] [1] [i_17]));
                            var_32 ^= ((!((var_11 != (arr_54 [i_10] [i_11] [2] [i_10] [i_17])))));
                            var_33 -= (((arr_41 [i_10] [16] [i_10]) | (((arr_54 [i_10] [i_11] [i_12] [i_13] [8]) >> (124 - 83)))));
                            var_34 = (((~(arr_43 [i_10] [i_12] [i_17]))));
                        }
                        arr_58 [i_10] [i_12] [i_12] [i_10] = min((min(var_8, var_3)), (arr_44 [i_12] [i_11] [i_13] [i_12]));
                        arr_59 [i_10] [i_11] [i_10] [i_12] [i_10] [i_10] = var_10;
                        var_35 = ((+(((~18) ^ 27))));
                    }
                    for (int i_18 = 1; i_18 < 18;i_18 += 1)
                    {
                        var_36 = ((((arr_12 [i_18] [i_18] [i_18] [i_12] [i_18 - 1]) ? var_10 : (arr_12 [i_18] [3] [i_18] [i_12] [i_18 + 1]))) == ((var_7 ? (arr_33 [12] [i_18 + 1]) : (((!(arr_50 [i_12] [i_11] [i_11] [i_18 - 1] [i_12] [i_12] [i_12])))))));
                        arr_63 [i_10] [i_10] [i_12] [i_12] [i_18 + 1] = ((~(((arr_6 [13]) ? ((var_0 ? var_9 : 44)) : ((-(arr_28 [i_10])))))));
                        var_37 = (max((((arr_6 [i_10]) / (arr_6 [i_11]))), ((~(arr_39 [i_10])))));
                    }
                    arr_64 [i_12] [i_11] [i_11] [i_12] = ((((min((arr_9 [1] [i_11] [1] [i_12] [i_11]), (arr_8 [8] [1] [8] [i_10]))) + var_9)));
                    arr_65 [i_12] = var_3;
                }
            }
        }
    }
    #pragma endscop
}
