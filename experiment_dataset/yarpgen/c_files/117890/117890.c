/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_6;
        var_12 = (arr_1 [i_0]);
    }
    var_13 = (max((min(var_4, (min((-2147483647 - 1), var_2)))), ((((((3410487227 ? 55 : 0))) ? var_10 : (((49156902583449463 ? var_0 : var_6))))))));
    #pragma endscop
}
