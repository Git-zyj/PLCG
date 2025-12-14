/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = var_5;
        var_10 = var_3;
        var_11 = (min(var_4, var_7));
    }
    var_12 = (max(var_12, (((var_0 ? 3118815594 : var_1)))));
    #pragma endscop
}
