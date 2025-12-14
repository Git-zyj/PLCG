/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;

    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_17 = (max(var_17, (((-(((((-(arr_2 [i_0])))) ? (arr_1 [i_0] [i_0 + 1]) : ((min((arr_1 [i_0] [i_0]), 11386))))))))));
        arr_4 [i_0 + 2] [3] = ((((((arr_0 [i_0 - 2] [i_0 - 1]) ? (arr_0 [i_0 + 1] [i_0 - 1]) : var_15))) ? ((var_11 ? -var_8 : ((max(54145, (arr_0 [i_0] [i_0])))))) : var_14));
        var_18 ^= ((((!(arr_2 [4])))));
        var_19 ^= ((54145 ? 9223372036854775795 : 2));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_20 = ((((max(((var_2 ? var_2 : var_11)), ((var_2 - (arr_3 [i_1] [10])))))) ? ((-90 ? 2703475339305023625 : 98)) : (((max((max(54122, (arr_1 [1] [i_1 - 2]))), (arr_1 [i_1 + 1] [i_1 + 2])))))));
        var_21 = (((((-(arr_7 [i_1]))))) ? (((-((var_11 ? (arr_1 [i_1] [12]) : var_8))))) : ((max(1361100807, var_5))));
    }
    for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [i_2] = (min((((-(arr_3 [i_2] [i_2])))), ((75 ? -9081828835893487970 : 127))));
        var_22 = (max(var_22, (((((max((min(var_13, var_8)), (arr_1 [i_2 + 1] [5])))) ? (((-1714992924 & ((11417 ? var_0 : (arr_0 [1] [i_2])))))) : (min((((~(arr_6 [11])))), (max((arr_2 [i_2]), var_7)))))))));
    }
    #pragma endscop
}
