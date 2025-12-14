/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = var_9;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_16 = (((-479276724 <= 179) != (arr_0 [i_0 + 3])));
        var_17 = ((!((((arr_1 [i_0 + 2]) ^ (((var_7 ? var_6 : var_6))))))));
        arr_2 [i_0] = (((((137438953468 ? (-16 / var_4) : (arr_0 [i_0 + 2])))) >= ((((7296245454070153740 ? var_0 : var_7)) - (!var_8)))));
    }
    #pragma endscop
}
