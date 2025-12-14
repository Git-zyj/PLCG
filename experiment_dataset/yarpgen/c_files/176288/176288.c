/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = (min(var_12, var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_6 [i_1] [i_1] = -4615422631425550783;
            arr_7 [i_1] = (-(arr_1 [i_0]));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_10 [i_2] [i_2] = (arr_8 [i_2] [i_0]);
            arr_11 [i_2] = ((-(arr_9 [i_2] [i_0] [i_0])));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    {
                        var_16 = var_8;
                        var_17 = ((-(arr_15 [i_3 + 2] [i_0] [i_2] [i_2] [i_0] [i_4 - 3])));
                        var_18 = (max(var_18, (arr_13 [i_0] [i_3] [i_3] [6])));
                        var_19 = (~(arr_2 [i_4 - 1]));
                        var_20 = (arr_15 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0]);
                    }
                }
            }
            var_21 = (arr_8 [i_0] [i_2]);
        }
        arr_18 [i_0] = (((arr_17 [i_0] [i_0] [8] [i_0]) ? (arr_17 [i_0] [i_0] [4] [i_0]) : 0));
        var_22 = (max(var_22, -var_8));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_23 = ((~(arr_4 [i_0] [1])));
            var_24 = (((-(arr_19 [i_5] [i_5]))));
            /* LoopNest 2 */
            for (int i_6 = 4; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 22;i_7 += 1)
                {
                    {
                        arr_30 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0] = (arr_1 [i_0]);
                        arr_31 [i_0] [i_0] = (-(arr_15 [i_0] [i_5] [i_6] [i_7 + 2] [i_7] [i_5]));
                    }
                }
            }
        }
        for (int i_8 = 1; i_8 < 22;i_8 += 1)
        {
            var_25 = ((~(arr_22 [i_0] [i_0] [i_0])));
            var_26 = (~-4615422631425550777);

            for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
            {
                var_27 ^= (arr_22 [i_8] [i_8 + 1] [i_8 + 3]);
                arr_38 [i_8] [i_8] = (arr_13 [i_0] [i_8] [i_9] [i_8]);
                var_28 = (max(var_28, (~2147483641)));
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
            {
                arr_41 [i_0] [i_8] [i_10] = (arr_17 [i_0] [i_8 - 1] [i_8] [i_10]);
                arr_42 [i_8] [i_8] [i_8] = (arr_32 [i_8 + 1] [i_8 + 1] [i_8]);
                arr_43 [i_8] = -6461436067885279789;
            }
            arr_44 [i_8] = (~var_1);
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        arr_47 [i_11] [i_11] = 1;
        var_29 *= (-((-(arr_1 [i_11]))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                {
                    var_30 = (min(var_30, (arr_8 [i_11] [i_11])));
                    arr_53 [i_13] [i_13] [i_13] [i_13] = ((!(arr_22 [i_11] [i_12] [i_12])));
                    var_31 = -4615422631425550809;
                }
            }
        }
        var_32 = (arr_50 [i_11] [i_11]);
    }
    #pragma endscop
}
