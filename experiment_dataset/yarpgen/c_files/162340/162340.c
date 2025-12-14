/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((~((var_4 ? var_13 : var_13))))) ? var_12 : (-2147483647 - 1)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_10;
        var_15 = (min(6532497846982386259, ((var_12 ? 536838144 : (arr_1 [i_0] [i_0])))));
        arr_4 [i_0] = (min(((((((arr_0 [i_0]) ? var_7 : var_13))) ? 3758129152 : ((((arr_1 [i_0] [i_0]) >= 3758129151))))), ((((min(536838142, var_13)) <= ((7508 ? -64 : 3758129148)))))));
        arr_5 [i_0] = var_12;
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        arr_9 [i_1] = ((min((min((arr_8 [i_1]), var_13)), (((arr_6 [i_1] [i_1]) ? (arr_8 [i_1]) : 15)))));
        var_16 |= (((((var_4 << (-33554431 + 33554445)))) != (min(var_10, var_9))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_12 [i_2] = ((((min((!2003504440), -64))) ? (max((~var_13), (min(2003504420, 47)))) : (14 && -7509)));
        var_17 = (((min(var_9, 2003504440))));
        var_18 = (((((arr_11 [i_2]) ? (max(4, 7509)) : ((((arr_10 [i_2]) + var_2)))))));
    }
    #pragma endscop
}
