/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 -= (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 = (max(((((arr_5 [i_2] [i_1 + 1]) <= (arr_1 [i_0])))), (min((arr_3 [i_1 - 2]), (arr_3 [i_1 - 1])))));
                    arr_7 [i_0] [i_0] [i_0] = arr_5 [i_0] [i_0];
                    arr_8 [i_0] [i_0] [i_1] [i_0] = (min(((min((arr_3 [i_0]), (arr_6 [i_2] [i_2] [i_0] [i_2])))), (arr_0 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 &= ((((arr_14 [i_0] [i_0] [i_2] [i_3 - 2] [i_3 + 1]) ? var_11 : (arr_14 [i_3] [i_3 + 1] [i_2] [i_3 - 1] [i_3 + 1]))));
                                var_18 = (min(var_18, ((((((((((arr_5 [i_0] [i_0]) ? (arr_11 [i_0] [i_0] [i_2] [i_0]) : (arr_6 [i_2] [i_1] [i_4] [i_3 - 2])))) ? var_9 : (arr_6 [i_1] [i_1 + 1] [i_1 - 1] [i_3 - 1])))) ? var_5 : (max((((arr_11 [i_1] [i_2] [i_3 + 1] [i_4]) ? var_10 : (arr_3 [i_0]))), 8064)))))));
                                arr_16 [i_3] [i_3] [i_3 - 1] [i_3 - 2] [i_1] |= (arr_14 [i_2] [i_1] [i_1] [i_3] [i_4]);
                            }
                        }
                    }
                    var_19 = 16651;
                }
            }
        }
    }
    for (int i_5 = 3; i_5 < 19;i_5 += 1)
    {
        var_20 = (arr_17 [i_5]);
        var_21 -= ((((max((arr_17 [i_5 + 1]), (arr_17 [i_5 - 1])))) ? (arr_17 [i_5 + 2]) : (arr_17 [i_5 - 1])));
        var_22 = (arr_18 [i_5] [i_5 - 3]);

        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
        {
            var_23 = ((((arr_19 [i_5 - 2]) || (arr_19 [i_5 - 2]))));
            arr_23 [i_5] [i_5] &= ((1 ? ((var_2 ? var_10 : 3611237746)) : (arr_19 [i_5])));
        }
        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
        {
            var_24 = (min(var_24, (arr_25 [i_5] [i_5])));
            var_25 = ((var_2 ? (((1 * (arr_18 [i_5 + 2] [i_7])))) : (max((((arr_22 [i_5] [i_7] [i_5 - 2]) & var_12)), ((((arr_25 [i_7] [i_5 - 1]) % var_3)))))));
            var_26 = (~-6496448078687456747);
            arr_26 [i_7] = (max((arr_25 [i_5] [i_5]), ((8601443808313358335 ? var_13 : ((var_9 ? 3611237746 : var_9))))));
            var_27 = (min(var_27, 11789231275381658003));
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
        {
            arr_30 [i_5] [i_5] [i_8] = (arr_19 [i_5 - 1]);
            var_28 ^= (arr_28 [i_5] [i_5 + 2]);
            arr_31 [i_5] = (max((max(-6496448078687456754, (arr_18 [i_5 - 3] [i_5 + 1]))), ((((arr_18 [i_5 + 2] [i_5 + 1]) >> (var_3 - 111))))));
        }
    }
    var_29 = (min(var_29, ((((~var_0) | var_2)))));
    #pragma endscop
}
