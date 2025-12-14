/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((min(1, var_12))) % (((var_10 + 2147483647) >> (var_11 - 61845)))));
        arr_3 [i_0] = ((((((var_8 ? (arr_1 [i_0]) : (arr_1 [i_0]))) + 2147483647)) >> (((arr_0 [i_0]) - 55978))));
    }
    var_16 -= ((var_7 / var_4) ^ var_10);
    var_17 ^= var_15;
    #pragma endscop
}
