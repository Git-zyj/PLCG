/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 += (((((12189615784471226106 ? var_2 : ((((arr_6 [i_0 - 2] [i_1 + 1] [i_2]) == -27)))))) & 2107467317));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_15 = ((+((-2959078116844878654 ? (arr_0 [i_1 + 1] [i_0 - 2]) : 6257128289238325509))));
                        arr_12 [i_1] = var_5;

                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            var_16 *= (!var_11);
                            var_17 = 96;
                            var_18 = (min(var_18, (((+(((arr_15 [i_0 + 2] [i_4 - 1] [i_1 + 1]) ^ 0)))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            var_19 = ((18446744073709551615 ? (arr_2 [i_0 - 2]) : (arr_4 [i_1] [i_1] [i_0 + 1])));
                            var_20 = (min(var_20, ((0 ? 12189615784471226126 : (arr_17 [i_5] [i_1 - 1] [i_3])))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [i_1] = ((5174296541654162072 ? 65533 : 106));
                            var_21 += (arr_20 [i_0 - 1] [i_6] [i_1 + 1] [i_3] [4]);
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            var_22 = (min(var_22, (((0 ? (((arr_10 [i_7] [4] [i_0]) ? var_5 : (arr_10 [i_7] [i_3] [i_2]))) : ((((arr_0 [14] [i_1 - 1]) - 9223372036854775807))))))));
                            arr_26 [i_1] [i_3] [0] [0] [i_1] = ((var_3 ? ((27 ? 101 : 3714162220)) : (((((arr_19 [i_1] [i_1] [1] [i_1 + 1] [i_1]) && (arr_19 [i_0] [i_1 + 1] [i_1] [i_1 + 1] [i_1])))))));
                            var_23 *= ((-102 ? -27 : 76));
                        }
                        var_24 = (arr_5 [i_1 + 1] [i_1]);
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_25 = (arr_19 [i_0 + 2] [i_0] [i_0] [i_0] [i_1]);
                        arr_29 [i_0] [i_1] [i_1] [i_1] = (((((arr_4 [i_1] [15] [15]) ? (arr_4 [i_1] [i_1 + 1] [i_8]) : (arr_4 [i_1] [i_1 + 1] [i_1 + 1]))) / (((arr_4 [i_1] [i_1 + 1] [i_2]) * (arr_4 [i_1] [i_1 + 1] [i_1])))));
                        var_26 = (min(var_26, ((((arr_10 [i_0] [i_0 + 2] [i_0]) ? 15156 : (~var_10))))));
                        arr_30 [i_1] [15] [i_1] [6] [i_2] = var_1;
                    }
                    for (int i_9 = 4; i_9 < 18;i_9 += 1)
                    {
                        arr_34 [i_0] [i_1] [i_2] [0] = var_5;

                        for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                        {
                            var_27 = ((1 || (arr_15 [i_0] [i_1] [i_9])));
                            arr_37 [i_1] [8] [i_2] [8] [i_1] = ((((1493154506 * 12189615784471226123) / (arr_5 [i_9 - 4] [i_1]))));
                        }
                        for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                        {
                            arr_41 [i_0] [13] [i_1] [i_1] [i_1] [i_9] [i_1] = var_1;
                            var_28 = (min(var_28, 0));
                            var_29 = ((((-32752 > (arr_7 [i_0 - 2] [0] [i_9 + 1] [i_0 - 2]))) ? var_3 : (var_13 < 9628)));
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_30 = ((((-(arr_15 [i_0 - 1] [i_1 + 1] [i_9 + 1])))) ? var_0 : ((3472672044 ? var_0 : (arr_33 [i_0] [i_1 - 1] [i_1] [i_2] [i_9 + 1] [i_12]))));
                            arr_46 [i_0] [i_1] [i_0] [1] [13] = ((-2142189284 ? -88 : 255));
                        }
                        for (int i_13 = 3; i_13 < 15;i_13 += 1)
                        {
                            arr_50 [i_0] [i_0] [i_2] [i_1] [i_13 - 3] = (((65504 ^ (arr_47 [1] [i_1] [i_1] [i_13] [i_0 - 1]))));
                            var_31 = ((!(((972 ? 65533 : (arr_44 [i_1 - 1] [i_9 - 1]))))));
                            var_32 *= (var_7 % 1);
                        }
                        arr_51 [i_1] [4] [10] [i_1] = ((!(25925 + var_3)));
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 18;i_15 += 1)
                        {
                            {
                                var_33 *= (~var_13);
                                var_34 += -var_2;
                                var_35 = (arr_49 [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_36 = (~0);
    #pragma endscop
}
