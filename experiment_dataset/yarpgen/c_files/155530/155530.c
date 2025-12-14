/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((var_10 / (~var_5))))));
    var_12 = 48;

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_13 = ((~(arr_1 [i_0])));
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
    }
    #pragma endscop
}
