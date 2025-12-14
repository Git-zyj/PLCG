/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((32767 ? var_5 : ((((min(32, 2037040410))) ? ((32765 ? var_9 : 0)) : ((0 ? 1 : var_9))))));
    var_11 = -455039213;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_12 = (max(var_12, (min(58, (((-536132297 + 2147483647) >> (-197 + 198)))))));
            var_13 &= ((2147483642 + ((32767 ? var_7 : (var_4 ^ 1)))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 20;i_2 += 1) /* same iter space */
        {
            arr_8 [i_2] [i_0] [i_2] = (((arr_0 [i_2 - 1] [i_2 + 1]) ? (arr_0 [14] [i_2 - 2]) : (arr_0 [i_2 - 1] [i_2 - 1])));
            arr_9 [i_2] = ((1040187392 / (2147483642 / 25)));
        }
        for (int i_3 = 2; i_3 < 20;i_3 += 1) /* same iter space */
        {
            var_14 = (((((((min(576460752303423487, var_6))) ? (((((arr_10 [i_0]) && 1040187392)))) : 67495824))) ? var_4 : (((1 ? 1 : -31)))));
            arr_12 [i_3] = (((min(var_6, 32640))) * ((((~(arr_6 [i_0] [i_0]))) * (67108863 != 1))));

            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_15 *= (min(9401, (arr_18 [4] [i_3 + 1] [19] [i_3] [i_3])));
                            arr_22 [i_0] [i_0] [i_3] [i_4] [i_0] [i_0] [i_5] = (((0 | -1073) ? (((max((arr_21 [i_5] [i_0] [i_6] [i_5] [i_6] [i_4 - 2] [i_0]), 28203)))) : (((arr_21 [i_5] [20] [1] [i_5 - 1] [i_3] [i_4 + 1] [10]) ? -10699 : 2641280231))));
                            arr_23 [i_0] [i_4] [i_4] &= -1219774383;
                            arr_24 [i_6] [i_6] [i_5] [i_5] [i_6] [i_4] = (((((min((var_1 && -10688), (arr_15 [i_5] [1] [1]))))) ^ (min((1 - var_3), ((min((arr_21 [i_5] [i_3 + 1] [i_3 + 1] [12] [i_6] [i_6] [i_0]), 1)))))));
                        }
                    }
                }
                var_16 |= 0;
            }
        }
        for (int i_7 = 2; i_7 < 20;i_7 += 1) /* same iter space */
        {
            var_17 *= ((((min(16, (arr_26 [i_7 - 1])))) ? (((-14292 + 17275766154703682831) / (((max(1, -3420)))))) : -7688));
            var_18 = var_0;
            arr_29 [i_7] [i_7] = var_2;
        }
        var_19 = ((((((!1) ? (0 && 1) : 4294967295))) ? ((19 / (arr_27 [i_0] [i_0] [i_0]))) : ((min(var_1, (arr_3 [i_0] [i_0]))))));
        arr_30 [i_0] = 1;
        arr_31 [i_0] [i_0] = ((((max(var_0, (arr_15 [i_0] [i_0] [i_0])))) ? (((arr_16 [i_0] [i_0] [i_0]) ? 29787 : 6)) : (((-1 ? (arr_15 [i_0] [i_0] [i_0]) : 131)))));
    }
    #pragma endscop
}
