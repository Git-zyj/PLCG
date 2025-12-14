/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = (((arr_0 [i_0]) & 65535));
        arr_2 [12] [i_0] = ((1007883458 ? (((3694702114 || (arr_0 [i_0])))) : var_11));
        var_17 = (((arr_0 [i_0]) >> (((arr_1 [i_0] [12]) - 25582))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_18 = (((((var_4 ? 3953599095 : 341368200)) | ((4294967295 + (arr_3 [i_1]))))));
        arr_5 [1] = (min(var_1, (((!(((-(arr_4 [i_1] [6])))))))));
    }
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        var_19 = (max(var_19, ((max((((arr_8 [i_2]) ? (arr_6 [1]) : (arr_6 [i_2]))), ((((arr_7 [i_2] [i_2 - 3]) >= (arr_9 [i_2] [i_2 - 2])))))))));
        var_20 = 341368200;
    }
    var_21 = (min(var_21, var_15));
    var_22 = var_1;
    var_23 = (min(var_23, var_9));
    #pragma endscop
}
