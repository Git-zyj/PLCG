/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (max((max((arr_2 [i_0] [i_0]), 0)), (((arr_2 [i_1] [i_2]) ? (arr_2 [i_0] [i_0]) : (arr_2 [2] [i_0])))))));

                    for (int i_3 = 3; i_3 < 9;i_3 += 1) /* same iter space */
                    {
                        var_15 = ((((126 ? ((var_10 ? (arr_2 [i_1] [i_1]) : var_13)) : ((((arr_2 [i_0] [i_0]) ? var_1 : 126))))) >= ((((((var_6 ? (arr_9 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3]) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) < ((((!(arr_2 [i_1] [i_3])))))))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = var_8;
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 9;i_4 += 1) /* same iter space */
                    {
                        var_16 *= (((~(arr_12 [i_0]))));
                        arr_16 [i_1] [i_1] [i_2] [i_4 - 3] = ((((arr_0 [i_0]) < var_2)) ? ((129 ? 129 : var_0)) : ((~(arr_0 [i_4]))));

                        for (int i_5 = 2; i_5 < 11;i_5 += 1)
                        {
                            arr_20 [i_5] [i_5] [i_4] [i_2] [i_1] [i_0] [i_0] = (-9223372036854775807 - 1);
                            var_17 = var_8;
                        }
                    }
                    for (int i_6 = 3; i_6 < 9;i_6 += 1) /* same iter space */
                    {
                        var_18 = (min(var_18, (arr_7 [i_0] [i_1] [i_2] [i_6])));
                        var_19 = (~((min((arr_17 [i_1 - 3] [i_6 + 2]), (arr_17 [i_1 - 3] [i_6 + 2])))));
                        var_20 = (((!((max(141, 161))))) ? (((!161) ? (((100 ? 126 : (arr_1 [i_0] [i_1])))) : ((var_7 / (arr_4 [i_0] [i_0]))))) : ((+(((arr_9 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1] [i_1] [i_1]) + var_12)))));
                    }
                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 9;i_7 += 1) /* same iter space */
                    {
                        var_21 = (!var_10);

                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_22 = var_10;
                            var_23 = (!var_7);
                        }
                        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            arr_32 [i_9] [i_7] [i_2] [i_2] [i_1] [i_0] = -var_10;
                            arr_33 [i_2] [i_1] [i_0] = 100;
                        }
                        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            var_24 = (arr_8 [i_0]);
                            arr_36 [i_0] [i_2] [i_0] = -0;
                            var_25 = (min(var_25, (-9223372036854775807 - 1)));
                        }
                        for (int i_11 = 3; i_11 < 11;i_11 += 1)
                        {
                            arr_39 [i_0] [i_1] = 1;
                            var_26 = arr_0 [i_0];
                            var_27 = (min(var_27, 94));
                        }
                        var_28 = (max(var_28, ((((((arr_14 [i_1]) ? var_2 : 150)) & (arr_15 [i_7 - 2] [i_1 + 1] [i_1] [i_1] [i_1]))))));
                        var_29 |= (arr_28 [i_1 - 3] [i_1 - 3] [i_7 - 2]);
                    }
                }
            }
        }
        arr_40 [i_0] |= ((((((((arr_8 [i_0]) + 2147483647)) << (((-126 + 130) - 4))))) + var_2));
    }
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        arr_44 [i_12] [i_12] = 43673;
        var_30 ^= ((!(arr_42 [i_12] [i_12])));
    }
    for (int i_13 = 2; i_13 < 10;i_13 += 1)
    {
        var_31 = (((arr_46 [i_13] [i_13]) ? (!1) : (((~47) ? (arr_15 [i_13] [i_13 + 2] [i_13] [i_13] [i_13]) : (~var_9)))));
        arr_48 [i_13] [i_13] = ((!((((!4291744119) % (arr_4 [3] [i_13]))))));
    }
    var_32 = ((~((var_10 << (((~var_13) + 3699177028064483089))))));
    var_33 = var_6;
    var_34 = var_11;
    #pragma endscop
}
