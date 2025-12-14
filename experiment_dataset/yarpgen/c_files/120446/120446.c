/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_19 = ((!(((0 ? 220 : var_9)))));
        var_20 = (arr_0 [i_0] [i_0]);
        var_21 = (!34293);
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_22 -= (~35);
        var_23 = var_12;
        var_24 = var_9;
    }
    var_25 = var_13;
    #pragma endscop
}
