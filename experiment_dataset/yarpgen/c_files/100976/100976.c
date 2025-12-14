/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 = ((~(arr_1 [i_0])));
        var_12 = (arr_0 [i_0] [i_0]);
    }
    var_13 = (((((var_8 * (717630747 / 3577336548)))) ? var_4 : (max(((65280 ? var_0 : var_3)), -var_3))));
    #pragma endscop
}
