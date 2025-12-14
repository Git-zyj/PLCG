/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((var_12 ? 1 : 17)), (min(var_3, -var_9))));
    var_21 = ((((min(var_18, 6782167559117945014)) / var_14)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 -= (((((6782167559117945042 ? 16 : 1))) ? 8126464 : -28));
        var_23 = 1;
        arr_2 [i_0] = ((((arr_0 [i_0]) + (arr_1 [i_0] [6]))));
    }
    #pragma endscop
}
