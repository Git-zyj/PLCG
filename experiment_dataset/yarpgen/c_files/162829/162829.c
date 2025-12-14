/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 321962387580064196;

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_19 *= (((arr_1 [i_0 - 1]) ? (((arr_1 [i_0 - 2]) ? -1131533682 : (arr_1 [i_0 - 2]))) : (((11722318644381801248 >= (arr_1 [i_0 + 1]))))));
        arr_2 [i_0] = ((var_16 ? (arr_1 [0]) : (min((max(5362836763740174216, 27002)), (((-22 & (arr_1 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_20 = (min((!6724425429327750368), (!5617786835275907724)));
        arr_6 [i_1] &= ((~((-((var_10 ? (arr_1 [i_1]) : (arr_4 [12])))))));
    }
    var_21 &= (((((~(var_7 >> var_12)))) ? (min((var_1 - var_14), -var_11)) : var_8));
    #pragma endscop
}
