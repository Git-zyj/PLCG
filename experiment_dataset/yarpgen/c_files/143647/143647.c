/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, 65532));
    var_12 = 41568418;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_13 ^= ((~(135672140 - 19795)));
                            var_14 = (max(-676254437, 135672140));
                            var_15 = -1333996135;
                            var_16 += ((~(((arr_10 [i_0] [i_1]) ? -676254437 : 70368744177663))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_17 = (max(var_17, (arr_10 [i_0] [i_1])));
                                var_18 = ((~((var_6 | (arr_1 [i_5 + 1])))));
                                var_19 = var_5;
                            }
                        }
                    }
                }
                var_20 = ((~((~(arr_1 [i_0])))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {

                            for (int i_9 = 0; i_9 < 23;i_9 += 1)
                            {
                                var_21 = (min(var_21, ((((((arr_4 [i_0]) ? 4159295183 : 18193080871706272079))) ? (min(-676254430, (arr_4 [i_7 + 1]))) : (max((arr_4 [i_0]), 12792))))));
                                var_22 -= var_4;
                                var_23 = (min((arr_26 [i_1] [i_7 - 1] [i_1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]), ((((arr_26 [i_7] [i_7 - 1] [i_7] [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 - 1]) && var_7)))));
                                var_24 *= (min(var_5, (arr_23 [i_7] [i_7 + 2] [i_7 + 1] [i_7 + 2] [i_7] [i_7 + 2])));
                            }
                            for (int i_10 = 3; i_10 < 22;i_10 += 1)
                            {
                                var_25 = (~0);
                                var_26 = 4159295183;
                                var_27 -= (!1794909784);
                                var_28 = (arr_7 [i_8]);
                                var_29 = 46922;
                            }
                            for (int i_11 = 0; i_11 < 23;i_11 += 1)
                            {
                                var_30 ^= (((arr_0 [i_7 + 2]) << ((((1609273171 ? ((1384334025 >> (1458302431 - 1458302407))) : (0 == 676254436))) - 77))));
                                var_31 ^= ((4294967295 | (arr_11 [i_7 + 2] [i_7 + 2])));
                                var_32 = 1384334007;
                            }

                            for (int i_12 = 0; i_12 < 23;i_12 += 1)
                            {
                                var_33 = ((((((((arr_7 [i_0]) / (arr_15 [i_0] [i_7] [i_7] [10])))) ? (~3699380287632128393) : ((min(var_4, (arr_22 [i_0] [i_1] [i_0] [i_8] [i_12] [i_0])))))) / (arr_26 [i_12] [i_8] [1] [i_7] [i_0] [i_0] [i_0])));
                                var_34 = 4075;
                            }
                            for (int i_13 = 2; i_13 < 22;i_13 += 1)
                            {
                                var_35 = 13321;
                                var_36 = arr_1 [i_0];
                                var_37 *= ((65526 >= ((min((arr_17 [i_0] [i_13 - 1] [i_7 + 2] [i_8] [i_13] [i_7 + 2]), (arr_17 [i_8] [i_13 + 1] [18] [18] [i_13 - 2] [i_7 - 1]))))));
                                var_38 ^= (arr_15 [i_13] [i_1] [i_1] [i_0]);
                                var_39 ^= (((((((arr_29 [i_13] [i_0] [i_7] [i_0] [i_0]) ? (arr_35 [i_0] [i_1] [i_7] [i_7] [i_13 - 2]) : (arr_0 [i_0]))))) ? (3446106455 - var_7) : ((var_10 * ((4294967291 ? (arr_0 [21]) : var_3))))));
                            }
                            var_40 = 4294967295;
                        }
                    }
                }
                var_41 = 1384334025;
            }
        }
    }
    var_42 = 52211;
    var_43 = (max(var_43, ((((-var_5 / var_4) > (var_1 != var_6))))));
    #pragma endscop
}
