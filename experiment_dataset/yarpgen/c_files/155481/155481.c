/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_13 = ((3018492436278078872 % (arr_0 [i_0 - 2])));
        var_14 += (arr_0 [i_0 + 1]);
    }
    var_15 = var_5;
    #pragma endscop
}
