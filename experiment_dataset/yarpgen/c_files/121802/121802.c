/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((min(-var_9, (1 * -1476172433297532143))) - ((-(min(1, var_6))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (min(var_10, (min((1 >= 32761), (arr_1 [i_0])))));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 12;i_1 += 1) /* same iter space */
        {
            var_16 = (max(var_16, (arr_0 [i_0])));
            var_17 = ((var_2 ? (((arr_0 [i_0]) ? var_8 : (arr_0 [i_1 - 1]))) : var_14));
            var_18 = (((((var_13 + 2147483647) >> (var_1 - 11317)))) ? (((var_9 ? var_14 : var_3))) : (arr_4 [i_0] [i_0]));
            var_19 += (((arr_4 [i_0] [i_0]) ? (((3359923048 ? 1 : 28646))) : var_0));
        }
        for (int i_2 = 3; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_20 += ((var_13 ? var_11 : var_10));
            var_21 = ((2034551964 ? ((((min(var_0, 1))) ? ((-(arr_4 [i_0] [i_2 - 2]))) : 0)) : 2142476591));
        }
        /* vectorizable */
        for (int i_3 = 3; i_3 < 12;i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_20 [i_4] [i_0] [i_4] [i_5] [i_5] = (((((var_7 ? var_10 : (arr_12 [i_6])))) ? (((((arr_1 [10]) || var_3)))) : (((arr_9 [i_6] [2]) ? (arr_8 [i_0] [i_0] [i_4]) : var_4))));
                            var_22 = (max(var_22, ((((arr_5 [i_5] [i_4]) ? var_6 : var_7)))));
                            arr_21 [i_6 - 1] [i_6] [i_4] [i_0] [i_4] [i_0] [i_0] = ((((((arr_13 [i_4]) ? (arr_19 [i_4] [i_4] [5] [i_4] [i_4] [i_4] [i_4]) : var_1))) != var_6));
                        }
                    }
                }
            }
            arr_22 [i_3] [i_0] [i_0] = ((((var_5 ? var_5 : var_0))) ? ((var_14 ? var_9 : (arr_9 [3] [i_3]))) : ((var_4 ? var_8 : var_9)));
        }
        for (int i_7 = 3; i_7 < 12;i_7 += 1) /* same iter space */
        {
            arr_27 [i_7] [i_7] [12] = (((((~var_12) ? (((arr_23 [i_0]) ? var_8 : var_7)) : ((min(var_12, (arr_13 [6]))))))) ? (((0 ? -44 : -20))) : (min(((min(var_12, var_13))), (min(var_4, var_9)))));
            arr_28 [i_0] [i_7 - 1] [8] = (min(var_12, (var_3 > 37785)));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    {
                        var_23 &= (min((min(3238385079, var_13)), (((!(((var_7 ? var_9 : var_0))))))));
                        var_24 = (((((((((var_1 ? var_13 : var_12))) >= var_0)))) - var_9));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        arr_37 [i_10] = (((var_5 || var_13) ? var_7 : (((arr_15 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) ? var_12 : var_7))));
        var_25 *= (538850428 % 32);
    }
    #pragma endscop
}
