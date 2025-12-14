/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((38694 << ((((~71) <= var_4)))));
    var_17 = ((var_15 ? -var_3 : -81));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            var_18 |= (15001001958583358023 ^ 78);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_19 *= (((arr_2 [i_1 - 1] [i_1 - 1]) - (arr_11 [i_1] [i_1 - 2] [i_1] [i_1] [i_1 - 2] [i_1])));
                            var_20 = (max(var_20, ((((((arr_11 [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 2] [i_1 - 3] [1]) + 2147483647)) << ((((((-211587920 ? var_14 : var_5)) + 20631)) - 14)))))));
                        }
                    }
                }
            }

            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    arr_20 [i_0] [i_5] [i_1 + 2] [i_0] |= 16207;
                    arr_21 [i_1 + 2] [i_1] [i_6] = (-17887 ? (0 | 255) : ((((arr_0 [i_5]) != var_2))));
                }

                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    arr_25 [i_0] [i_0] [i_1] [i_1] [i_5] [i_0] = 1951630623;
                    var_21 = (max(var_21, 78));
                }

                for (int i_8 = 2; i_8 < 11;i_8 += 1)
                {

                    for (int i_9 = 1; i_9 < 12;i_9 += 1)
                    {
                        arr_31 [i_1] [i_1] [1] [i_9] = (((~(arr_1 [i_1] [i_5]))));
                        var_22 = (((-81 + 2147483647) << (1 - 1)));
                        var_23 = ((var_13 ? ((11233586334946137527 ? 272817704 : 3690620605)) : (((var_11 ? 6497 : 3)))));
                        var_24 = ((var_10 + (arr_1 [i_1 + 1] [i_9])));
                        var_25 = ((var_14 ? var_12 : var_5));
                    }
                    for (int i_10 = 2; i_10 < 11;i_10 += 1)
                    {
                        var_26 = (min(var_26, (!var_9)));
                        var_27 = (max(var_27, (((((0 && (arr_14 [i_0] [i_1 - 3] [i_5] [i_8] [i_10 + 1]))) ? (arr_6 [i_0] [i_0]) : var_2)))));
                    }
                    var_28 -= (var_6 != var_3);

                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        var_29 = (min(var_29, 13));
                        var_30 *= var_3;
                    }
                    arr_37 [i_0] [i_0] [i_1] [i_0] [i_1] = ((65528 ? (arr_12 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 2] [8]) : (arr_7 [i_1 - 1] [i_1 + 2])));
                }
            }
        }

        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            /* LoopNest 3 */
            for (int i_13 = 4; i_13 < 12;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        {
                            var_31 = arr_48 [i_0] [i_0] [i_0];
                            var_32 = var_10;
                            var_33 = (max(var_33, (arr_14 [i_0] [i_12] [i_13] [i_0] [i_12])));
                            var_34 = ((!(!47139)));
                        }
                    }
                }
            }
            var_35 = var_13;
        }
        var_36 -= ((((5613110182601363171 ? var_10 : (arr_48 [i_0] [i_0] [i_0]))) << (((arr_39 [i_0]) - 1075904900))));
        var_37 = ((((var_0 * (arr_10 [i_0] [i_0]))) <= (arr_8 [i_0] [i_0] [i_0])));
    }
    var_38 = var_10;
    #pragma endscop
}
