/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_16 = ((-var_6 ? 148194150 : var_4));
        var_17 = (min(var_17, ((((0 < (arr_2 [i_0 + 1] [i_0 + 1]))) ? ((((((-(arr_1 [i_0 + 1])))) * ((var_9 ? 0 : (arr_1 [i_0])))))) : (((((var_4 ? 0 : var_8))) ? ((0 ? (arr_0 [i_0] [i_0]) : var_5)) : (arr_2 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 = ((((((arr_1 [i_0 + 1]) ? var_8 : (((arr_5 [i_1]) ? 12302 : 26))))) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_1] [i_0 + 1])));
                        var_19 &= (min(0, (arr_8 [i_0] [i_0] [i_0] [i_0 + 1] [i_1] [i_1 - 2])));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        var_20 = (max(var_20, (arr_5 [i_2])));
                        var_21 = ((arr_11 [i_1] [i_1 - 2]) ? (arr_2 [i_1 - 1] [i_1]) : 4294967289);
                        arr_13 [i_1] = (((var_7 <= var_10) ? (arr_10 [i_0] [i_1 - 3] [i_2] [i_4] [i_1]) : (arr_8 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_1 - 1] [i_4 - 1])));
                    }
                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        var_22 = (min((arr_11 [i_1] [i_2]), ((var_11 >> (-55 + 80)))));
                        var_23 = (arr_4 [i_0] [i_1 + 1] [i_2]);
                        var_24 = var_11;
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_21 [6] [6] [i_2] [i_1] [5] = (((arr_6 [i_0] [i_2] [i_1] [i_7]) & var_14));
                                arr_22 [i_0 + 1] [i_1] [i_2] [i_1] [i_2] [i_6] [i_7] = (max((min(((var_5 * (arr_14 [i_1 - 1] [i_1] [i_6] [i_7]))), (min((arr_17 [i_7] [i_1] [i_0 + 1] [i_1] [i_0 + 1]), 4779913508036060791)))), 200));
                            }
                        }
                    }
                    arr_23 [i_1] = var_8;
                    var_25 = (max(var_25, (((960 + (min(13666830565673490802, (arr_5 [i_2]))))))));
                }
            }
        }
    }
    var_26 = var_12;
    var_27 = (min(58339, ((max((!var_14), var_9)))));
    #pragma endscop
}
