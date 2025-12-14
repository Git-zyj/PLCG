/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_6));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 &= (min((((-(arr_1 [i_0])))), 18295850644325293619));
        var_20 = (min(var_20, (arr_1 [i_0])));
        arr_2 [i_0] |= ((~(arr_1 [i_0])));
    }
    var_21 = (min(var_21, (((((min(((var_11 ? 0 : 9223372036854775807)), (((var_11 ? var_15 : var_12)))))) ? (((~(~var_11)))) : var_5)))));
    var_22 |= (((var_7 ? (0 & var_5) : (((1371407231 ? var_11 : var_2))))));
    #pragma endscop
}
