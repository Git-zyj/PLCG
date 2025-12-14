/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_16 *= ((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : (((arr_1 [i_0 - 1]) | (arr_1 [i_0 - 1]))));
        arr_3 [i_0 - 3] = var_5;
        arr_4 [5] [1] &= (((((-(arr_2 [i_0 + 2] [i_0 - 2])))) ^ (~var_2)));
    }
    var_17 = var_0;
    var_18 = var_13;
    var_19 = var_6;
    #pragma endscop
}
