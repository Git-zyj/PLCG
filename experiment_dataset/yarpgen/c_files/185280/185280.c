/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_20 ^= (~-var_10);
        var_21 ^= (arr_1 [i_0] [i_0]);
        var_22 ^= (((((-18040188256254358647 ? (((arr_2 [0] [12]) & var_3)) : (min(var_4, 24757))))) ? (((max((min(-105, var_16)), (268435455 && var_12))))) : ((var_2 ? ((-10602 ? 768 : 268435428)) : (((3156287841492866290 ? (arr_2 [8] [i_0]) : (arr_1 [1] [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_23 = (arr_0 [i_1]);
        var_24 ^= (arr_0 [2]);
    }
    var_25 = (!18446744073441116167);
    var_26 ^= (max(var_17, ((-(min(var_12, 18446744073441116166))))));
    #pragma endscop
}
