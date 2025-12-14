/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (((((-(var_4 % var_10)))) ? (((!(((0 >> (65526 - 65524))))))) : ((min(13, 65507)))));
    var_20 += ((!(-727214424 >= 16453)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (~var_13);
        var_21 = ((var_10 ? var_0 : var_13));
        var_22 = ((var_5 <= ((var_9 ? var_12 : var_18))));
    }
    #pragma endscop
}
