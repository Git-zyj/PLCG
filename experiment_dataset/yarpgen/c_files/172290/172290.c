/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_18 = (((((arr_0 [i_0] [i_1]) << var_12)) < (-4 ^ 0)));
            arr_5 [i_0] [i_0] [i_0] = (((arr_3 [i_1]) / ((0 | (-9223372036854775807 - 1)))));
            arr_6 [0] &= var_3;
        }

        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            var_19 = (max(var_19, (arr_1 [10] [10])));
            arr_10 [i_0] [i_0] = (-32761 ^ var_7);
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_20 = var_3;
        var_21 = ((1 ? 13792 : 4294967295));
        var_22 = (((((var_1 ? (arr_12 [i_3]) : (arr_11 [i_3] [i_3])))) ? 13787 : var_14));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_23 += var_5;
        var_24 = (((arr_2 [11] [i_4]) ? (((var_10 ? (arr_8 [i_4] [i_4] [i_4]) : (arr_14 [i_4])))) : ((var_7 ? (arr_4 [i_4]) : var_11))));
    }
    var_25 = var_12;
    var_26 = (max(((var_4 ? 1 : var_17)), (max(((var_0 ? var_4 : var_4)), var_4))));
    #pragma endscop
}
