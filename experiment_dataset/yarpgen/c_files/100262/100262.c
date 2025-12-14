/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (min((min((arr_0 [16]), (arr_3 [16] [11] [i_1]))), ((((32759 ^ 32766) ? (arr_0 [i_1]) : -32754)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_16 = (arr_3 [i_3] [i_3] [i_3]);
                            arr_11 [18] = (((((arr_6 [i_1] [i_1] [i_0]) ? (arr_2 [i_1] [i_0]) : ((32759 ? (arr_10 [i_3] [0] [i_0]) : -32766)))) * (!-32760)));
                        }
                    }
                }
                arr_12 [10] [i_0] = (((((min(-var_7, (arr_2 [i_1] [i_0]))) + 2147483647)) >> (-32748 + 32763)));
            }
        }
    }

    for (int i_4 = 2; i_4 < 22;i_4 += 1)
    {
        var_17 += (((((~(arr_14 [13]))) | ((0 >> (-4918780001230837452 + 4918780001230837476))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        arr_24 [i_5] [12] [i_6] [1] = (-(((!(arr_1 [i_4])))));
                        arr_25 [i_5] [i_5] [i_6] [i_7] = (((!4) ? ((~(arr_23 [i_4 - 2] [i_4]))) : (((!(arr_6 [i_4 - 2] [2] [9]))))));
                        var_18 = ((!((max(var_14, (arr_23 [i_5] [8]))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                {
                    var_19 = -3640767425637824979;
                    var_20 = (max(var_20, var_11));
                    arr_30 [18] = (((arr_16 [9]) ? var_15 : (max((min(var_10, (arr_8 [5] [i_8] [i_9] [i_9]))), -0))));
                    var_21 = ((((min((((arr_21 [i_9]) ? -32763 : var_14)), (((arr_14 [i_9]) ? var_6 : (arr_10 [16] [24] [i_9])))))) ^ (((arr_18 [i_8] [i_8]) << (((max(var_12, (arr_18 [i_8] [3]))) - 1888360558700191752))))));
                }
            }
        }
    }
    #pragma endscop
}
