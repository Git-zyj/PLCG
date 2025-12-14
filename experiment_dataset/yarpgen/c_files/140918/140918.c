/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    var_20 = (max(var_20, ((-var_13 ? (max(var_5, ((var_7 ? var_2 : 1552440802339852197)))) : (((((var_1 ? 31548 : var_18))) + (min(var_5, var_2))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
    }
    var_21 |= ((((((~((min(33987, var_15))))) + 2147483647)) << (24 - 24)));
    #pragma endscop
}
