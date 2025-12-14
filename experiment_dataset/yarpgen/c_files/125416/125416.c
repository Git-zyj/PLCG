/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0 + 1] [i_0 + 2]);
        var_20 = (min(var_20, 15246290225384545190));
    }
    var_21 = ((var_15 >= (min((!0), var_8))));
    #pragma endscop
}
