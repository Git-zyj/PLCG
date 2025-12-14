/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = (((255 & var_5) & (((arr_0 [5]) & var_16))));
        var_18 = (((((var_15 + (((arr_1 [i_0] [i_0]) + 153))))) >= (((((((arr_1 [i_0] [i_0]) > var_5)))) - 3266326147))));
    }
    var_19 = var_6;
    var_20 = (((var_10 < var_6) >= (((var_0 - var_6) - var_8))));
    #pragma endscop
}
