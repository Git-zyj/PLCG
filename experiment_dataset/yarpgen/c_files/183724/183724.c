/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((var_8 < (((((var_9 ? var_3 : var_7))) ? 2147483136 : ((max(var_1, 27)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) > (arr_1 [i_0] [i_0])));
        arr_4 [i_0] [i_0] = (((((2147483136 ? (max((arr_0 [i_0]), 12234083948688668651)) : var_10))) ? 18107371318270384641 : 127));
    }
    #pragma endscop
}
