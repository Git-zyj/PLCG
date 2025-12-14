/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [18] = (!var_0);
        var_14 -= (((!1) ? (arr_0 [i_0]) : ((~(arr_0 [i_0])))));
        var_15 = (max(var_15, var_11));
    }
    #pragma endscop
}
