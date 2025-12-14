/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = (((((var_14 ? ((~(arr_2 [i_0]))) : (arr_2 [i_0])))) ? -var_4 : -var_16));
        arr_3 [i_0] [i_0] = (min((max((arr_2 [i_0]), (arr_0 [i_0]))), (arr_2 [i_0])));
    }
    var_18 ^= (((17477358038346112513 ? var_14 : (!var_9))) - 4194303);
    #pragma endscop
}
