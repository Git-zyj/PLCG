/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_16);

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = 1;
        var_18 = var_14;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_19 = (arr_2 [4]);
        var_20 = ((((min((arr_5 [i_1]), (arr_5 [i_1])))) ? (((arr_1 [i_1]) / (arr_5 [i_1]))) : var_3));
        var_21 = ((min((arr_1 [i_1]), (arr_1 [i_1]))));
        var_22 = (min((((var_10 && ((((arr_0 [3]) ? var_8 : (arr_6 [5]))))))), (arr_4 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [4] = ((((!(arr_6 [i_2]))) && (arr_6 [i_2])));

        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            arr_12 [i_3] [i_2] [i_2] = (-22 % var_7);
            arr_13 [i_2] [i_3] [i_2] = (((arr_10 [i_3 - 3] [i_3] [i_2]) ? -var_3 : (arr_11 [i_3 - 3] [i_3 - 1] [10])));
            var_23 = (max(var_23, (arr_1 [i_3 + 1])));

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                var_24 -= ((!(arr_0 [i_3 - 2])));
                var_25 = (((arr_5 [i_3 - 2]) ? (arr_5 [i_3 - 3]) : (arr_5 [i_3 + 1])));
            }
        }
        var_26 = (arr_14 [i_2] [i_2] [i_2] [i_2]);
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_27 += ((90 ? (arr_18 [i_5]) : (arr_16 [i_5] [i_5])));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    var_28 = ((-var_5 ? (arr_24 [4] [i_6] [20]) : (((!((max(20875, (arr_17 [i_5])))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_29 = (((+(((arr_17 [i_9]) ? var_12 : (arr_16 [i_9] [i_7]))))));
                                var_30 = var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 = ((!(~var_11)));
    var_32 = max(var_3, (max(20896, var_5)));
    #pragma endscop
}
