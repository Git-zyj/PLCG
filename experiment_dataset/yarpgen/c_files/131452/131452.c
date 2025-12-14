/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_18 = var_17;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_19 *= ((-(arr_0 [i_0] [i_0])));

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_20 ^= var_9;
                arr_8 [11] &= (max((max((arr_7 [i_0 - 1]), (arr_4 [i_0] [i_0] [i_0]))), (arr_6 [i_0])));
            }
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_21 = (min(var_21, 1660478382));
                arr_11 [i_0 + 1] [i_3] [i_0 - 3] [i_0 + 1] = 25;
                arr_12 [i_0] [i_0] [i_3] = (~2213306124);
                arr_13 [i_0 + 1] [i_3] [i_3] = (~var_11);
            }
            var_22 = (max(var_22, -1399661359));
            arr_14 [i_0] = (arr_3 [i_0]);
        }
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            arr_18 [i_0] [i_4] [i_0] = (arr_6 [i_0 - 3]);
            arr_19 [i_0] [i_0] [i_4 - 1] = arr_5 [i_4 + 1] [i_4 + 1] [i_0 - 3];
            arr_20 [i_0] [i_0] = var_13;
            var_23 *= (max(4194240, var_14));
        }
        var_24 = (max(var_24, var_16));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_25 [i_5] = arr_22 [i_5] [i_5];
        arr_26 [17] [17] = (~(arr_22 [i_5] [i_5]));

        /* vectorizable */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_25 = (arr_24 [i_5]);
            var_26 = (min(var_26, (arr_22 [i_5] [i_6])));
            arr_29 [i_5] = -var_11;
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 15;i_8 += 1)
                {
                    {

                        for (int i_9 = 2; i_9 < 17;i_9 += 1)
                        {
                            arr_38 [i_5] [i_8] [i_9] &= var_7;
                            arr_39 [i_7] [17] [i_7 - 3] [i_8] [i_9 - 2] = (~-88);
                            var_27 = (arr_21 [i_9]);
                            arr_40 [i_7] [i_6] [i_6] [i_8] [8] = ((~(arr_21 [i_6])));
                        }
                        var_28 = 393216;
                    }
                }
            }
        }
        for (int i_10 = 3; i_10 < 15;i_10 += 1)
        {
            arr_44 [i_5] [i_10] [i_5] = (max((max((arr_30 [i_5] [i_5] [i_5] [i_5]), -425665071)), (max((max(-4194240, var_14)), (arr_22 [7] [8])))));
            var_29 = (~3455176244);
            var_30 ^= ((-((~(arr_42 [i_5])))));
        }
        var_31 = ((-(max((max((arr_43 [1] [i_5] [10]), (arr_37 [i_5] [2] [i_5] [i_5] [i_5]))), (arr_27 [i_5] [9] [9])))));
    }
    var_32 = var_17;
    var_33 = var_2;
    #pragma endscop
}
