/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;

    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        var_20 -= max((((arr_1 [i_0] [i_0 - 1]) >= (arr_1 [7] [i_0 + 4]))), ((((45299 ? 7825998462822694814 : 242)) < 1879048192)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 -= (1124807569 || 14228764643865775490);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_22 = (((arr_4 [i_0] [i_0]) && ((!(!14)))));
                                arr_14 [i_0] [i_0] [i_2] [i_2] [i_3 - 3] [i_3] [i_4] = (arr_7 [i_0 + 3] [i_1 - 1] [i_0]);
                                var_23 = (min(var_23, ((max(-82, (!var_9))))));
                                arr_15 [i_0] [0] [i_2] [i_2] [i_3 - 2] [8] &= (((-(arr_13 [8] [i_0] [0] [i_0] [8]))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 8;i_6 += 1)
            {
                {
                    var_24 = (((max(var_0, (arr_17 [i_0] [i_5] [i_6 + 1])))));
                    arr_22 [i_0] = 242;
                    var_25 -= ((((min((min(14228764643865775492, 1)), 1))) ? ((((((-(arr_16 [i_0 - 1] [i_5] [i_6])))) ? (arr_1 [i_0 + 4] [i_0 - 1]) : (min(1, (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [1])))))) : (((arr_20 [i_6 + 2] [i_0 + 1]) ? (arr_20 [i_6 - 2] [i_0 + 3]) : (arr_20 [i_6 + 2] [i_0 - 1])))));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_26 = (4294967264 <= 14228764643865775488);
                        var_27 ^= (((arr_8 [i_5] [i_6] [i_5] [i_5]) ? (((arr_17 [i_0] [i_6] [i_6]) ? var_13 : (arr_9 [i_5] [i_5] [i_6] [8]))) : var_7));
                        var_28 = (min(var_28, var_17));
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        var_29 = 277076930199552;
                        var_30 = (((arr_26 [i_0 + 2] [i_6 - 1]) ? (var_12 != var_14) : ((277076930199552 ? 2080374784 : var_16))));

                        for (int i_9 = 2; i_9 < 9;i_9 += 1)
                        {
                            var_31 = var_5;
                            var_32 = (max(var_32, ((!(arr_13 [i_5] [i_8] [i_6] [8] [i_5])))));
                            var_33 += (((1 && -6405630639929716694) % (arr_7 [i_5] [i_8] [i_5])));
                            arr_29 [i_0 + 4] [i_0] [i_6] [i_8 + 1] [i_9] = (((arr_28 [i_8] [i_8 + 2] [i_8 + 1] [7] [i_8] [i_8]) <= (arr_28 [i_8 - 1] [i_8 - 1] [i_8 + 2] [4] [i_8] [8])));
                        }
                    }
                    for (int i_10 = 1; i_10 < 6;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                        {
                            arr_35 [i_5] [i_0] [4] [i_10 + 4] [4] = ((((((var_7 ? var_0 : var_18)))) - var_13));
                            var_34 -= (arr_25 [0] [i_5] [i_5] [i_0 + 3]);
                            arr_36 [i_10 + 4] [i_0] [5] = (arr_6 [i_0] [i_10 + 3] [i_0]);
                        }
                        for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
                        {
                            arr_39 [i_0] [i_5] [i_6] [i_10] [i_12] = 2080374785;
                            var_35 = (((((var_0 ? (((arr_33 [i_10 + 2] [i_6 - 2] [7] [i_0] [7]) ? var_13 : var_7)) : (var_5 * -1)))) ? ((min((arr_4 [i_0] [i_0]), (arr_23 [i_6 + 2] [i_0] [i_0] [i_0] [i_0 - 1])))) : ((var_5 ? (!var_0) : 1))));
                            var_36 *= (((((arr_16 [i_0 + 1] [i_5] [i_10 + 4]) ^ var_10)) <= 168));
                        }

                        /* vectorizable */
                        for (int i_13 = 2; i_13 < 8;i_13 += 1)
                        {
                            var_37 = ((~(arr_40 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_10 + 1] [i_13 - 2])));
                            arr_42 [i_0 + 1] [i_5] [i_0] [i_6 - 2] [i_6 - 2] [i_13] [i_13] = var_17;
                        }
                        for (int i_14 = 0; i_14 < 10;i_14 += 1)
                        {
                            var_38 ^= (((arr_11 [i_14] [i_14] [i_6 - 1] [i_10 + 1] [i_6 - 1] [9] [5]) ? (((!(arr_30 [i_14] [6] [i_6] [i_0])))) : ((var_14 ? var_18 : (arr_41 [i_10 + 1] [i_14] [8] [i_14] [i_6])))));
                            var_39 *= (((~4294967264) * (~3179784977)));
                            var_40 = 57;
                        }
                    }
                    var_41 ^= (max(var_4, (((~14228764643865775490) ? (arr_20 [i_0 + 4] [i_6 - 3]) : ((((arr_37 [i_6 - 1] [i_5] [i_5] [i_0] [i_0]) ? var_16 : var_0)))))));
                }
            }
        }
    }
    var_42 = (~var_9);
    var_43 = ((242 ? var_2 : ((~(~var_13)))));
    #pragma endscop
}
