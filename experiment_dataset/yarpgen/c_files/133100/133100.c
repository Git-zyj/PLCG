/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_14 ? var_1 : 650844563))) ? var_4 : var_11);
    var_21 -= var_15;

    for (int i_0 = 4; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = 24409;
        var_22 = ((((var_2 ? 14079 : -24404)) * (arr_1 [12] [i_0 + 2])));
        var_23 -= var_2;
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_24 = ((arr_0 [i_1 + 1] [i_1]) ? (arr_1 [i_1 - 2] [i_1 - 1]) : (arr_0 [i_1 - 2] [i_1]));
        var_25 *= (min(((((3083318952 ? var_2 : 16170)) * (var_8 > var_17))), ((min((!var_4), 39261)))));
        var_26 = (((~(arr_5 [i_1]))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                {
                    var_27 = (max((arr_0 [i_3 - 1] [i_2]), (16147 << 0)));
                    var_28 = ((49366 ? ((max(var_2, 51451))) : 16256));
                    var_29 ^= ((1836515641 ? 16693 : 49393));
                    var_30 = var_14;
                    var_31 -= var_18;
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {
            var_32 = ((((arr_6 [3] [3]) & var_6)));

            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                var_33 = ((16140 ^ ((570320068 ? (arr_15 [i_6]) : (arr_0 [i_5] [i_4])))));
                var_34 = (((!var_19) == (((!(arr_7 [i_6 + 1] [i_4]))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 18;i_8 += 1)
                    {
                        {
                            arr_24 [i_4] [12] [i_6] [i_7] [i_8 - 2] = (arr_13 [i_8]);
                            var_35 = arr_21 [i_6] [i_6 + 1] [i_6 + 1] [i_6] [i_6];
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {

                    for (int i_11 = 2; i_11 < 19;i_11 += 1)
                    {
                        arr_33 [3] [i_9] [i_5] [i_5] [i_5] [i_5] [i_5] = (((((55753 ? var_16 : (arr_30 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_9] [i_11])))) ? (var_18 == 2374415957) : var_8));
                        var_36 = ((var_5 && (arr_28 [i_11 - 1] [17] [i_11 + 1] [i_11 - 1] [i_11 + 1])));
                    }
                    var_37 = ((arr_22 [i_4] [i_5] [i_5] [10] [i_9] [i_9] [10]) ? (arr_22 [i_10] [i_9] [i_9] [i_10] [i_4] [i_5] [i_4]) : (arr_22 [3] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]));
                    var_38 = (((arr_19 [i_4] [i_4] [i_9] [i_9]) ? (arr_31 [0] [i_5] [i_9] [i_9] [i_10]) : var_16));
                }
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    var_39 = (~var_18);
                    var_40 -= arr_29 [i_4] [7] [i_9] [14];
                    arr_36 [i_4] [12] [i_9] [17] = (((~262144) | var_7));

                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        arr_39 [i_13] [i_9] [5] [i_9] [i_9] [i_4] = (arr_1 [i_5] [i_13]);
                        arr_40 [i_9] [i_5] [i_9] [18] [i_13] = (~4294967293);
                        var_41 -= (((arr_25 [i_4]) ? (arr_21 [i_13] [i_5] [i_9] [i_5] [i_4]) : (arr_25 [i_4])));
                        arr_41 [i_9] [i_12] [15] [i_9] = (3102386210 == 3532890538);
                        var_42 *= ((var_13 ? var_6 : (arr_27 [10] [12] [12])));
                    }
                }
                arr_42 [i_4] [i_9] [i_9] = (4294967295 ? (arr_35 [0] [i_5] [9]) : (var_1 | 1861414167));
                var_43 -= (var_19 ? (arr_29 [i_9] [i_9] [i_9] [i_9]) : var_7);
            }
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                var_44 ^= ((!(arr_8 [0])));
                arr_45 [i_4] [i_4] [i_4] = (arr_1 [i_14] [i_5]);
            }
            var_45 &= ((arr_30 [0] [12] [i_5] [i_4] [i_5]) >> (((var_6 & var_13) - 2277)));
        }
        for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
        {
            var_46 ^= (((((1861414167 ? 25816 : 4294967295))) ? (arr_20 [i_15] [i_15] [i_15] [15]) : var_11));
            var_47 = (max(var_47, ((((arr_0 [i_15] [i_4]) | (arr_0 [i_4] [4]))))));
        }
        arr_48 [i_4] = ((arr_15 [0]) / var_7);
    }
    #pragma endscop
}
