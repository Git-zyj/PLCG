/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [2] &= (arr_1 [i_0 + 1]);
        var_16 = ((((((min((arr_1 [0]), (arr_2 [i_0 - 1]))) | (arr_1 [i_0 + 1])))) ? ((((var_12 || (arr_0 [i_0 + 1]))))) : ((((arr_0 [i_0 - 1]) != var_10)))));
        var_17 -= (((44572 ? 80 : 65525)));
        var_18 ^= (arr_1 [i_0 - 1]);
        var_19 ^= (arr_1 [i_0 - 1]);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_20 &= var_15;
        var_21 = (arr_6 [i_1 - 2] [i_1 - 2]);
    }
    for (int i_2 = 3; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_22 = (i_2 % 2 == 0) ? (((((10 << (((((arr_7 [i_2]) + 8173425043415785849)) - 27)))) >> var_3))) : (((((10 << (((((((((arr_7 [i_2]) - 8173425043415785849)) - 27)) + 6135305268070586318)) - 24)))) >> var_3)));
        var_23 *= (min(((65534 ? 0 : 65525)), (var_14 * 16)));
    }
    var_24 = var_0;
    var_25 = (max(var_2, var_11));
    var_26 = (max((max(var_0, var_15)), var_11));
    #pragma endscop
}
