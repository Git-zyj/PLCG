/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_7 >= (((var_1 - var_7) / ((-22627 ? var_1 : var_4))))));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (max((min((1 * var_12), 220)), ((((max(-22618, -22627))) / var_1))));
        var_14 = 22612;
    }
    var_15 = ((-((-(var_0 ^ -6495024972549587685)))));
    var_16 = var_3;
    var_17 = var_3;
    #pragma endscop
}
