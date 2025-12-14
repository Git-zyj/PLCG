/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_10 = var_1;
        var_11 = (max(var_11, (((-((var_3 ? (255 % 1) : (((arr_0 [i_0] [18]) / var_5)))))))));
    }
    var_12 = ((0 ? var_9 : (((((var_1 ? var_1 : var_5))) ? ((var_4 << (var_1 + 31099))) : (var_1 == 236)))));
    #pragma endscop
}
