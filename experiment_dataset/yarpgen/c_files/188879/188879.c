/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (((((((arr_2 [i_0]) ^ (-9223372036854775807 - 1)))) ? (((var_10 ? -666206751 : (arr_1 [9])))) : (arr_0 [i_0] [i_0]))) * var_18);

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [3] [i_1] = var_12;
            arr_8 [i_0] = (min(((min((arr_4 [i_0]), (min((arr_4 [i_0]), var_5))))), (min((arr_0 [i_0] [i_1]), var_14))));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            arr_12 [i_0] [i_0] [i_2] = var_15;
            arr_13 [i_0] [i_2] [i_0] = (arr_2 [0]);
        }
        arr_14 [i_0] = (((arr_0 [i_0] [i_0]) <= ((var_7 ? ((var_3 ? (arr_4 [i_0]) : (arr_6 [i_0]))) : ((min(var_3, var_7)))))));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_18 [i_3] = (min((arr_15 [i_3]), var_2));
        arr_19 [1] = (((arr_16 [i_3] [i_3]) ? var_10 : ((((arr_16 [i_3] [i_3]) > (arr_16 [i_3] [i_3]))))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_22 [i_4] [1] [i_4] = var_1;
            arr_23 [i_3] = ((var_13 ? (arr_15 [i_4]) : var_5));
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
        {
            arr_26 [i_3] [i_5] = -666206740;
            arr_27 [i_3] [i_5] [2] = (min((min((arr_20 [i_5]), (min((arr_25 [i_5]), var_2)))), (var_18 < var_9)));
            arr_28 [i_3] = ((~(((~1) ? var_7 : (arr_20 [i_3])))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
        {
            arr_31 [i_6] [i_6] [i_6] = (((arr_17 [i_3] [i_6]) ? (~-666206752) : var_15));
            arr_32 [5] &= (arr_30 [i_6] [i_6] [i_6]);
        }
    }
    var_20 = var_2;
    #pragma endscop
}
