/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = (min(4924517854987825388, (min(4924517854987825388, (arr_2 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = (((((((var_5 ? var_4 : var_14))) ? var_15 : (min(var_16, (arr_1 [i_0]))))) % (arr_2 [i_0] [i_0])));
        var_19 = ((((arr_0 [i_0]) ? var_11 : (~255))));
        arr_4 [i_0] [i_0] = (max((0 >= var_2), (((((-1056215387 % (arr_1 [i_0])))) ? 16893 : (((arr_1 [2]) ? var_15 : (arr_1 [i_0])))))));
        var_20 = ((((max((arr_1 [i_0]), (((48643 > (arr_2 [i_0] [20]))))))) ? (arr_2 [i_0] [i_0]) : (((!((-5 == (arr_1 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_21 = (min(var_21, ((min((1763813345 - 48643), 1058414946)))));
        var_22 = 5872949165770641180;
    }
    var_23 = var_7;
    #pragma endscop
}
