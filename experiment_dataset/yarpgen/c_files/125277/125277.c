/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = var_3;
        arr_4 [i_0] [i_0] = (((var_10 != var_12) ? (var_0 + var_7) : ((var_8 ? var_9 : var_4))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_19 -= (((var_12 + var_7) | (((((var_13 ? var_10 : var_1)) / var_11)))));
            arr_9 [i_2] [4] [i_2] = ((var_0 ? var_7 : var_14));
            var_20 = (min(var_20, ((max((var_9 << var_6), ((var_9 - (((min(var_16, var_7)))))))))));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_21 = (max(var_21, (((~(var_8 == var_11))))));
            arr_13 [i_3] [i_3] &= ((((max(var_17, var_5))) & (((var_16 >= var_5) | var_11))));
            var_22 &= ((~(var_6 + var_6)));
        }
        arr_14 [i_1] = (max(((((var_4 % var_12) > (var_5 + var_13)))), (~var_13)));
        var_23 = var_12;
        var_24 = (max(((var_2 ? var_11 : var_9)), (((var_1 == var_11) | (var_7 / var_12)))));
    }
    var_25 = (max(var_25, var_2));
    #pragma endscop
}
