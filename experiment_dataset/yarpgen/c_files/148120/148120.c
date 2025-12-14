/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-((var_9 ? ((var_12 ? 0 : var_2)) : var_9))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] |= ((~(min((arr_1 [3]), (-2 / -19435)))));
        var_15 = (~var_1);
    }
    var_16 *= (((((((18 ? var_11 : var_8))) ? (~-4545) : ((-25274 ? var_13 : var_5)))) * var_5));
    var_17 = var_1;
    #pragma endscop
}
