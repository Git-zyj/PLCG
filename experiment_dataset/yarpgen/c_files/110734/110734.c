/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_20 = (arr_2 [i_0 + 1]);
        var_21 = (-(min((((!(arr_1 [i_0] [i_0])))), 0)));
    }
    var_22 = ((((min((min(9223372036854775807, var_1)), var_13))) ? var_12 : var_3));
    var_23 = ((var_8 * (min(var_6, ((65535 ? var_10 : 4000107047))))));
    var_24 = (max(var_24, var_18));
    #pragma endscop
}
