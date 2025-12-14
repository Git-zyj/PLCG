/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((!var_7) << (((~var_6) - 9397934861800329139))));
    var_14 = (min(var_14, (((((((var_12 % var_2) - var_9))) ? ((var_0 * (var_0 * var_6))) : (!var_11))))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_15 ^= ((~((((var_9 ? var_9 : var_11)) ^ ((var_7 ? var_11 : var_2))))));
        arr_4 [i_0] [i_0 + 2] = ((arr_0 [i_0] [i_0]) + (max((arr_0 [i_0] [i_0 - 1]), var_0)));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 12;i_2 += 1) /* same iter space */
            {
                var_16 = ((((((arr_9 [i_0 + 1] [i_1] [i_2] [i_2]) ^ (arr_8 [i_0] [i_1] [i_2])))) ? (arr_3 [i_0] [i_2 + 1]) : -var_7));
                var_17 -= ((!var_3) ? (((var_11 ? var_2 : var_10))) : ((((arr_9 [i_0] [i_0] [i_2] [i_2 + 1]) + var_4))));
                var_18 = ((((arr_8 [i_0] [i_0] [i_2]) < (min((arr_8 [9] [i_1] [i_2]), var_1)))) ? var_4 : (((arr_0 [i_0] [i_1]) ? var_11 : ((var_10 ? var_8 : var_6)))));
            }
            for (int i_3 = 1; i_3 < 12;i_3 += 1) /* same iter space */
            {
                arr_12 [i_1] = var_3;
                var_19 = (arr_3 [i_0] [i_0]);
                var_20 = ((((var_0 | ((var_0 ? var_3 : var_0)))) == (((max(var_12, var_3))))));
            }
            /* vectorizable */
            for (int i_4 = 1; i_4 < 12;i_4 += 1) /* same iter space */
            {

                for (int i_5 = 2; i_5 < 10;i_5 += 1)
                {
                    var_21 = (~(arr_1 [i_4 - 1] [i_5 + 3]));
                    var_22 = (((arr_17 [i_5 + 1] [i_5 + 1] [i_4] [i_4 - 1]) ? (arr_0 [i_5 + 3] [i_5 + 3]) : var_0));
                }
                arr_18 [i_4] = ((var_5 >= (arr_14 [i_4] [i_1] [i_4 + 1])));
                arr_19 [i_1] &= var_1;
                arr_20 [i_4] [i_1] [11] = (arr_5 [i_0 + 1]);
                var_23 = (max(var_23, ((((arr_7 [i_4 + 1] [i_1] [12]) ? var_4 : (arr_7 [i_4 - 1] [i_1] [i_4 - 1]))))));
            }
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                arr_23 [i_0 - 1] = (((((var_12 ? (arr_22 [i_0 - 1]) : (arr_22 [i_0 + 1])))) ? var_9 : (((-(arr_22 [i_0 - 1]))))));
                var_24 ^= ((((arr_10 [i_0 + 2] [i_0 - 1]) ? (~var_4) : ((~(arr_8 [i_0] [i_0] [i_1]))))));
                arr_24 [i_0] [i_0] [i_0] = var_11;
            }
            arr_25 [i_0 + 1] [i_0 + 1] = (arr_11 [0] [i_1]);
        }
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_25 = ((((var_9 ? var_0 : var_8)) >> ((((((~(arr_28 [19] [18] [i_8]))))) - 773))));
            var_26 = (max(var_26, var_0));
        }
        var_27 = ((-((((((var_10 >= (arr_27 [i_7] [i_7])))) <= (var_3 || var_11))))));
    }
    for (int i_9 = 3; i_9 < 17;i_9 += 1)
    {
        var_28 = (min(var_28, (((((-(((arr_28 [i_9] [i_9] [i_9]) ? var_8 : var_7)))) + var_5)))));
        arr_33 [i_9] = (min((~var_11), (min((var_10 + var_7), (arr_31 [i_9 - 3])))));
    }
    var_29 = var_5;
    #pragma endscop
}
