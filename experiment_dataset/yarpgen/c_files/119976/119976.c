/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_17 ^= var_10;
        var_18 = var_0;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = (-((min((max((arr_1 [i_1]), var_13)), (arr_1 [1])))));
        var_19 = (((min((arr_2 [i_1]), (arr_2 [i_1])))) ? ((((max(var_13, (arr_2 [i_1])))) ? var_3 : (((14336 ? 14336 : (arr_3 [i_1])))))) : (((-14327 ? 253 : (arr_0 [i_1])))));
        var_20 = (((((-84 ? (((max((arr_3 [i_1]), 14652)))) : (arr_2 [i_1])))) ? (((var_11 + 6059294339783729625) ? (arr_1 [i_1]) : -1819075591)) : ((-(!var_5)))));
    }
    var_21 |= ((var_16 ? (!var_12) : (max(-var_0, (min(var_12, var_9))))));
    #pragma endscop
}
