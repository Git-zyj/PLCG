/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [20] = max((min((arr_2 [i_1]), ((max(var_3, var_2))))), 2);
            arr_6 [1] [i_0] = var_3;
        }
        arr_7 [10] [i_0] |= var_3;
        arr_8 [12] |= max(((((max(var_11, var_13))) ? ((254 | (arr_1 [i_0] [1]))) : ((var_7 ? var_3 : var_2)))), ((((max((arr_0 [20] [20]), (arr_1 [16] [16])))) | ((max(var_8, var_14))))));
        var_15 = (min(var_15, (((2 ? 4294967295 : 254)))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_16 ^= (!var_0);
            arr_12 [i_0] = ((arr_10 [i_0] [i_2]) ? ((var_1 ? 36319 : (arr_2 [9]))) : (88 % 29333));
        }
        for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
        {
            arr_15 [i_0] [i_0] [6] = var_8;
            arr_16 [i_0] = ((((-89 ? 41 : 1301412060628450057)) + 3));
        }
        for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
        {
            var_17 *= (max((((arr_13 [i_4 + 1] [i_4 - 1]) ? var_10 : var_5)), (arr_17 [i_4 + 1] [i_4 + 1])));
            var_18 = (min(var_18, (((((((arr_19 [i_0]) ? ((3 ? var_6 : -426768427)) : (((var_7 ? 15 : 65524)))))) ? (0 / 1) : ((-(max(138, 4294967295)))))))));
            var_19 = ((10499728396711851261 ? 253 : ((((var_14 ? 2850923444 : 137422176256)) - 0))));
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            arr_22 [i_0] [i_5] = (max((((var_8 - var_7) + (var_14 + 24))), ((((arr_11 [i_5]) + ((max((arr_3 [i_0] [i_0]), var_2))))))));
            var_20 ^= (arr_0 [8] [i_5]);
            var_21 *= (var_10 + 267386880);
            var_22 = (-(((((var_3 ? var_7 : (arr_10 [18] [9])))) ? (max(var_12, (arr_2 [1]))) : (!var_7))));
        }
    }
    var_23 ^= var_10;
    #pragma endscop
}
