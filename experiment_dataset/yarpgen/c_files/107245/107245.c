/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (var_14 * var_6);
    var_17 = (min(var_11, (5175 + var_8)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_18 = (((arr_2 [i_0 - 1] [i_0]) ? ((var_11 / (arr_0 [i_0]))) : (((arr_0 [7]) * 5182))));

        for (int i_1 = 3; i_1 < 14;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                var_19 *= (((arr_1 [i_1 + 2] [i_0 + 1]) - (arr_4 [i_1 + 2])));
                var_20 &= (arr_0 [i_0 - 1]);
            }
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_15 [15] [i_1] [15] [i_3 - 2] [i_5] [1] = ((-(arr_4 [i_1 - 2])));
                            var_21 = var_7;
                            arr_16 [1] [i_1] [i_3] [i_4] [i_5] = (arr_6 [i_1] [i_3]);
                            arr_17 [i_5] [i_5] [i_4] [i_3] [i_1 - 2] [i_1] [i_0] = (arr_8 [i_3 + 1] [i_0 + 3]);
                        }
                    }
                }
            }
            var_22 &= ((~(arr_4 [i_0])));
        }
        for (int i_6 = 3; i_6 < 14;i_6 += 1) /* same iter space */
        {
            arr_21 [i_0 - 1] [i_0] [i_0] = ((~((var_1 ? (arr_8 [i_0] [i_6]) : (arr_18 [i_0 + 3] [1])))));
            arr_22 [i_6] = (1 || -74);
            arr_23 [i_0] = (arr_0 [i_0]);
            var_23 = (((arr_7 [i_0] [i_6 + 2] [i_0 - 2] [i_6 + 1]) ? (arr_8 [3] [3]) : (arr_8 [4] [16])));
        }
        for (int i_7 = 3; i_7 < 14;i_7 += 1) /* same iter space */
        {
            var_24 ^= (arr_4 [13]);
            var_25 = (!5178);
            arr_28 [i_0 - 2] = ((~(arr_12 [i_0] [i_0 + 3] [i_0] [i_7] [i_0])));
        }
        arr_29 [i_0] = -889311762721160943;

        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
        {
            arr_33 [i_8] = (arr_31 [8] [i_0] [i_0]);
            var_26 = (arr_0 [i_0]);
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        arr_44 [i_0] [3] [i_0] [i_10] [i_11] = arr_38 [i_0] [i_9] [i_0];
                        var_27 = var_10;
                        var_28 = (arr_24 [i_11]);
                    }
                }
            }
            var_29 = (min(var_29, (arr_6 [i_0 - 1] [i_0 + 3])));
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 16;i_13 += 1)
                {
                    {
                        var_30 = (arr_6 [i_0 + 3] [i_0]);
                        arr_51 [i_0] [i_0] [i_9] [2] [i_12] [i_13] = ((arr_26 [i_0 - 1] [i_13 - 3] [i_13]) ? (arr_25 [i_0] [14]) : (arr_5 [i_12 + 2] [i_0 + 1]));
                        var_31 *= -278773372;
                        arr_52 [i_0] = 5698;
                        var_32 = (arr_5 [8] [i_9]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 15;i_14 += 1)
    {
        arr_56 [i_14] [i_14] = (arr_35 [i_14] [i_14] [i_14]);
        var_33 = (min(var_33, (arr_53 [i_14] [i_14])));
        arr_57 [i_14] [i_14] = 889311762721160942;
    }
    /* vectorizable */
    for (int i_15 = 1; i_15 < 9;i_15 += 1)
    {
        arr_60 [i_15] = ((~(((arr_35 [i_15] [i_15] [i_15]) << (((arr_47 [1]) - 19276))))));
        arr_61 [i_15] = (-1 | 163);
    }
    #pragma endscop
}
