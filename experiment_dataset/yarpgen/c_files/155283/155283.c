/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min(160, 74))) == var_5));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] = ((var_4 ? (arr_2 [i_0 - 1]) : (arr_1 [i_0 - 1])));
        arr_4 [i_0] = (arr_0 [i_0]);
        var_15 = (arr_0 [i_0]);
        arr_5 [i_0] = (((arr_0 [i_0]) - (arr_0 [i_0])));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_16 = ((68 ? 112 : 182));
            arr_12 [i_2] [i_2] [i_2] = ((var_8 >> (((((((arr_7 [12]) + 2147483647)) << (((((arr_11 [i_1] [i_1] [i_2]) ? var_3 : var_1)) - 201)))) - 2147483574))));
            arr_13 [7] [i_2] = ((166 ? (((arr_8 [i_2] [i_2]) ? var_0 : ((((!(arr_11 [i_1] [i_1 + 2] [i_2]))))))) : (((((min(71, 182))) ? (arr_6 [i_1 + 2] [i_1 - 1]) : (185 * 58))))));
            var_17 = 95;
            var_18 += (((179 <= 70) && (arr_7 [i_2])));
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            var_19 = 79;
            arr_18 [i_1] = ((-((~(arr_15 [i_1 + 1] [i_3] [i_3])))));
        }
        arr_19 [i_1] [i_1] = (min((min((((var_8 >= (arr_14 [i_1 - 1] [3] [i_1 - 1])))), (arr_6 [1] [1]))), (((-(arr_17 [10] [i_1 + 2]))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_23 [i_4] &= (((arr_20 [i_4] [14]) % (arr_20 [i_4] [i_4])));
        arr_24 [i_4] [i_4] = (((!var_10) ? (arr_21 [i_4] [i_4]) : (((arr_22 [i_4]) ? (arr_20 [6] [i_4]) : var_10))));
        arr_25 [1] = var_8;
    }
    var_20 = ((min(((var_11 ? var_6 : var_3)), ((var_4 ? var_6 : var_3)))) ^ var_5);
    var_21 = ((((max(((var_8 ? var_11 : var_3)), (79 * 79)))) * (min((var_8 / var_4), var_10))));
    var_22 = (max(82, 182));
    #pragma endscop
}
