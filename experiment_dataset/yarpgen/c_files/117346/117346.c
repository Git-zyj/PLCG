/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 7;
    var_20 = (var_17 && var_12);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) / -16));
        var_21 += (-1593828020 / -696632987);
    }
    #pragma endscop
}
