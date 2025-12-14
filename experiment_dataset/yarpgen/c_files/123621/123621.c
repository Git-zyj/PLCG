/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_12 = (min((arr_4 [i_1 + 2]), (min((arr_4 [i_1 + 2]), var_3))));
                    arr_7 [i_0] [i_1] = var_6;
                }
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_13 = var_4;
                            var_14 = ((var_10 ? (!-1) : -2340226535392261584));
                        }
                    }
                }

                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    var_15 = (max((max(-30555, -2929382486789394576)), (arr_17 [i_0] [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_25 [i_0] [i_1] [i_0] [i_6] [12] [i_7] |= var_9;
                                var_16 |= var_7;
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    arr_29 [8] [i_0] [i_8] |= (max((((+((var_6 ? (arr_26 [i_8]) : (arr_13 [i_0] [i_8] [i_0] [i_0])))))), var_7));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                arr_37 [i_1] [i_1] [i_9] [i_8] [i_1] [i_0] = (min((max(31729, ((var_2 ? var_3 : var_9)))), (arr_28 [i_0] [i_1])));
                                arr_38 [i_0] [i_1] [i_8] [5] = min((((max((arr_32 [i_8] [i_10] [i_10] [i_9]), (arr_18 [1] [2] [i_8] [0]))))), ((var_3 ? (min(var_2, var_8)) : 30573)));
                                var_17 ^= var_1;
                            }
                        }
                    }
                }
                var_18 = (((-(arr_23 [i_0] [i_0] [i_0] [i_1] [i_1 - 1]))));
            }
        }
    }

    /* vectorizable */
    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
    {
        arr_43 [i_11] = (var_1 ? (arr_22 [20] [i_11] [i_11] [i_11] [i_11]) : (arr_22 [2] [i_11] [14] [2] [i_11]));
        arr_44 [i_11] = 7218512581861617863;
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
    {
        var_19 = ((!(arr_12 [i_12])));
        var_20 = var_4;
    }
    #pragma endscop
}
