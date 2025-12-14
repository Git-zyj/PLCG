/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (min(var_11, (var_0 % var_10)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_20 &= 100;
        var_21 = var_2;
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_22 *= (((((var_1 ? (arr_2 [2]) : (arr_2 [6])))) && ((((arr_2 [14]) ? (arr_2 [2]) : 100)))));
        arr_5 [i_1] [i_1] = ((var_18 ? (arr_1 [i_1 + 1]) : (max((arr_1 [i_1 - 1]), 254))));
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = (max(((min((arr_2 [i_2]), (arr_2 [i_2])))), (min(12856, 2147483647))));
        var_23 ^= (arr_3 [i_2 - 1] [i_2]);
    }
    var_24 = (max(var_24, var_6));
    #pragma endscop
}
