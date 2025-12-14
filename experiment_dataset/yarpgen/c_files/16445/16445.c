/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((((~var_11) ^ ((min(var_3, var_0))))))));
    var_16 = var_8;
    var_17 = (max(var_17, var_7));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = (((arr_0 [i_0]) && 14970));
        var_19 &= ((var_13 > (max(26654, var_4))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        var_20 = ((((((26672 ? (arr_3 [3]) : 18446744073709551615))) ? (arr_7 [i_1] [i_2 + 1]) : -26650)) & (((max((arr_2 [12]), (11041303035423648802 || var_14))))));
                        arr_9 [i_0] = ((min(76, (arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_21 = (((arr_8 [i_2 + 1] [i_2 - 1] [i_2] [9] [i_2 - 1]) ? (arr_8 [i_2 + 1] [i_2 + 1] [15] [7] [i_2 + 1]) : (((((arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1]) + 2147483647)) << (((((arr_8 [i_2 - 1] [i_2 - 1] [15] [i_2 - 1] [i_2 - 1]) + 19754)) - 21))))));
                        arr_12 [i_4] [i_4] [8] = max((arr_3 [i_0]), var_7);
                        var_22 = (min(var_22, (((1 ? 1 : 16383)))));
                    }

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_23 |= (max((((var_11 >= (arr_8 [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 1] [1])))), (arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1] [0] [1])));
                        var_24 |= (((~(arr_0 [i_2 - 1]))));
                        var_25 = (max((((18425520228656493029 ? var_5 : (arr_14 [i_0] [i_0] [17] [i_5] [14] [17])))), ((var_7 ? 134914054096292481 : var_13))));
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            arr_22 [i_6] [1] = (((((arr_21 [i_0] [i_0] [i_6] [i_6] [i_2 - 1]) * var_8)) + ((((arr_21 [i_0] [i_0] [i_0] [i_6] [i_2 + 1]) * (arr_21 [18] [2] [i_2] [0] [i_2 - 1]))))));
                            var_26 = ((((min((arr_19 [i_2 - 1] [i_2 + 1] [i_6] [i_2 - 1] [19]), 4))) ? (max((arr_5 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_1]), (arr_21 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [8]))) : (arr_5 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_1])));
                            var_27 = ((((((arr_10 [i_0] [i_2 - 1] [i_6] [i_6] [i_6]) ? (arr_10 [i_0] [i_2 - 1] [i_6] [i_6] [0]) : (arr_8 [14] [i_1] [14] [0] [i_2 - 1])))) > (((((22411 ? 1 : 1812563689))) ? (max(var_7, 6710826712022134022)) : 1))));
                        }
                        arr_23 [i_6] = arr_3 [17];
                        var_28 = (min(var_28, (arr_1 [i_2 + 1])));
                    }
                    arr_24 [i_0] [12] = (min((((arr_2 [i_1]) % (((arr_5 [12] [i_1] [i_1] [i_1]) & 1006388234)))), (arr_14 [i_2 + 1] [i_2 + 1] [19] [i_2 + 1] [i_2 + 1] [i_2 - 1])));
                    var_29 = ((((max(var_10, (arr_13 [i_0] [i_0] [i_2 + 1] [12] [i_0] [10])))) ? (((min(1, 1)))) : (arr_18 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [18])));
                }
            }
        }
    }
    var_30 = (0 / var_2);
    #pragma endscop
}
