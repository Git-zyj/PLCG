/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((62780 | ((~(arr_0 [i_0])))))) ? (((arr_0 [i_0]) ? (~var_4) : (((arr_1 [i_0] [i_0]) ? var_5 : var_6)))) : var_2));
                var_12 &= (min((((var_9 != (arr_2 [i_1])))), var_11));

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    var_13 = (((max(65511, -1)) << (((((min((arr_2 [i_2]), var_4)))) - 26137))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_14 = (var_11 & 225);

                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            var_15 = var_6;
                            var_16 = var_11;
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_2 + 3] [6] [i_0] [i_5] = (-var_1 ? 116 : var_7);
                            var_17 = 0;
                            var_18 = var_5;
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_19 -= (arr_1 [i_2 + 1] [i_2 - 1]);
                            arr_19 [10] [i_1] [i_1] [14] [i_0] = ((var_3 ? var_6 : (!var_5)));
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_20 = (((arr_13 [i_0] [i_0]) ? var_5 : var_6));
                            var_21 = 55402;
                        }
                        var_22 = ((((!(arr_5 [4] [i_0]))) || (1533056738621834541 || 255)));
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_23 ^= (535202243 == -32766);
                            var_24 = arr_29 [i_9] [i_0] [14] [i_0] [i_0];
                        }
                        arr_32 [i_8] [i_0] [i_0] [i_0] = (min(((max((arr_29 [i_0] [i_0] [i_0] [i_0] [i_8]), (arr_12 [i_0] [i_0] [i_0] [i_0] [0] [15])))), (((var_9 ? (arr_8 [i_0] [i_1] [i_2] [i_0]) : -7178)))));
                        var_25 += ((!(~var_2)));
                        var_26 = ((!((((~var_10) * (min(var_3, (arr_23 [i_0] [6] [14] [i_8]))))))));
                        var_27 |= ((var_6 ? (((arr_13 [i_8] [i_1]) ? (arr_13 [i_8] [i_8]) : (arr_13 [i_8] [i_2]))) : ((((!(arr_13 [i_8] [i_8])))))));
                    }
                    var_28 = (((((~(arr_29 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (67108856 <= 2713925169) : ((2957124293843263150 ? 113 : -6143))));
                    var_29 = (min(var_5, ((var_5 ? (max(var_4, var_4)) : (!var_9)))));
                    var_30 = 6305381288176007938;
                }
                var_31 += (((arr_4 [i_0] [i_1] [i_1]) ? (((min(var_10, (arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] [i_0]))))) : (max(2147483637, 1))));
            }
        }
    }
    var_32 -= (((~var_9) ? (((!(var_3 && var_8)))) : -var_8));
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 21;i_14 += 1)
                        {
                            {
                                var_33 = -31699;
                                var_34 = ((((((max(-19163, var_6))) & ((var_4 << (243 - 243)))))) ? (~20) : var_1);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        var_35 = (arr_41 [i_10] [i_11] [20] [i_12] [i_10]);
                        var_36 = var_0;
                    }
                    /* vectorizable */
                    for (int i_16 = 2; i_16 < 21;i_16 += 1)
                    {
                        var_37 = ((3029448960 >> (((var_4 || (arr_35 [i_12] [i_12] [i_12]))))));
                        var_38 &= ((var_9 >= (arr_40 [i_10] [i_12] [i_12] [i_16])));
                    }
                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {
                        var_39 = ((((var_8 ? (~var_5) : (min(var_3, (arr_33 [i_10]))))) == var_3));
                        var_40 = ((!(((arr_44 [i_10] [i_12] [i_17]) > var_1))));
                        var_41 |= (-(((((5 ? (arr_51 [i_11]) : (arr_48 [i_12] [i_11]))) >= (arr_39 [i_12])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
