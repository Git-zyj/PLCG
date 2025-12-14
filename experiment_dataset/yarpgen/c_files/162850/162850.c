/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((max((arr_1 [i_0]), (((arr_1 [i_0 - 2]) << 1))))) ? (((1 ? -25 : var_6))) : ((-(var_10 && 25)))));
        arr_3 [i_0] = (arr_1 [i_0]);
    }
    var_11 = (((!137) > var_2));
    var_12 &= (-40 >= 1);
    var_13 ^= (((((!(var_8 / var_1)))) != (min(var_5, var_6))));
    #pragma endscop
}
