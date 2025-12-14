/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(1353470263, ((min(var_5, var_0)))));
        arr_3 [i_0] [i_0] = (((((var_8 ? var_9 : var_6)))));
        var_10 = (max(var_10, (~var_4)));
    }
    var_11 = (max(var_11, var_0));
    #pragma endscop
}
