/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((min((((!(20471 << 0)))), var_2)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = (max(var_13, var_10));
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [20] = ((-(arr_0 [i_0])));
        arr_4 [i_0] [i_0] = ((~((var_11 ^ (arr_1 [i_0])))));
    }
    #pragma endscop
}
