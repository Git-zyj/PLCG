/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_10));
    var_15 = (var_12 || var_13);
    var_16 = var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (min(((+(((arr_0 [i_0] [i_0]) ^ var_5)))), (((((arr_1 [i_0] [i_0]) || var_4))))));
        var_18 *= ((var_5 ? (arr_0 [10] [10]) : (((arr_0 [12] [12]) ? (arr_1 [i_0] [16]) : (min(var_11, var_8))))));
        var_19 = (min((2398061247 | -5329619580799375916), (min((((arr_0 [i_0] [i_0]) ? 4896745029196182608 : var_11)), (min(4896745029196182608, (arr_0 [i_0] [i_0])))))));
        arr_2 [i_0] = (i_0 % 2 == 0) ? (((((min(16322, 4896745029196182586))) || ((((arr_1 [i_0] [i_0]) << (((arr_0 [i_0] [i_0]) + 20239)))))))) : (((((min(16322, 4896745029196182586))) || ((((arr_1 [i_0] [i_0]) << (((((arr_0 [i_0] [i_0]) + 20239)) - 42194))))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_20 = (max(var_20, (((arr_0 [i_1] [i_1]) || ((min((((var_3 && (arr_4 [i_1])))), (((arr_1 [i_1] [i_1]) ? (arr_1 [i_1] [i_1]) : var_5)))))))));
        var_21 = ((((((((arr_4 [i_1]) ? (arr_3 [i_1]) : (arr_1 [i_1] [i_1])))) == var_11)) ? (arr_4 [i_1]) : (min((arr_3 [i_1]), 2628978191))));
    }
    #pragma endscop
}
