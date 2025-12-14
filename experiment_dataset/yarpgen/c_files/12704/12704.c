/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((((var_9 / (((var_9 ? var_1 : var_6))))) * (min(var_9, var_6))));
    var_11 = (max(var_11, var_8));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((arr_0 [i_0 - 2]) ? var_3 : (arr_0 [i_0 + 1]))));
        var_12 |= ((((min((((arr_0 [i_0]) ? (arr_1 [i_0]) : var_8)), (arr_1 [i_0])))) ? (((arr_1 [i_0]) << (((-85 + 2147483647) >> (((arr_0 [i_0]) + 830353827431591543)))))) : var_0));
        arr_3 [i_0] = var_0;
        var_13 ^= ((((min(65535, (arr_1 [i_0 + 3])))) ? var_4 : (((arr_1 [i_0 + 3]) | ((min(var_8, (arr_1 [i_0]))))))));
        var_14 = (((((-(arr_1 [11])))) ? (arr_1 [i_0 - 1]) : (!var_5)));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_15 *= (((((arr_4 [i_1] [1]) ? (arr_5 [i_1] [12]) : var_6)) | (((arr_5 [i_1] [i_1]) ? var_7 : (arr_5 [i_1] [i_1])))));
        arr_6 [i_1] [i_1] = -var_2;
        arr_7 [i_1 - 4] [i_1] &= (((var_4 ? var_8 : (arr_5 [i_1] [i_1 - 3]))));
    }
    for (int i_2 = 4; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_16 = (arr_9 [11] [i_2]);
        arr_11 [i_2] = ((((-91 ? (-91 + -3818) : (arr_5 [i_2 + 2] [i_2 + 2])))) ? (min(var_1, (arr_5 [i_2] [2]))) : ((-(arr_10 [i_2 + 2] [i_2 - 4]))));
    }
    #pragma endscop
}
