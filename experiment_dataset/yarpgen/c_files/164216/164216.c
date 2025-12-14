/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-2147483647 - 1);

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_4 [0] |= (~-var_12);
        arr_5 [6] = (((((((var_6 ? var_13 : var_12))) || (!var_10))) ? var_1 : ((((arr_1 [i_0]) << var_10)))));
        arr_6 [1] = (((((min(1, var_4)))) != (max((-15264 + 33165), var_2))));
    }
    var_16 = var_5;
    var_17 = (((~var_12) == 16));
    #pragma endscop
}
