/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_18 = 3439269223;
        var_19 = ((((((-(arr_1 [i_0] [i_0]))))) ? var_14 : 1006493493));
        arr_3 [i_0] = (+-var_15);
    }
    var_20 = var_4;
    #pragma endscop
}
