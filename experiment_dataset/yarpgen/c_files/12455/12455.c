/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((!(((var_5 ? -21241 : var_11))))) ? (((21240 ? -21228 : var_7))) : (-1 / 125)));
    var_13 = ((((((var_9 ? 131 : var_11)))) ? ((max(var_11, var_2))) : -21229));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -21241;
        var_14 += (-21 - 17);
        var_15 = var_4;
    }
    #pragma endscop
}
