/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_4 | var_0);

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_8;
        arr_3 [i_0] [1] = var_8;
        arr_4 [i_0] = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_11 [i_1] [i_0] = ((((((var_6 ? (arr_10 [i_1] [i_1 + 1] [i_1 + 1]) : var_1)) + 9223372036854775807)) << (((min(32767, 8584)) - 8584))));
                    arr_12 [i_0] [i_1] [i_0] [i_0] = (min(((var_9 ? (((var_6 ? var_8 : (arr_6 [i_0])))) : (arr_10 [i_0 - 1] [1] [i_0 - 1]))), (arr_9 [i_0] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 += var_4;
                                arr_17 [0] [i_1] [i_2] [i_0] [i_4] [i_2] [i_0] = (((min(var_8, (arr_6 [i_0 + 1])))));
                                arr_18 [i_0] [i_1] [i_0] [i_1] = (((((var_6 > ((var_2 ? (arr_16 [i_0] [i_1] [0] [i_0] [0]) : (arr_13 [i_0] [i_0] [11] [i_0] [i_0] [i_0])))))) << (((min((max(var_2, var_0)), (((var_5 << (((arr_15 [i_0] [i_1] [i_2]) - 7318))))))) - 189734905))));
                            }
                        }
                    }
                    var_13 = (((((((0 ? var_9 : (arr_9 [i_0] [i_0] [i_0 - 1])))) ? ((24779 ? 137438953471 : (arr_5 [i_0] [i_1] [8]))) : ((103 ? 32767 : 18446743936270598126)))) > (arr_0 [i_1])));
                }
            }
        }
        var_14 = (((arr_7 [14] [i_0] [i_0 - 2]) ? ((min(var_8, var_9))) : (((!((min(1415785353, -125))))))));
    }
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        var_15 ^= (((min(18446743936270598142, (8832347983259406459 & 39697))) == ((((!((min(var_10, var_8)))))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    var_16 = ((((~(((arr_23 [i_5 - 2]) ? (arr_20 [i_5] [i_6]) : (arr_28 [i_5] [i_6] [i_7] [i_5])))))) ? (((((arr_21 [i_5 - 1]) != (arr_21 [i_5 - 2]))))) : var_3);
                    arr_29 [i_7] [20] [17] [i_7] = min(-7848, (min((min((arr_21 [i_5]), 17457494766164493858)), (((25838 == (arr_27 [i_5] [i_7] [i_7])))))));
                    var_17 |= (((arr_25 [i_5] [i_6]) ? ((var_1 ^ (var_3 | var_8))) : (arr_26 [i_5] [i_6])));
                }
            }
        }
        arr_30 [i_5] = (max((((arr_22 [i_5]) ? ((min(var_7, (arr_21 [i_5])))) : var_1)), (arr_19 [i_5])));
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 10;i_10 += 1)
            {
                {
                    var_18 |= (((var_1 / -1) != 2048790737));
                    var_19 = (arr_32 [i_8]);
                    var_20 = (((((arr_37 [i_8] [i_8] [i_10]) ? var_1 : (arr_13 [i_8] [8] [i_10] [i_10 - 1] [i_9] [i_9]))) | (((var_6 & (arr_13 [12] [i_9] [i_10] [i_10 - 1] [i_8] [i_8]))))));
                    arr_39 [i_9] [i_9] = var_5;
                }
            }
        }
    }
    #pragma endscop
}
