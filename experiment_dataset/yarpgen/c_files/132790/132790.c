/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((1541307476 ? (((601076408 ? ((var_7 ? var_10 : (arr_3 [i_0] [i_0]))) : (((var_4 ? var_10 : 1)))))) : (0 % -var_7)));
        arr_5 [i_0] = -3072195052;
        arr_6 [i_0] = (min(781391220, -16282));
        arr_7 [i_0] = ((+(((((arr_2 [i_0]) ? var_9 : var_0)) * (!var_3)))));
    }
    var_11 = (1541307476 == 16260);
    #pragma endscop
}
