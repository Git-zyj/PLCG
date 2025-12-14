/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    var_18 = (((-(max(var_13, var_2)))));
    var_19 = ((-((max(var_15, var_1)))));
    var_20 = ((var_9 ? (((var_11 ? var_15 : var_14))) : ((max(var_8, var_9)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (((arr_2 [i_0] [i_0] [i_0]) ? (arr_2 [i_0] [i_0] [i_0]) : (((arr_0 [i_0]) & (arr_2 [i_1] [i_0] [i_0])))));
            var_21 = ((!(arr_4 [i_0] [i_1])));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_8 [i_0] [i_0] [i_0] = -10966814598218305266;
            var_22 &= ((~(arr_0 [18])));
        }
        arr_9 [2] &= (arr_7 [2] [2]);
    }
    #pragma endscop
}
