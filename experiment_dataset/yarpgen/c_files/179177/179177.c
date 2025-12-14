/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= var_1;
    var_20 *= (((((((var_5 ? 4 : var_1))) ? 1 : (4 + var_15))) >> 4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 -= 1;
        var_22 = (min(var_22, (((!-1) ? var_5 : (((arr_2 [i_0] [i_0]) % (arr_1 [i_0])))))));
        var_23 = ((-(arr_0 [i_0] [i_0])));
    }
    #pragma endscop
}
