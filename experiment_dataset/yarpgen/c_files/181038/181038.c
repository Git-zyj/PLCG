/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_15 = ((((arr_1 [i_2] [i_0 - 3]) ? (arr_1 [i_0 + 1] [i_1 + 2]) : 63)));
                    arr_6 [i_0] = (arr_5 [i_0] [i_0 + 2] [i_0]);
                    var_16 = (0 || 9223372036854775807);
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_17 = (~((((arr_1 [i_0] [i_0]) ? (arr_8 [i_0 + 2] [i_0] [i_3]) : 12619831512798601705))));
                    var_18 = (max(-var_4, (arr_1 [i_0 + 1] [i_0])));
                    arr_9 [i_0] [i_1 - 1] [i_1 - 1] &= 63;
                }
                for (int i_4 = 4; i_4 < 9;i_4 += 1)
                {
                    var_19 = (arr_5 [i_0 + 1] [i_1] [i_1 + 1]);
                    var_20 = ((var_2 / (arr_8 [i_4 + 1] [i_1 + 3] [i_0 - 1])));
                }
                var_21 = (max(var_21, ((((((arr_4 [i_0 - 4] [i_0 - 2] [i_0 + 1] [i_0 - 1]) ? -63 : ((-(arr_7 [i_0 - 2] [i_0]))))) >= -14720)))));
            }
        }
    }
    var_22 |= (((-var_14 ? var_12 : ((7424528531909211352 ? var_5 : 1917837750)))));

    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    var_23 ^= (arr_13 [i_5] [i_5]);
                    var_24 = (min((!12619831512798601726), var_12));
                }
            }
        }
        var_25 = (max(var_25, (arr_13 [i_5] [i_5])));
        var_26 = (min((((!(arr_19 [0] [i_5])))), ((62 ? -7424528531909211363 : 52))));
        arr_20 [i_5] [i_5] = (min((123 < 7424528531909211352), (((-127 - 1) ? -8437437516091619186 : 6822587715529681136))));
    }
    for (int i_8 = 1; i_8 < 16;i_8 += 1)
    {
        var_27 += (arr_14 [i_8] [i_8 - 1]);
        var_28 = (min(123, -14719));
        var_29 = arr_22 [i_8] [i_8];
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 20;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            var_30 = (((((-(arr_17 [i_9] [i_9] [i_10])))) ? 3169179053 : 6154139058561289757));
            arr_28 [i_9] [i_9 + 4] [i_9] = (((arr_18 [i_9 + 2] [i_9 + 2]) ? (arr_18 [i_9 + 2] [i_9 + 2]) : (arr_18 [i_9 + 2] [i_9 + 2])));
            var_31 = (var_9 ? (arr_16 [i_9 + 1]) : (arr_16 [i_9 - 1]));
        }
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            var_32 = ((!(((arr_29 [i_9] [i_9]) && 38972))));
            arr_33 [i_9] = (((((~(arr_15 [i_9] [i_11])))) ? (arr_30 [i_9] [i_9]) : 14719));
        }
        var_33 = ((~(arr_23 [i_9 - 1])));

        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            var_34 = (max(var_34, var_10));
            var_35 = (((arr_32 [i_9 + 2]) - (arr_32 [i_9 + 2])));
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        var_36 &= (-(arr_38 [i_13] [i_13]));
        var_37 -= -1125788257;
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 22;i_16 += 1)
                {
                    {
                        var_38 = -80;
                        var_39 ^= ((-63 ? (((-32767 - 1) & (arr_38 [i_13] [i_14]))) : -1));

                        for (int i_17 = 0; i_17 < 25;i_17 += 1)
                        {
                            var_40 = (~var_13);
                            var_41 = arr_46 [i_16 + 1] [i_16 + 1] [i_16 + 2] [i_16 + 2];
                            var_42 = 9223372036854775807;
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 25;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 25;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 25;i_20 += 1)
                {
                    {
                        var_43 = (arr_43 [i_20] [i_19] [i_13]);
                        var_44 = ((31 || (arr_57 [i_13] [i_20])));
                        var_45 = var_7;
                    }
                }
            }
        }
    }
    var_46 = var_13;
    #pragma endscop
}
