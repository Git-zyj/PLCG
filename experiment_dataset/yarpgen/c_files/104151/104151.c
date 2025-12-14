/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (((arr_0 [i_0]) ? (var_7 < 1) : 1));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_14 = (((((8267 ? var_9 : ((27 ? 42213 : 32767))))) ? (0 && 14) : ((max((arr_2 [i_0] [i_1] [i_1]), -6)))));
            arr_4 [i_0] = (min((min(((14 ? 6 : -16327)), (arr_1 [6]))), -58));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_2] [i_2] = (((arr_0 [i_0]) / (arr_2 [23] [i_2] [i_2])));
            var_15 = (min(var_15, ((min((arr_1 [i_2]), ((60 ? var_10 : 7038)))))));
            var_16 = (((37 ? (((var_1 ? 76 : var_10)) : (min(var_1, 10))))));
            arr_8 [i_0] [i_2] = 255;
            arr_9 [i_2] [i_2] [i_0] = (((6550 ? var_7 : 7038)));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            arr_13 [1] [i_0] = (arr_0 [i_0]);
            var_17 = 1;
            arr_14 [i_0] [i_0] &= 0;
            var_18 += (arr_0 [i_3]);
        }
    }
    var_19 = var_10;
    var_20 = min((((min(var_12, var_6)))), (var_1 / 1));
    var_21 = ((!(((-(41057 - 128))))));
    var_22 = 227;
    #pragma endscop
}
