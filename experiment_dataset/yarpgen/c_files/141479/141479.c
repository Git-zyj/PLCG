/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_10 *= (((arr_2 [i_0] [i_0]) ? var_4 : ((212 ? (arr_1 [i_0] [i_0]) : (arr_3 [i_0])))));

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            arr_6 [i_1] = (arr_1 [i_0] [i_0]);
            var_11 |= ((-((-(arr_2 [i_0] [i_1 + 1])))));
            arr_7 [5] = (arr_0 [i_0]);
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_12 [i_2] = ((var_7 ? 0 : (0 / var_9)));
        var_12 = ((((var_0 != (arr_11 [i_2] [i_2]))) ? ((-(arr_3 [1]))) : ((18 ? (arr_3 [i_2]) : (arr_10 [i_2] [i_2])))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_13 = 252;
            var_14 = (max(var_14, (!248)));
            var_15 = ((~(arr_8 [i_2] [i_3])));
            var_16 = (((((1 ? 3528316033 : 18))) ? var_4 : 247));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_17 += -123;
            arr_17 [i_2] [i_4] = arr_5 [i_2] [i_2];
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_18 = -var_4;
            arr_20 [i_5] = (arr_16 [i_5] [i_5]);
            arr_21 [i_2] [i_2] [i_5] = (((arr_4 [i_2]) << (arr_10 [i_2] [i_2])));
            var_19 = 1073741820;
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            arr_25 [i_2] [1] = (((((~(arr_4 [1])))) ? (arr_1 [i_2] [i_2]) : 0));
            var_20 = (arr_9 [i_2]);
            var_21 = (min(var_21, -766651267));
            var_22 = (max(var_22, 1));
            var_23 = (max(var_23, (arr_15 [i_2] [i_2] [i_2])));
        }
    }
    var_24 = ((var_9 ? var_7 : (((!19) ? 0 : (!var_2)))));
    var_25 = (min(var_25, (((~(((!(((0 ? 1 : var_7)))))))))));
    var_26 |= ((1 ? var_5 : (!-7)));
    var_27 = (max(var_27, (((var_5 >> ((((var_9 * ((1 ? 177 : var_6)))) - 28669)))))));
    #pragma endscop
}
