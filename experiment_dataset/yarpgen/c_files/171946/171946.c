/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_14 = var_3;
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        var_15 = ((+(((arr_0 [i_0 + 1] [i_0 + 2]) ? var_10 : (arr_0 [i_0 + 1] [i_0 + 2])))));
    }
    var_16 = (min(var_16, (((~(~-41))))));
    #pragma endscop
}
