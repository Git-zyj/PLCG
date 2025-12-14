/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = (max(5770, (((((min(var_11, 20))) / -var_4)))));
        var_18 = (-((((min(-1601507297, -32748))) ? (arr_2 [i_0] [i_0]) : (((arr_0 [i_0]) ? -32748 : var_2)))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_19 = 2;
        arr_6 [i_1 + 1] &= var_7;
        var_20 = 1;
    }
    var_21 = var_7;
    var_22 = (max(var_11, 23));
    #pragma endscop
}
