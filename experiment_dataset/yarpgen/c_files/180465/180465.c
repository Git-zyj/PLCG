/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = 84;
        arr_3 [i_0] = -1501277184104402303;
        arr_4 [0] = (arr_0 [i_0]);
        var_14 = (((arr_1 [i_0]) * ((228 ? 14594 : 84))));
    }
    var_15 = 14594;
    #pragma endscop
}
