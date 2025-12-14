/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((var_7 % var_5) ? ((min(-111, var_1))) : var_7)), ((((max(var_8, var_11))) ? var_5 : var_11))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_15 -= (min((((arr_0 [i_0 - 1] [i_0 - 1]) & var_0)), (arr_3 [i_0])));
        arr_4 [i_0] = (max((((arr_2 [i_0 - 1]) ? (arr_2 [i_0 + 1]) : var_12)), (((var_7 >= (arr_0 [i_0 + 1] [i_0]))))));
        var_16 = ((!(((((min((arr_1 [i_0]), (arr_1 [i_0])))) - var_3)))));
        var_17 = (min(var_17, ((((1 ? var_0 : var_1))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_18 = (min((arr_1 [i_1]), -var_5));
        var_19 = (min(65, var_5));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                {
                    var_20 -= (((var_1 & 1) ? (((((arr_10 [i_3 + 2] [i_2] [i_1]) ? 1 : var_5)))) : ((((((arr_3 [i_2]) ? var_3 : var_2))) ? (arr_11 [i_3 + 2] [i_3 - 1] [i_3 + 2]) : ((min(var_10, var_2)))))));
                    var_21 = ((((!(((var_3 ? var_2 : 1)))))) < var_12);
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] [i_4] &= var_1;
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_24 [i_4] [i_5] [3] [i_5 + 4] = var_2;
                    var_22 = (max(var_22, (((~((((min((arr_18 [i_6] [1] [8]), (arr_7 [i_5])))) | ((max(var_12, var_0))))))))));
                    var_23 = ((1 * (5 > var_6)));
                    var_24 = (min((min((-99 + 1), -122)), ((max((arr_7 [i_5 - 1]), (arr_7 [i_5 - 2]))))));
                    arr_25 [1] [i_5] [i_6] = ((-((((arr_10 [i_5] [i_5 + 4] [i_5 + 4]) == -var_9)))));
                }
            }
        }
        var_25 = (((((arr_6 [i_4]) <= var_3)) ? ((var_7 | (arr_6 [i_4]))) : (arr_6 [i_4])));
        var_26 -= (var_4 > (arr_14 [i_4] [8] [i_4]));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                var_27 = ((-((min((arr_28 [i_7]), (arr_29 [i_7]))))));
                var_28 -= -var_4;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                {
                    var_29 = (min((((arr_37 [0] [i_10]) ? (arr_33 [i_9] [i_11]) : var_9)), ((+(((arr_38 [i_10] [i_10]) * (arr_36 [i_10] [i_11] [i_11])))))));
                    var_30 = (min(var_30, ((min((min((arr_36 [i_11] [i_10] [i_11]), (((arr_38 [i_11] [i_11]) ? var_5 : (arr_33 [i_11] [i_9]))))), ((((-122 ? (arr_35 [i_9] [i_11] [i_11]) : var_9)))))))));
                }
            }
        }
    }
    var_31 = -var_6;
    #pragma endscop
}
