/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    var_21 = var_2;
    var_22 = ((var_11 << (((max(2147483648, -3884453630436259908)) - 2147483634))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (!-1);
        arr_5 [1] = var_16;
    }
    #pragma endscop
}
