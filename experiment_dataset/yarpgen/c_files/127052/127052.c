/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = (((((((min((arr_0 [i_0]), (arr_0 [i_0]))) + 2147483647)) << (((arr_1 [i_0]) - 9489821710446652304)))) >> (4194304 - 4194284)));
        arr_2 [4] = ((((min((arr_0 [i_0]), 992))) || (((max(0, (arr_0 [4]))) <= (~var_2)))));
    }
    var_14 = (((((min(var_10, var_4)) ? var_5 : (max(0, var_10))))));
    var_15 ^= var_3;
    #pragma endscop
}
