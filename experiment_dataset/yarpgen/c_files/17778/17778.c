/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((~(min(253, 6419912225463853968)))));
    var_14 = (max(var_14, ((((((var_0 << (((min((-2147483647 - 1), var_10)) - 11312682581576371580))))) ? ((var_4 ? ((var_7 ? 6419912225463853968 : var_10)) : var_0)) : 64)))));
    var_15 = var_11;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (arr_4 [i_0] [i_1])));
                    arr_7 [i_0] [i_1] [1] [i_1] = var_8;
                }
            }
        }

        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            var_17 = (min(var_17, ((min((arr_9 [i_0] [i_3]), 439369342)))));

            for (int i_4 = 3; i_4 < 16;i_4 += 1)
            {
                var_18 = (max(((var_5 ? ((var_5 << (var_7 + 1874360416))) : (arr_6 [i_3 - 2] [i_4 - 3]))), ((((var_10 / 6419912225463853968) ? (((arr_11 [i_0] [i_3] [i_4]) ? (arr_2 [i_3 - 2]) : var_3)) : (((var_7 ? var_7 : var_4))))))));
                var_19 = ((267699683 ? (((((((arr_5 [i_3] [i_3 - 2]) ? 7 : (arr_2 [i_4])))) ? ((1006632960 ? (arr_2 [i_4 + 1]) : (arr_3 [i_0] [i_4]))) : (((max(var_9, 19913))))))) : (((arr_6 [i_3 + 1] [i_3 - 2]) ? var_0 : (arr_6 [i_0] [i_0])))));
                arr_12 [i_0] [i_3] [i_4] = ((((((min((arr_8 [i_0]), var_2))) ? (arr_0 [i_0]) : ((4611686018427386880 ? 1 : var_6)))) > (((max(1, var_7))))));
                arr_13 [i_4] = (max(2147483617, (((11463203763211145779 | var_0) / (arr_8 [i_4])))));

                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    arr_17 [i_0] [i_4] [i_4] = max(((((arr_9 [i_3 - 2] [i_5 + 1]) < (((arr_9 [i_0] [i_0]) ? var_8 : var_3))))), (((!var_8) & (((arr_5 [2] [2]) - var_5)))));
                    arr_18 [i_5] = ((((((arr_10 [i_4 + 1] [i_3] [i_4] [i_3 - 2]) ? (arr_10 [i_4 - 1] [i_4] [i_4] [i_3 - 1]) : var_3))) | var_0));
                }
                for (int i_6 = 2; i_6 < 15;i_6 += 1)
                {
                    arr_21 [i_0] [i_4] [i_4] [i_4] = ((((((var_8 == (arr_4 [i_0] [i_0]))))) ? (min(((max(var_2, (arr_9 [i_3] [i_3])))), (arr_11 [i_0] [i_0] [i_0]))) : (((((var_8 ? var_10 : var_4)))))));
                    var_20 = 8192;
                    arr_22 [i_0] [i_3 - 1] [i_4] [i_3] [i_0] [i_3] = (((((((!(arr_2 [i_6])))) >> (((arr_10 [5] [7] [i_4 - 3] [i_6]) - 115))))) ? (max(var_1, var_6)) : ((((!((max(var_6, var_6))))))));
                }
            }
            arr_23 [i_0] [i_3 + 1] [i_0] = (((arr_6 [i_3 - 1] [i_3 - 1]) < (min((arr_8 [12]), (12026831848245697647 & 1958)))));
        }

        /* vectorizable */
        for (int i_7 = 1; i_7 < 15;i_7 += 1)
        {

            for (int i_8 = 3; i_8 < 15;i_8 += 1)
            {
                var_21 = (12026831848245697647 & var_9);
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 16;i_10 += 1)
                    {
                        {
                            arr_34 [i_10] [i_7] [i_8] [i_7] [i_0] = ((arr_11 [i_9 + 2] [1] [i_0]) ? (arr_6 [i_0] [i_9]) : (arr_11 [i_0] [5] [i_0]));
                            var_22 = (arr_8 [i_8 - 1]);
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((var_11 ? (((arr_29 [i_7] [i_10]) ? (arr_0 [i_0]) : var_9)) : (~-8473)));
                            arr_36 [i_7] [9] [i_8 - 1] [i_9] = (arr_30 [i_0] [i_7] [5] [i_9 + 1] [i_10]);
                            var_23 = (max(var_23, (arr_30 [i_10 - 1] [i_0] [2] [i_0] [i_8 - 2])));
                        }
                    }
                }
                arr_37 [i_7] [i_7] [i_8] [i_0] = ((var_4 << (((~var_12) - 7604567851938409931))));
            }
            arr_38 [i_7] [i_7] = -2147483617;
            var_24 += ((12026831848245697647 ? (arr_4 [i_7 - 1] [i_7 + 1]) : (arr_8 [i_7 + 2])));
        }
        var_25 += arr_31 [i_0] [i_0] [i_0] [i_0];
    }
    #pragma endscop
}
