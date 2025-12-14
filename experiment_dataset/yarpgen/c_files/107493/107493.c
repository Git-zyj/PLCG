/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_15 -= ((var_7 ? (arr_1 [i_0]) : (arr_1 [i_0])));
        arr_2 [i_0] [i_0] = 594083955;
        var_16 = -1;
        arr_3 [i_0] = (~(arr_1 [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_17 = (((((-461835258 ? -1 : 1678341947))) ? (~var_0) : (arr_5 [i_1] [i_1])));

        for (int i_2 = 3; i_2 < 14;i_2 += 1)
        {
            var_18 ^= (((arr_5 [i_2 - 3] [i_2 + 1]) ? 230108701 : (arr_4 [i_2 - 1] [i_2 + 1])));
            var_19 = arr_6 [i_1] [i_1] [i_2];
        }
        arr_8 [i_1] = (((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1])));
        var_20 = (max(var_20, ((((arr_7 [i_1] [i_1] [i_1]) ? (arr_7 [i_1] [i_1] [i_1]) : (arr_7 [i_1] [i_1] [i_1]))))));
        var_21 ^= 8;
    }
    var_22 = ((((max(var_11, 2))) ? (~var_10) : (((!var_8) ? var_9 : -0))));
    var_23 = var_3;
    #pragma endscop
}
