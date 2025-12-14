/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (max(((+(((-32767 - 1) ? var_10 : 511)))), (((var_0 ? var_4 : ((1 << (var_15 + 9039162033123678216))))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] = var_5;

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        arr_12 [9] [i_1] [i_1] [i_1 - 1] = var_7;
                        arr_13 [i_0] [i_1] [i_0] [i_2] [i_1] = ((!(((~(arr_2 [i_0] [i_0 - 1]))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {
                {
                    var_17 = (min(var_17, (arr_1 [i_4])));
                    var_18 = (max(var_18, ((((!(arr_17 [i_0] [i_4] [i_5 - 2])))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_19 = (((arr_20 [i_6]) ? (!1) : ((var_8 ? (arr_21 [18] [i_6]) : var_8))));

        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
        {
            var_20 = (!31053);

            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                var_21 = ((var_7 ? (arr_22 [i_6] [i_6]) : 22618));
                var_22 -= var_12;
                var_23 = (max(var_23, var_13));
                arr_27 [i_7] [i_7] [i_7] = (var_5 ? (var_2 == var_3) : (arr_20 [i_6]));
            }
            var_24 = (max(var_24, (((+((2147483647 ? (arr_21 [i_6] [i_7]) : (arr_19 [i_6]))))))));
        }
        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
        {
            var_25 = (max(var_25, (((((((arr_22 [i_6] [i_6]) ? 3301919405 : var_2))) ? (arr_26 [6]) : (((1 ? var_8 : 31839))))))));
            arr_30 [i_9] = (((arr_26 [i_9]) ? (arr_26 [i_9]) : (arr_26 [i_9])));
        }
        var_26 = (arr_20 [i_6]);
    }
    #pragma endscop
}
