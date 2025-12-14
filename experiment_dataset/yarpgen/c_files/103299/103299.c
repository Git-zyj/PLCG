/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0 + 1] [i_0 + 1] = (((((((((arr_1 [i_0] [i_0]) ? var_17 : (arr_1 [i_0 + 1] [i_0 + 1])))) ? 0 : (((!(arr_0 [i_0 + 2] [i_0]))))))) ? var_8 : (((arr_0 [i_0 + 1] [i_0 + 1]) ? (arr_0 [i_0 - 2] [i_0 + 2]) : (arr_0 [i_0 + 1] [i_0])))));
        var_19 = (((!(arr_1 [i_0 + 2] [i_0 + 2]))) ? (min((min(7, -6727709556737250168)), (!-9223372036854775789))) : var_11);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_20 = 8272119514280161629;
                        var_21 = (min((((!(((9223372036854775799 ? var_4 : (arr_0 [i_2] [i_1]))))))), -1008052241));
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {
        var_22 = (-(((((-(arr_10 [i_4])))) ? (arr_10 [i_4]) : (((arr_5 [i_4 + 1] [i_4 + 1] [i_4]) ? -1 : 200209811)))));
        var_23 = 614875417973705604;
        var_24 = ((~((~(~var_14)))));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_25 = (arr_1 [i_5] [i_5]);

        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            var_26 = (min(((((((arr_15 [i_5]) ? (arr_5 [i_5] [i_5] [i_6 + 2]) : 11963526730139830626))) ? ((-1645089662757604115 ? 225 : 12)) : (arr_4 [i_6 + 2] [i_6 + 1] [i_6 + 2]))), (arr_9 [i_6 + 2])));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_27 = 614875417973705597;
                            arr_25 [i_5] [i_6] [i_6] [i_8] [i_9] = var_10;
                            var_28 = (((arr_9 [i_8]) ? ((131071 ? -6832995518493992532 : -6727709556737250171)) : (((-(arr_15 [i_7]))))));
                            var_29 = var_6;
                        }
                    }
                }
            }
            var_30 = ((2746841955706710209 ? 14680064 : 239));
        }
        var_31 = (arr_23 [i_5] [i_5] [i_5] [i_5] [i_5]);
        var_32 = -var_13;
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    {
                        var_33 |= ((max(((-(arr_13 [i_5] [i_5]))), (((-2377799284415682851 ? var_15 : 157))))));
                        arr_34 [i_10] [i_10] = var_14;
                        arr_35 [i_12] [i_10] [i_10] [i_5] = var_10;
                        var_34 = 137;
                        arr_36 [i_5] [i_5] [i_11] [i_10] [i_5] = var_8;
                    }
                }
            }
        }
    }
    var_35 = (((((255 ? ((var_15 ? var_6 : 1)) : -var_7))) ? (-2147483647 - 1) : (~var_3)));
    var_36 *= 1;
    var_37 = ((max(((((-9223372036854775807 - 1) ? 3 : 148))), var_11)));
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                {
                    var_38 = var_15;
                    arr_44 [i_15] = (arr_43 [i_13] [i_14] [i_15]);
                }
            }
        }
    }
    #pragma endscop
}
