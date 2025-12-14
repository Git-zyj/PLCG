/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = var_1;
        var_14 = (arr_0 [i_0]);
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] = (!var_2);
    }
    var_15 = var_9;
    var_16 = (min(4258377737782247134, var_12));
    #pragma endscop
}
