/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 = (max(var_6, var_6));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_12 = ((((((60414 ? var_7 : (arr_1 [2]))) ^ ((max((arr_0 [i_0]), (arr_1 [i_0])))))) <= ((min((((9432 || (arr_0 [i_0])))), 24300)))));
        var_13 = (min(var_7, (max(45911, 32767))));
        arr_2 [i_0] = ((var_3 ? (30273 < 35263) : 8237));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((arr_0 [i_1]) + (arr_4 [i_1] [i_1])));
        arr_7 [i_1] [12] = var_9;
        var_14 = ((var_8 ? ((45933 ? (arr_4 [i_1] [i_1]) : (arr_5 [i_1]))) : ((~(arr_0 [9])))));

        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            arr_10 [1] = ((-((((arr_3 [i_1]) != 22287)))));
            var_15 = (((var_5 * var_3) / 65535));
            arr_11 [7] [i_2 - 1] [i_2 - 1] = (!var_4);
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_16 = ((!(arr_8 [i_3] [16] [i_3])));
        arr_14 [i_3] = (19630 - 5121);
        var_17 = (((arr_1 [i_3]) ? (arr_3 [i_3]) : ((var_7 + (arr_3 [i_3])))));
    }
    var_18 = (((var_1 * var_4) / 45932));
    #pragma endscop
}
