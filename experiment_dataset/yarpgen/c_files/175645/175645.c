/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_13 *= ((var_7 ? (((!(arr_1 [i_0 - 1] [i_0 - 1])))) : ((var_8 ? var_8 : var_8))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_14 = (max(var_14, (~0)));
            arr_5 [i_1] [i_1] [i_1] &= var_9;
            var_15 = var_11;
        }
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_16 = (((((((arr_2 [i_2]) ? var_11 : var_0))) * (min(var_9, var_1)))));
        var_17 = (arr_4 [i_2] [i_2] [i_2]);
        arr_9 [4] [4] &= (((((arr_6 [i_2] [12]) ? (arr_6 [i_2] [12]) : var_9)) == ((((arr_6 [i_2] [10]) ? (arr_6 [i_2] [6]) : (arr_6 [i_2] [4]))))));
    }
    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        var_18 = (1 / var_11);
        var_19 = var_10;

        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
        {
            arr_15 [i_3] [i_4] = ((((((((arr_10 [8] [i_3]) ? 8960836628736160903 : (arr_12 [i_3] [i_3])))) ? var_5 : var_1))) ? (((arr_2 [i_3]) ? 1 : (arr_7 [i_3] [i_3]))) : var_2);
            arr_16 [i_3] [i_4] = (max(((((arr_4 [10] [i_4] [i_4]) ? (min(var_4, (arr_3 [i_3]))) : (23864 < var_8)))), ((1 ? (arr_3 [i_3 - 1]) : (((arr_4 [i_3] [i_4] [i_3]) + var_1))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
        {
            arr_21 [i_5] [i_5] [i_5] = ((arr_18 [i_5] [i_3 - 2] [i_3 - 1]) ? 2997389762 : -1642800992);
            arr_22 [i_3] [i_5] = var_8;
            var_20 = (((arr_13 [i_3 - 2] [i_3] [i_5]) ? (arr_1 [i_3 + 1] [i_3 + 1]) : (arr_1 [i_3 - 1] [i_3 - 1])));
        }
    }
    var_21 ^= var_9;
    #pragma endscop
}
