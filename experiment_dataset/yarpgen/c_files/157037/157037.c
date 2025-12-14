/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_14 = var_11;
        arr_3 [i_0] = -18353;
        var_15 = (min(var_15, ((min((max(-57, (arr_2 [i_0] [6]))), 30980)))));
    }
    var_16 = (min(((-((18446744073709551615 ? var_3 : 57)))), var_13));
    var_17 = var_1;
    #pragma endscop
}
