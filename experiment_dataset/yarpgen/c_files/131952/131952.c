/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_4));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_3 [6] = (((((((var_4 ? (arr_1 [i_0]) : var_8)) ^ (1823532917 | 1)))) ? (((arr_1 [i_0]) - ((min(var_7, var_0))))) : ((min((arr_0 [i_0]), var_6)))));
        arr_4 [i_0] = (((63488 ^ 57344) || (arr_1 [5])));
        arr_5 [i_0 + 1] [i_0] = ((!(arr_2 [i_0 - 2] [i_0 + 1])));
    }
    #pragma endscop
}
