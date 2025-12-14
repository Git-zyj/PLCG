/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= (min(((var_7 ? 1743364650 : ((992945056 ? -29669 : var_4)))), var_8));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_20 = (max(var_20, ((((arr_1 [i_0 - 2] [i_0 + 1]) ? (arr_0 [i_0] [i_0 - 1]) : (arr_0 [i_0] [i_0 - 2]))))));
        arr_2 [17] [17] = (arr_1 [i_0] [i_0]);
        var_21 ^= ((((var_3 ? 4294967281 : -7696007180739701345)) < ((((arr_0 [i_0] [i_0]) * var_9)))));
    }
    var_22 = (max(var_22, (32512 <= 19)));
    var_23 = var_10;
    #pragma endscop
}
