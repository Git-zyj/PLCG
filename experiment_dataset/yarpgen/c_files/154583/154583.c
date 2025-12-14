/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (-21566 ? 18446744073709551598 : 47614);
    var_17 = (min(var_17, ((min(var_1, 8270181051462694035)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_18 = (max(var_18, (((-var_11 - (arr_2 [i_0]))))));
        var_19 *= ((-21566 ? -var_11 : (((((arr_1 [i_0] [i_0]) <= var_1))))));
        var_20 = (min(var_20, var_7));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((((9502199419910018937 ? var_8 : -8270181051462694035)) != (arr_1 [i_1] [i_1])));
        arr_8 [i_1] = (min(var_12, (max(-8270181051462694035, var_2))));
    }
    #pragma endscop
}
