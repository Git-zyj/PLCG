/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((arr_3 [i_0 + 1]) / var_0))) && ((((arr_0 [3] [i_0 + 2]) - -17459))));
                arr_6 [5] = ((!(arr_0 [i_0 + 1] [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_13 = (((((((arr_1 [17] [i_3]) && (((-(arr_2 [i_2])))))))) == (((arr_3 [i_2]) % (arr_3 [i_3])))));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {

                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        arr_16 [i_2] [i_3] [i_3] [i_3] [6] [i_5] &= (((((~(arr_14 [17] [12] [14] [17] [2] [i_5])))) ? 65532 : var_1));
                        var_14 = (((arr_0 [i_5 + 2] [7]) == (arr_0 [i_5 + 1] [i_2])));
                    }
                    var_15 = (min(var_15, (((-1 - (arr_11 [i_2]))))));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    arr_19 [9] = ((((((arr_2 [i_3]) + (arr_1 [i_2] [i_3])))) == (max(var_4, (arr_17 [i_3])))));
                    var_16 = (((max((arr_12 [i_6] [i_3] [i_6]), (arr_12 [i_6] [4] [11])))) * (0 != 32));
                    var_17 = (((((~(arr_18 [17] [15] [15] [15])))) & 4294967295));
                    arr_20 [5] [10] [8] = ((((arr_15 [i_2] [15] [0] [i_6]) & (arr_9 [i_2] [i_3]))));
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    var_18 = (4294967292 - 6);
                    arr_23 [0] = ((((~((var_4 ? var_7 : (arr_14 [i_2] [i_3] [i_3] [1] [17] [i_7]))))) & var_5));
                    arr_24 [14] = ((((((arr_18 [14] [1] [i_7] [i_7]) ? ((var_8 + (arr_0 [11] [5]))) : (((901595104 ? (arr_21 [5] [i_3] [1] [i_2]) : var_1)))))) ? (min((var_4 == var_4), (arr_18 [16] [5] [i_7] [2]))) : (~4067)));
                }
                var_19 = (~(((arr_0 [i_2] [i_3]) ? (((arr_18 [i_2] [1] [i_3] [15]) ? (arr_14 [14] [14] [i_2] [7] [3] [17]) : (arr_13 [7]))) : 8589460696226915218)));
            }
        }
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            var_20 = (max(var_20, 4294967277));
            arr_29 [10] [i_8] [5] = (((arr_10 [1] [1] [1]) > (((arr_22 [i_8] [i_9] [13]) ? 25 : (arr_9 [i_8] [10])))));
            arr_30 [i_8] [i_8] [4] = ((arr_28 [i_9] [i_8] [i_8]) && ((((arr_27 [i_8] [i_9]) ^ (arr_15 [17] [i_8] [i_8] [i_9])))));
            var_21 = (max(var_21, ((((arr_14 [i_8] [i_8] [i_8] [6] [i_8] [i_9]) == (arr_11 [i_8]))))));
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        {
                            arr_38 [1] [i_9] [1] [2] = (((arr_18 [i_8] [0] [i_10 + 2] [i_11]) ? (arr_18 [i_12] [2] [i_10 + 4] [i_12]) : (arr_18 [4] [i_12] [i_10 - 1] [i_11])));
                            arr_39 [1] [i_8] [10] [i_10] [4] [i_11] [15] = var_3;
                        }
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_22 -= ((!(var_0 * var_11)));
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 16;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 18;i_15 += 1)
                {
                    {
                        var_23 = (((arr_15 [9] [i_15] [i_15] [i_14 - 2]) ? (arr_15 [9] [4] [12] [i_14 - 2]) : (arr_15 [i_15] [i_14] [i_14 - 2] [i_14 - 2])));
                        var_24 = var_4;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 18;i_17 += 1)
                {
                    {
                        var_25 = (max(var_25, (((-(arr_25 [i_13] [i_16]))))));
                        arr_53 [1] [7] [10] [5] = (((arr_21 [i_17] [i_16] [i_13] [i_8]) ? (arr_21 [i_17] [i_16] [15] [0]) : (arr_21 [i_17] [i_13] [i_13] [i_8])));
                        var_26 = (max(var_26, ((((arr_17 [i_13]) ? (var_8 ^ var_12) : (((!(arr_11 [16])))))))));
                    }
                }
            }
        }
        var_27 = (((arr_47 [i_8] [i_8] [i_8] [i_8]) & (arr_8 [i_8])));
    }
    #pragma endscop
}
