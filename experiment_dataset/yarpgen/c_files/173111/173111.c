/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_20 = -3968;
        var_21 = (max(var_21, ((((((((~(arr_2 [10] [10])))) | (((arr_2 [4] [i_0]) ^ (arr_0 [i_0]))))) * (arr_0 [i_0]))))));
        var_22 = (arr_0 [6]);
    }
    var_23 = (~var_9);
    #pragma endscop
}
