/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((var_4 ? (((~((var_9 ? var_2 : 2220539601))))) : ((~((var_9 ? var_4 : var_7)))))))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_11 = (max(var_11, 2074427678));
        var_12 = (max(var_12, var_3));
    }
    #pragma endscop
}
