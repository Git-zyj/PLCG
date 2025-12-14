/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_11 = ((56 ? 56 : 7936));
        arr_2 [i_0] [i_0] |= arr_0 [i_0] [i_0];
    }
    var_12 = var_6;
    var_13 = (max(var_5, var_3));
    var_14 = (((((var_9 ? 233 : -0))) ? (min(13, 112235889)) : var_9));
    #pragma endscop
}
