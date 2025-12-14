/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_2;
    var_12 = var_1;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_13 = (min(var_13, (((arr_0 [2]) ? (arr_2 [6]) : (((arr_1 [12] [i_0 + 1]) ? var_5 : (((!(arr_2 [0]))))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
            {
                arr_7 [2] [i_0] = (arr_5 [i_0] [0]);
                arr_8 [1] [i_0] [i_0] [1] = (((arr_0 [i_0]) ? (var_1 ^ var_4) : 0));
            }
            for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
            {
                var_14 *= (((arr_1 [4] [i_1]) && (arr_9 [10] [i_1] [4] [4])));
                arr_11 [8] [1] &= ((-(((arr_5 [0] [i_3]) ? var_5 : (arr_1 [10] [12])))));
                var_15 = (arr_0 [i_0]);
                arr_12 [i_0] = (arr_6 [1] [5] [i_0] [i_0]);
            }
            for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
            {
                var_16 = (max(var_16, var_7));
                arr_15 [i_0] = (((arr_14 [i_0] [i_0 + 1] [i_0]) | (arr_3 [i_0] [i_1])));
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
            {
                var_17 = (min(var_17, 1));
                var_18 = (var_2 ? var_2 : (arr_4 [5] [7] [12]));
                var_19 = (min(var_19, (arr_18 [8] [i_1])));
                arr_20 [i_5] [i_0] [1] = ((((0 != (arr_13 [i_0] [i_1] [1]))) ? (arr_4 [9] [i_0 + 1] [i_5]) : ((var_10 | (arr_19 [i_5] [11])))));
            }
            var_20 = (var_3 | var_2);
            arr_21 [i_0] [i_0] = (arr_19 [i_0 + 1] [i_0 - 1]);
        }
        arr_22 [i_0] = var_10;
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_21 = (min(var_21, (((((((((-26 ? (arr_25 [1] [i_6]) : (arr_23 [21])))) ? var_0 : ((1 ? var_7 : (arr_23 [6])))))) ? (min((min(var_10, (arr_24 [20] [i_6]))), -1734642120)) : (((var_9 ? var_6 : var_5))))))));
        var_22 = ((!(43 && 31925)));
        var_23 = (min(var_23, ((min((((!((min((arr_24 [i_6] [i_6]), var_2)))))), (((((var_4 ? var_3 : var_0))) ? var_3 : var_4)))))));
        var_24 *= (1948644776 ? 19078 : (min(var_10, 324611343)));
    }
    var_25 = var_8;
    #pragma endscop
}
