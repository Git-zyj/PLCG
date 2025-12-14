/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (((((var_7 ? ((928202849 ? var_2 : -31932)) : 24))) ? (var_9 > var_2) : (((var_4 >= (!var_2))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = ((-(arr_0 [i_0] [6])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = (!41);
                    arr_8 [14] [i_2] [2] [i_2] = (((~1) || var_8));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = (var_7 | var_6);
                                var_15 = (arr_10 [11] [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1]);
                                arr_16 [i_0] [i_0] = 1;
                                var_16 = var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 6;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {
            var_17 = 1;
            var_18 = (min(var_18, ((((arr_2 [i_6] [i_6] [i_6]) ? var_3 : (arr_9 [i_6 + 1]))))));
            var_19 = (max(var_19, (min(((max(((min(32767, var_3))), ((var_9 ? 22 : var_3))))), (max(var_8, (min(var_3, (arr_19 [i_5])))))))));
            var_20 = var_8;
            arr_22 [i_5 + 2] [i_5 + 2] [i_6] = (min(var_2, -22));
        }
        arr_23 [i_5] = ((((min(227, var_7))) || (!var_4)));
        var_21 = var_7;
        var_22 = (arr_7 [i_5 - 1] [7] [5]);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                {
                    var_23 = (((((((max(54693, 13222))) / var_5))) || var_1));
                    var_24 = (arr_14 [i_5 - 2]);
                    var_25 = (((arr_25 [i_5 + 2] [i_5 - 2] [i_5 + 3]) * (((((!(arr_5 [1] [i_7])))) - ((~(arr_18 [i_7] [i_8])))))));
                    var_26 = (min(46, 179));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                arr_33 [3] [i_8] [i_8] [i_9] [i_10] [i_8] = ((((((var_5 / var_2) >= (((arr_6 [i_8] [i_9] [12]) | (arr_13 [i_5] [i_5] [i_5 + 4] [i_5 + 2] [i_5] [i_5] [i_5]))))))) > (min(38253, ((5011690261773850686 ? (arr_18 [i_9] [4]) : -313369218764819339)))));
                                var_27 = ((~((~(arr_18 [i_5 - 2] [i_5 + 2])))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_11 = 2; i_11 < 11;i_11 += 1)
    {

        for (int i_12 = 3; i_12 < 10;i_12 += 1)
        {
            arr_39 [i_11] [i_11] &= (min((max(var_8, (arr_15 [i_11 - 1] [i_11 - 1] [i_12 - 2] [i_12] [12] [i_12]))), (((min(1, var_0))))));
            arr_40 [i_12] = (!-1);
        }
        var_28 = (((~((min(var_3, var_4))))));
        arr_41 [i_11] = (928202835 + 39787);
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 10;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 11;i_14 += 1)
            {
                {
                    arr_48 [i_14] [i_13] [i_13 - 1] = ((((18446744073709551615 ? (45678 < 15632881006597836088) : (arr_0 [i_13 - 1] [i_13 + 1]))) & var_9));
                    var_29 = ((+(min((arr_5 [i_13 - 1] [i_13]), (arr_3 [i_13 + 2] [i_13] [i_13])))));
                }
            }
        }
        arr_49 [8] [i_11] = var_0;
    }
    var_30 = var_9;
    var_31 = var_8;
    #pragma endscop
}
