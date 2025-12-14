/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_12 = -882186237148555051;
        var_13 = ((var_3 ? (((~((91 ? 224 : -44))))) : (((max(24796, (arr_1 [i_0 + 1] [i_0]))) ^ 237484807))));
        var_14 = (max(var_14, (min(65535, 90))));
        arr_3 [16] &= (~21);
        var_15 -= (arr_0 [6]);
    }
    var_16 = ((((min(var_0, var_9))) >= var_3));
    var_17 *= ((((((!var_5) && ((max(0, var_3))))))) ^ var_8);
    #pragma endscop
}
