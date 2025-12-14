/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max(var_18, ((var_4 ? -106 : (max(var_13, var_5)))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_20 += (arr_9 [i_2 + 3] [i_2 - 1] [i_2 + 2] [i_2 + 4]);
                            var_21 = (max(var_21, (var_17 < 2589114965)));
                            arr_14 [i_1] [i_4] [i_2] [i_3] [i_4] = ((-((var_11 ? (arr_1 [i_0]) : 15700))));
                            var_22 = 1705852351;
                            var_23 = (((var_8 & -114) ? (arr_13 [i_0]) : (arr_2 [i_0 + 1] [i_2 + 4])));
                        }

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            arr_17 [i_0 - 1] [1] [i_1] [1] [6] = (((((~(arr_15 [i_1] [i_3 - 2] [i_5] [i_1] [i_5])))) ? ((var_14 ^ (arr_5 [i_3 - 1] [i_2 + 1]))) : (min((((arr_8 [i_1] [i_5]) ^ (arr_9 [i_5] [0] [i_5] [14]))), (((var_9 ? -1 : (arr_1 [i_0]))))))));
                            var_24 = (max(var_24, ((max(((((arr_4 [i_0 + 1] [i_1] [4]) >= (arr_4 [i_2] [i_2 + 4] [2])))), -3606)))));
                        }
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            var_25 = (~-94);
                            arr_20 [i_6 - 1] [i_1] [i_1] [i_2] [i_1] [i_0] [i_0] = ((!((2876622833 && (arr_9 [i_0 + 2] [i_2 + 3] [i_2 + 2] [i_3 - 1])))));
                        }
                    }
                }
            }
        }
        arr_21 [i_0] = (((arr_8 [4] [i_0 + 2]) >= (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    for (int i_7 = 2; i_7 < 20;i_7 += 1)
    {
        var_26 = (((((-((var_9 ? var_15 : (arr_23 [i_7 + 1] [i_7])))))) ? 5137696414130475562 : (((((arr_22 [i_7 - 1]) < (arr_22 [7]))) ? (max(33, (arr_22 [i_7]))) : var_11))));
        var_27 -= var_1;
        var_28 = (((arr_22 [i_7 + 1]) >= (arr_22 [i_7])));
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 21;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 0;i_9 += 1)
        {

            for (int i_10 = 1; i_10 < 23;i_10 += 1)
            {
                arr_31 [i_10] [i_8] [i_10] = ((60206 ? (arr_29 [8] [i_10] [i_10 + 1] [i_9]) : (arr_29 [i_8 + 3] [i_10] [i_9 + 1] [i_10])));
                arr_32 [i_8] [i_9] [i_10] = var_13;
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 23;i_12 += 1)
                    {
                        {
                            var_29 += ((~(arr_25 [i_10 - 1] [i_11 - 1])));
                            var_30 = (((arr_29 [i_8 + 2] [i_10] [i_11 + 2] [i_11 - 1]) ? (((arr_34 [i_9] [i_9] [i_9] [i_10]) ? (arr_34 [i_8 - 3] [i_9] [i_8 - 3] [i_10]) : 1705852352)) : (arr_33 [i_11 + 2] [i_10 - 1] [i_9 + 1] [i_8 - 3])));
                            arr_40 [i_9] [i_9] [i_10] [i_12] [i_12] [i_12] = var_7;
                            arr_41 [i_10] [i_10] [i_10 + 1] [i_11 + 1] [i_8 + 3] [i_11 + 1] [i_12 + 1] = (14220816330202973082 <= -113);
                        }
                    }
                }
            }
            var_31 = (max(var_31, (((-(arr_35 [i_8] [i_8 + 1] [i_8 - 2] [21]))))));
            arr_42 [i_8 + 2] = 2589114946;
        }
        var_32 += ((arr_33 [i_8 - 1] [i_8 - 3] [i_8] [i_8 - 2]) ? (arr_28 [i_8] [7] [i_8]) : var_7);
    }
    for (int i_13 = 0; i_13 < 15;i_13 += 1)
    {

        for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
        {
            var_33 = (max(var_33, (((var_0 ? (min((((!(arr_35 [i_13] [i_13] [i_14] [i_14])))), var_12)) : var_2)))));
            var_34 = (-118 * 8796093022207);
            var_35 = ((((((arr_29 [i_13] [i_13] [i_14] [16]) ? (arr_29 [i_14] [i_13] [i_13] [i_13]) : (arr_29 [i_13] [i_13] [i_14] [19])))) ? ((0 ? var_18 : (arr_39 [i_13] [i_13] [i_13] [i_14]))) : (var_9 - 118)));
        }
        for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
        {
            var_36 -= (((((var_1 | (arr_19 [2] [2])))) ? (((!(arr_28 [i_13] [i_13] [i_13])))) : (~var_16)));
            var_37 = (max(var_37, ((((((~(((arr_8 [8] [8]) ^ -5137696414130475569))))) ? (arr_11 [i_13] [i_13] [i_15] [i_15] [10] [i_15]) : var_4)))));

            for (int i_16 = 0; i_16 < 15;i_16 += 1)
            {
                arr_53 [i_13] [i_13] [i_13] = (((max((arr_23 [i_13] [i_15]), (arr_28 [i_13] [i_13] [i_13])))) && ((max((arr_38 [i_13] [i_13]), (arr_33 [i_13] [i_15] [i_13] [i_16])))));
                var_38 += 132;
            }
        }
        var_39 = (max(var_39, (arr_11 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])));
    }
    #pragma endscop
}
