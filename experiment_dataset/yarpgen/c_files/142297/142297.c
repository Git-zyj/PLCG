/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_1] [7] [i_1] [i_0] |= ((1780593569 || (!var_5)));
                    var_18 = ((-(arr_6 [i_2 - 2] [i_2] [i_2] [i_2])));
                }
            }
        }
        var_19 = (min(var_19, ((((((((3844690182 ? (arr_2 [i_0]) : (arr_7 [i_0] [i_0] [14] [i_0]))) + (min((arr_4 [i_0] [i_0] [i_0] [1]), -126))))) ? ((-(((arr_0 [i_0]) - 1)))) : -1110006574)))));
        var_20 = ((min(var_8, (arr_1 [i_0]))) / ((125 * (min(3202020669, (arr_0 [i_0]))))));
        var_21 = (max(var_21, (((~((((32767 ? (arr_6 [i_0] [1] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_0] [i_0]))) ^ (((arr_2 [i_0]) >> (((arr_3 [i_0] [0] [i_0]) + 133)))))))))));

        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_16 [1] [i_5] [i_5] [i_0] = ((-((var_15 ? ((((arr_12 [i_0] [i_0] [i_0] [i_0]) ? var_5 : var_6))) : var_9))));
                        var_22 = (((min(var_0, (arr_12 [i_0] [i_0] [i_3 + 3] [i_5 - 1]))) | (1092946626 ^ 14)));
                    }
                }
            }
            arr_17 [1] = (min((3202020649 / 3202020681), -3718));
            var_23 = 1092946614;
            var_24 = ((((((((arr_0 [i_0]) | (arr_6 [i_0] [i_0] [i_0] [i_0])))) & (max((arr_9 [i_3]), 3202020669)))) ^ (((-1 & (arr_1 [i_3 + 2]))))));
        }
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            var_25 = ((18446744073709551615 & (arr_14 [i_0])));
            arr_21 [i_6] = min(((945371408 ? 0 : 2520228022)), 3202020681);
        }
    }
    for (int i_7 = 0; i_7 < 0;i_7 += 1)
    {
        var_26 = (min(var_26, ((((min(2520228022, (arr_14 [i_7 + 1]))) | (((min((arr_14 [i_7 + 1]), (arr_14 [i_7 + 1]))))))))));
        var_27 = (max((((((max(var_10, 3202020669))) * (max(var_4, var_9))))), (((min((arr_4 [7] [i_7] [i_7] [i_7]), -112)) * ((((arr_19 [i_7 + 1] [i_7 + 1]) / (arr_10 [i_7] [i_7 + 1] [i_7]))))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    arr_30 [i_7 + 1] [i_7 + 1] [i_7 + 1] = ((~((1 ? (var_4 | var_1) : (((arr_9 [i_8]) & 9070112636660242348))))));
                    arr_31 [i_7] [i_7] [i_8] [i_9] = (max((max(2520228022, (max((arr_5 [i_7] [i_8]), var_5)))), (max((max(-1110006574, 3202020669)), -0))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    {
                        var_28 = -1;
                        var_29 = (min(1530255871, (max(2816, (arr_25 [i_7] [i_11] [i_12])))));
                        arr_38 [i_7] [i_7] [i_7] = (max(((1 & (max(2987062475, 1530255852)))), (~var_0)));
                        var_30 = (max(var_30, ((max((((var_12 | 2520228022) | (((0 ? 109 : var_15))))), (2987062475 ^ var_10))))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 2; i_13 < 8;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            {
                var_31 = var_14;
                arr_46 [i_14] [i_14] [i_14] = ((~((var_9 ^ (((max(var_4, var_4))))))));
            }
        }
    }
    #pragma endscop
}
