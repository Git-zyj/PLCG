/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-18135 ? var_12 : var_8));
    var_18 = (min(var_11, var_1));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = (max(((max(-18136, -18113))), var_5));
        arr_2 [i_0] [i_0] = (max((arr_1 [i_0]), (((-10 <= var_15) - (arr_0 [i_0])))));
    }
    #pragma endscop
}
