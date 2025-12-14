/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = (max(var_16, 61151));
        arr_2 [i_0] = (arr_0 [i_0]);
    }
    var_17 = (max(var_17, var_0));
    #pragma endscop
}
