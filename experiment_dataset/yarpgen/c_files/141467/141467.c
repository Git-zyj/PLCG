/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] = var_10;
        var_19 *= (arr_2 [i_0]);

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_20 |= (arr_3 [i_1]);
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_21 = arr_1 [i_0];
                            arr_14 [i_0] [i_3] [i_1] [i_1] [i_0] = (arr_0 [i_0] [i_2 - 1]);
                            var_22 = ((((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (arr_3 [i_3]) : var_12)) | (((var_11 ? (arr_7 [i_0] [i_0] [i_0]) : var_14))));
                        }
                    }
                }
            }
            var_23 &= var_1;

            for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
            {
                var_24 = (arr_10 [i_0] [i_0] [i_1] [i_1] [i_1]);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_25 -= ((65019 ? 0 : 32256));
                            var_26 = -4899447496776140527;
                            var_27 = (min(var_27, (((((32256 ? 2085311084 : 2037341473731916831))) ? (arr_3 [i_0]) : ((((arr_10 [i_0] [i_0] [i_0] [i_6] [i_0]) ? (arr_17 [i_0] [i_1] [i_5] [i_6] [i_7]) : var_15)))))));
                            var_28 = ((((var_2 ? var_8 : var_7)) == (arr_19 [i_1] [i_5] [i_1] [20])));
                            var_29 ^= ((var_3 ? (arr_6 [i_0]) : (arr_6 [i_0])));
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
            {
                var_30 = (arr_21 [i_8] [i_0] [i_0] [i_0]);
                var_31 = (min(var_31, (var_3 >= var_7)));

                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    arr_30 [i_0] [i_0] [20] [i_9] = (((arr_25 [i_0] [i_9]) ? (arr_25 [i_0] [i_9]) : (arr_25 [i_1] [i_8])));
                    var_32 = (arr_26 [i_9] [i_8]);
                    var_33 = (min(var_33, ((((arr_10 [i_9] [i_1] [20] [i_9] [i_9]) ? (arr_6 [i_0]) : (arr_10 [8] [i_1] [i_1] [3] [i_1]))))));
                }
                var_34 = var_14;
            }
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                var_35 = var_1;
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 23;i_12 += 1)
                    {
                        {
                            var_36 = (arr_1 [i_0]);
                            var_37 = (max(var_37, ((((arr_2 [i_12 + 1]) + (arr_10 [i_11 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1]))))));
                        }
                    }
                }
                var_38 = (((-2147483647 - 1) ? 22191 : (arr_5 [i_0])));
            }
        }
        for (int i_13 = 3; i_13 < 21;i_13 += 1)
        {
            var_39 &= (arr_25 [i_13 - 2] [i_13 + 2]);
            var_40 *= ((var_11 ? (arr_24 [i_0] [16]) : (arr_10 [9] [9] [9] [9] [i_13 + 2])));
        }
    }
    var_41 ^= (min(var_5, var_15));
    var_42 = (min(var_42, var_17));
    #pragma endscop
}
