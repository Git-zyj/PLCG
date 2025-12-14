/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_2));
    var_15 *= ((max(var_10, ((max(var_13, var_4))))) / var_10);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 |= ((((min(var_5, var_2))) && (var_9 / var_5)));
        var_17 = (max(var_17, ((max(var_7, ((((var_10 ? var_1 : var_13)) + (min(var_8, var_10)))))))));
        var_18 += (max((((var_11 ? var_2 : var_13))), (max(4294967295, var_7))));
        var_19 = (max(var_19, var_11));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 |= var_4;
        arr_5 [i_1] [10] |= (((var_1 - var_6) * (~var_9)));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        arr_10 [4] &= var_6;
        var_21 &= var_6;
    }
    var_22 += (((var_5 + var_0) || var_11));
    #pragma endscop
}
