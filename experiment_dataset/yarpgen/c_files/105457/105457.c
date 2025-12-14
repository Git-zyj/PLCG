/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [20] [20] = ((!((max(var_2, var_16)))));
        var_20 -= (((arr_1 [8] [9]) ? (((-(arr_0 [i_0 + 1])))) : 65535));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_0] = (min(0, ((min(var_11, var_8)))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_11 [i_1] [i_1] [i_1] [i_2] [i_0] = (min(4033309393, ((min((((arr_0 [i_0]) ? (arr_8 [i_2] [i_0]) : var_3)), var_0)))));
                        arr_12 [i_0] [i_1] [14] [1] [14] = (!var_15);

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_21 = (min(var_21, (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                            arr_15 [i_0] [i_4] [i_3] [i_0] [i_0] [i_0] = (arr_13 [i_0 + 1] [i_1]);
                            var_22 += (((-(arr_14 [19] [19] [i_2] [i_3] [i_0 + 1]))));
                        }
                        arr_16 [20] [i_1] [11] [i_3] = ((var_0 * (!var_14)));
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            arr_19 [i_0] = var_16;
            arr_20 [17] [i_0] = var_7;
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 20;i_8 += 1)
                {
                    {
                        arr_29 [i_6] [i_6] = ((((~(arr_26 [i_0 + 1] [17] [i_7 - 1] [i_8 - 1]))) <= 1));
                        arr_30 [8] [i_6] [6] [15] [1] [i_8 + 1] = ((!(arr_7 [i_0] [i_0] [i_0])));
                    }
                }
            }
            arr_31 [i_6] [i_0] [i_0] = var_3;
        }

        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            var_23 += ((~((max(1, var_0)))));
            var_24 = (max(var_24, 1));
            var_25 = ((((((min(17076, -25175))) + 2147483647)) >> (((arr_17 [4] [i_9] [i_9]) + 12720))));
            var_26 = (arr_28 [i_0] [8] [i_0] [i_0]);
            arr_34 [i_9] = var_19;
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            var_27 = (max(var_27, -var_18));
            arr_37 [i_0] [20] = var_8;
            arr_38 [i_0] = 8804800157343499340;
            arr_39 [i_10] [17] [7] = 4033309414;

            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                var_28 = (max(var_28, var_10));
                var_29 = var_16;
                var_30 = (min(var_30, (arr_9 [16] [5] [5] [15])));
                arr_42 [14] [i_10] [i_0] = 1;
            }
        }
        arr_43 [i_0] [15] = (arr_5 [i_0] [8] [i_0]);
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        arr_46 [i_12] [7] = (max(((((arr_44 [i_12] [18]) ? var_2 : (-25195 || 127)))), (max(-var_17, (~var_16)))));
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        var_31 = var_13;
                        arr_55 [7] [i_14] [21] [i_15] = ((!(17065 * var_17)));
                    }
                }
            }
        }
    }
    var_32 = var_18;
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 23;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            {
                var_33 = ((!((min(59922, 1)))));
                arr_60 [i_16] [i_17] [i_17] = ((-(((arr_56 [i_17]) + (arr_58 [i_16] [i_17] [i_17])))));
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 23;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 23;i_19 += 1)
                    {
                        {
                            var_34 &= var_9;
                            arr_66 [i_16] [i_17] [i_18] [i_16] |= ((+(min((arr_62 [i_19]), (arr_62 [i_18])))));
                            arr_67 [i_17] [15] [i_18] [i_17] [i_16] = (((-(arr_56 [i_16]))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
