/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = var_0;
        arr_4 [i_0] [i_0] = (arr_2 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((((arr_2 [i_1] [i_1]) ? var_14 : (var_8 && var_9))));
        var_19 = -29;
        arr_9 [i_1] = -29;
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_20 |= (!-23884);
                arr_17 [i_3] [i_3] [i_2] = -29;
                var_21 -= ((var_8 >> (((((-29 > var_9) ? var_3 : var_11)) - 1891022364))));
            }
        }
    }

    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_22 = (max(var_22, (((+(((-var_15 && ((((arr_19 [i_4]) + 44558)))))))))));

        for (int i_5 = 3; i_5 < 15;i_5 += 1)
        {
            arr_22 [10] [i_5] [i_5] = (((max((arr_21 [i_5] [i_5]), var_11)) / var_5));
            var_23 = (arr_18 [i_5]);
            arr_23 [i_5] = (((((~29) | var_3)) * (((((((arr_18 [10]) / (arr_20 [i_4] [i_4] [3])))) && (arr_20 [i_4] [i_5 + 3] [i_5]))))));
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {

            /* vectorizable */
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                var_24 = (max(var_24, (arr_19 [i_4])));
                arr_28 [4] [i_7] = var_15;
            }
            arr_29 [i_4] [14] = (var_18 ? -32754 : (((arr_25 [i_6]) ? (arr_25 [i_6]) : var_4)));
        }
        arr_30 [i_4] [0] |= ((min(((1 ? var_1 : -1)), ((max(var_9, -5158))))));
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        var_25 = ((-var_9 - (((arr_33 [i_8]) / ((max((arr_31 [i_8] [i_8]), 1)))))));
        arr_34 [i_8] = ((((((arr_33 [3]) ? (((arr_31 [1] [i_8]) ? (arr_31 [i_8] [i_8]) : 122)) : (((!(arr_31 [i_8] [i_8]))))))) / (arr_32 [i_8])));
        var_26 += 0;
        var_27 -= 4294967277;
        arr_35 [i_8] = var_16;
    }
    #pragma endscop
}
