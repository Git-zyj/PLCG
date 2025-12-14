/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (!-2047);
    var_20 = ((((min(var_10, 2047))) ? var_17 : var_11));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 4; i_1 < 23;i_1 += 1) /* same iter space */
        {
            var_21 = (min(var_21, (63478 - 2039)));
            arr_7 [i_1] [5] [i_1] = (((arr_1 [i_0 - 1]) ^ (arr_5 [i_0 - 1])));
        }
        for (int i_2 = 4; i_2 < 23;i_2 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_22 = (min(var_22, (arr_10 [i_0] [i_0] [i_0 + 2])));
                            arr_17 [i_0] [i_0] [i_0] [i_3] [15] [i_0] = 2063;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        {
                            arr_24 [0] [i_3] [i_6] [20] = ((!(arr_1 [15])));
                            arr_25 [i_3] [i_2] [0] [i_6] [i_7] = ((~(arr_16 [i_3] [i_0 - 1] [i_2] [i_2 - 1] [i_6 - 2] [i_7] [i_7 - 1])));
                            var_23 = (max(var_23, var_12));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                arr_28 [9] [14] [i_2] [i_8] = var_0;
                arr_29 [i_0] [1] = ((63472 ? (arr_27 [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0 + 1]) : (arr_15 [i_0 + 2])));
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        arr_34 [i_10] [i_9] [i_2] [12] [i_10] = (arr_14 [i_10] [i_9] [24] [i_10]);
                        var_24 = (((((((arr_6 [i_10]) ? (arr_15 [9]) : (arr_9 [7]))) & (2043 && 63478))) > ((((2074 + 63492) / (((arr_32 [i_0]) ? (arr_12 [i_0] [i_10] [1]) : 63491)))))));
                    }
                }
            }
        }
        arr_35 [13] = var_10;
    }
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        var_25 = var_11;
        arr_39 [18] [9] = (arr_2 [i_11]);
        var_26 = 63509;
        arr_40 [i_11] = 63478;
    }
    for (int i_12 = 0; i_12 < 0;i_12 += 1)
    {
        var_27 |= (((((var_0 % 63451) >= (arr_2 [i_12]))) ? 63480 : ((63492 ? 63483 : 63500))));
        arr_43 [i_12] = (((63471 / var_10) < (var_3 - 2049)));
    }
    for (int i_13 = 0; i_13 < 25;i_13 += 1)
    {
        var_28 = (max(var_28, (arr_19 [6] [1] [1] [i_13])));
        arr_46 [i_13] = (((min(63483, (max(63486, var_12))))));
    }
    #pragma endscop
}
