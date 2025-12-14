/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = ((-(arr_4 [i_2 + 2] [i_0] [i_0])));
                    var_14 -= (!1403723682);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_15 = (((arr_8 [i_3] [i_3]) ? (arr_7 [i_3]) : (arr_8 [i_3] [i_3])));
        var_16 = ((max((!-6526), (arr_8 [i_3] [i_3]))) * (!var_5));
        var_17 -= (max((arr_8 [i_3] [i_3]), 10539924128759668876));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {

                        for (int i_7 = 3; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            var_18 = ((~(arr_14 [23] [20] [20] [i_7 - 2] [i_7 - 1] [i_7 - 2])));
                            var_19 = (~var_11);
                        }
                        for (int i_8 = 3; i_8 < 24;i_8 += 1) /* same iter space */
                        {
                            var_20 = ((!(arr_12 [i_3] [9] [i_8 - 2] [i_6])));
                            arr_23 [i_3] [i_3] [i_4] [i_4] [i_4] [i_6] [i_4] = ((-((2891243613 ? (((arr_15 [i_3] [i_4]) ? (arr_10 [0] [0] [i_8]) : var_4)) : (arr_8 [i_5] [i_3])))));
                            var_21 = (arr_22 [i_3] [i_4] [i_5] [i_3]);
                        }
                        var_22 = ((((((arr_14 [i_3] [i_3] [i_3] [1] [i_3] [i_3]) ? var_12 : (arr_21 [i_3] [i_4] [i_5] [i_6] [i_6] [i_3])))) ? (arr_8 [i_3] [i_4]) : ((-101 ? 34359738367 : 1881081151))));
                        var_23 = max(((((arr_15 [i_4 - 1] [i_4]) ^ (arr_17 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])))), (((arr_15 [i_4 - 1] [i_3]) ? var_2 : (arr_15 [i_4 - 1] [i_3]))));
                        var_24 = (((arr_18 [i_6] [i_5] [1]) | ((~(arr_7 [i_4])))));
                    }

                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        var_25 = (((!(((2147483647 ? 2413886144 : -9646))))) ? ((((arr_26 [4] [i_4 - 1] [i_4] [i_4 - 1] [i_3] [i_3]) ? var_10 : 32767))) : ((+(max((arr_24 [i_3] [i_3] [i_3] [i_3]), 6017364035879799647)))));
                        var_26 = (arr_21 [i_3] [i_4] [i_5] [i_5] [i_9] [i_9]);
                        var_27 = ((min(((arr_13 [i_3] [i_4] [13] [i_5]), (((-(arr_14 [i_3] [i_3] [i_4] [24] [i_5] [i_9]))))))));
                    }
                    arr_28 [i_5] [8] [1] [8] = (arr_21 [i_3] [i_3] [i_3] [i_4] [i_5] [i_3]);
                }
            }
        }
        var_28 = var_7;
    }
    #pragma endscop
}
