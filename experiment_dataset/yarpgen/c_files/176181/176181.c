/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_5;
    var_15 = var_4;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 - 3] = ((var_10 ? (arr_2 [i_0 - 2]) : (arr_0 [i_0 - 3])));
        arr_4 [i_0] = ((var_6 ? var_8 : var_9));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 = (min(var_16, (((var_2 ? (arr_5 [i_0 - 1] [i_0 - 2] [i_0 - 2]) : (arr_1 [i_0 - 2]))))));
            arr_8 [i_0] &= (var_1 ? 1815649478 : (arr_1 [i_0 - 2]));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_17 -= ((1 ? 1815649477 : 49679));
            arr_13 [i_0] = (!15857);
        }
        arr_14 [i_0] = ((~var_12) ? 65523 : (((arr_0 [i_0]) ? 4194303 : var_3)));
    }
    for (int i_3 = 3; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_18 = (((49692 ? (arr_5 [i_3 - 2] [i_3] [i_3 + 1]) : (-2147483647 - 1))));
        arr_18 [i_3] = ((~((((var_1 ? 3271402278 : 3240067742))))));
    }
    var_19 = var_12;
    #pragma endscop
}
