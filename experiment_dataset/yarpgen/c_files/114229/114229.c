/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = (min(var_16, ((((((~(arr_2 [i_0] [i_0])))) ? -41 : ((-(arr_1 [5] [5]))))))));
        arr_4 [3] = var_0;
        arr_5 [i_0] = -41;
    }
    var_17 = var_4;
    var_18 = 7550984439454437573;
    #pragma endscop
}
