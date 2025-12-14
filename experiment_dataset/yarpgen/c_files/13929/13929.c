/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_11 = max((max((min(86, -12)), (((13 ? (arr_1 [i_0]) : 98))))), var_6);
        var_12 = -2726856592067978860;
        arr_2 [i_0] = ((((777789677980013262 >> (((arr_1 [i_0]) - 1641725601)))) * (((arr_0 [i_0]) ? (arr_1 [i_0]) : 2726856592067978868))));
        var_13 = ((((arr_1 [i_0]) && ((((arr_1 [i_0]) ? -2940972215330184865 : 9223372036854775807))))) ? (max((~2940972215330184895), (max(-5298400191803710706, 7553916747999741010)))) : ((((var_4 != (min(var_1, (arr_0 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_14 |= (max(((min(var_8, (arr_0 [i_1])))), (min((max(var_6, 8102183702438450547)), (arr_0 [i_1])))));
        var_15 ^= ((((min(9223372036854775801, var_5)))) ? -3726365678941423079 : 201);
    }
    var_16 ^= var_3;
    #pragma endscop
}
