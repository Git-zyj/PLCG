/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (((arr_1 [i_0]) ? (((var_15 - (arr_0 [i_0])))) : (((arr_0 [i_0]) & var_4))));
        var_21 ^= (arr_0 [i_0]);
        var_22 = ((((-(var_10 - var_16))) <= var_6));

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_23 = var_15;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            arr_15 [i_0] [i_0] [i_1 + 1] [i_2] [i_1] [i_4] [i_4] = ((-(((arr_8 [9] [i_1 + 1] [i_1 + 1]) ? (arr_6 [i_0] [i_1 - 1] [i_1]) : (arr_6 [i_0] [i_1] [i_1])))));
                            var_24 = ((((~(((arr_13 [i_1] [i_0] [5] [i_2] [i_3] [i_4]) % (arr_10 [i_0] [i_1] [i_2] [i_3] [i_4])))))) ? (((((arr_14 [i_4] [i_1] [i_2] [i_0] [i_1] [i_1] [i_0]) && (arr_4 [i_1 - 1]))))) : (arr_8 [i_4] [i_3] [i_1 + 1]));
                            var_25 -= ((~((var_5 ? (arr_3 [i_0] [i_1 - 1] [i_0]) : (arr_3 [1] [i_1 + 1] [i_0])))));
                            arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] = ((~(((arr_1 [i_2]) - var_13))));
                            var_26 = (((((var_2 | var_19) ^ (arr_5 [i_0] [i_3] [i_2]))) >> (!var_13)));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_19 [i_0] [i_0] [i_2] [i_1] [i_1] [i_5] [i_5] = ((~(arr_12 [i_1 - 1] [i_1] [i_1] [i_3] [i_5])));
                            arr_20 [i_0] [i_2] [7] [i_1] [i_5] [i_0] [i_5] = ((var_16 ? (arr_17 [i_1 + 1] [i_1] [i_1 - 1] [7] [i_1 - 1] [1]) : ((((var_13 >= (arr_10 [i_5] [i_3] [7] [0] [i_0])))))));
                        }
                        arr_21 [i_0] [i_1] [i_1] [i_3] = (((var_14 ? (arr_6 [i_1 + 1] [i_1 - 1] [i_1]) : var_14)));
                        arr_22 [i_3] [i_1] [i_3] = ((~((~(max((arr_17 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]), (arr_10 [i_3] [i_3] [i_2] [i_0] [i_3])))))));
                        var_27 = ((((arr_10 [i_0] [i_1] [i_2] [i_3] [i_1 - 1]) ? var_11 : (arr_10 [2] [i_1] [i_2] [i_2] [i_1 + 1]))));
                        var_28 = (min(var_28, ((((((((arr_14 [i_0] [i_2] [i_2] [i_2] [4] [i_3] [i_0]) == ((((arr_7 [i_0]) < var_9))))))) | (arr_3 [i_3] [8] [i_0]))))));
                    }
                }
            }
            var_29 = (max(var_29, ((((((var_15 ? (arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 1]) : (arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 1])))) ? ((~(arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 1]))) : ((-(arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 1]))))))));
        }
        for (int i_6 = 3; i_6 < 8;i_6 += 1)
        {
            var_30 = ((31621 ? 229 : 1048575));
            var_31 *= (((((arr_8 [i_0] [i_0] [i_0]) * (var_6 >= var_18))) * ((((~var_18) > (7635819013415946559 ^ var_0))))));
        }
        var_32 = ((var_7 != 1) ? -1048571 : 4294967283);
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            arr_32 [8] [i_7] [i_8] = (((((((arr_29 [1] [11] [i_8]) | (arr_28 [i_7] [i_7]))))) ? (((var_18 < (min((arr_29 [i_7] [i_8] [i_7]), var_5))))) : (((((var_2 && (arr_26 [i_7]))) && ((((arr_30 [i_8] [i_8] [i_7]) & (arr_26 [i_7])))))))));
            var_33 -= (~(var_7 == var_15));
            arr_33 [i_7] [i_8] [i_7] = arr_28 [i_7] [i_8];
            var_34 = var_17;
            arr_34 [i_8] [i_7] = (((var_0 % (~var_9))));
        }
        arr_35 [i_7] [i_7] = ((((~(arr_25 [i_7]))) ^ (arr_31 [2] [i_7] [i_7])));
        var_35 = (arr_26 [i_7]);
        arr_36 [i_7] [i_7] = (((((var_13 + (arr_30 [i_7] [i_7] [i_7])))) >= 1617031125));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        var_36 *= var_15;
        arr_41 [i_9] = ((-(arr_39 [i_9] [i_9])));
        arr_42 [i_9] = (arr_37 [i_9] [i_9]);
        arr_43 [i_9] = (arr_40 [i_9]);
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        var_37 *= ((-((-(arr_46 [i_10] [i_10])))));
        arr_47 [i_10] [i_10] = (((arr_37 [i_10] [i_10]) ? (arr_37 [i_10] [i_10]) : var_16));
        arr_48 [i_10] &= (((arr_39 [i_10] [i_10]) ? (((var_2 % (arr_46 [i_10] [i_10])))) : var_4));
    }
    var_38 = (((max(1048549, 76))) / var_11);
    #pragma endscop
}
