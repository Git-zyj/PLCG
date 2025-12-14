/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_10 = (max(var_10, (((0 << (65535 - 65527))))));
        arr_2 [i_0] [i_0] = ((!(((var_8 ^ (arr_1 [i_0]))))));
    }
    var_11 -= ((((var_8 ^ ((var_8 ? var_7 : 0))))) ? (((max(var_6, var_6)) / var_6)) : ((~((max(1, 1))))));
    #pragma endscop
}
