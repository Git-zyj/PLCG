/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((max(((min(1, var_13))), (max(var_2, 1)))), var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [1] [1] = 0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = var_11;
                                arr_14 [i_4] [5] [5] [i_2] [12] [12] = var_8;
                                arr_15 [i_0] [0] [i_2] [6] [i_0] = ((max(var_14, var_11)));
                                var_21 = (((var_17 & var_13) ? (((((arr_0 [4] [10]) || var_7)))) : ((31 >> (var_0 - 80)))));
                                var_22 = var_1;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_23 = (max(((((arr_0 [i_0] [i_0]) & (arr_0 [i_0] [i_1])))), ((var_10 ? var_7 : var_3))));
                                arr_21 [i_0] [0] [0] [0] [7] = (var_6 && 0);
                                arr_22 [14] [i_1] [10] [i_6] [i_1] [i_0] [2] |= (min((var_10 % var_18), var_5));
                                arr_23 [i_0] [12] [i_1] [12] [1] [1] [i_6] = (((((((var_17 >> (var_14 - 6212798361962352786)))) ? (var_17 < var_9) : (arr_3 [i_6] [i_2]))) / var_11));
                            }
                        }
                    }
                    arr_24 [i_1] = (max((((arr_5 [i_2] [i_2] [4] [5]) ? (arr_5 [i_0] [i_0] [i_1] [i_2]) : (arr_6 [8] [0] [i_2]))), (((var_9 || var_12) + (arr_9 [i_0])))));
                    var_24 = ((+(((arr_20 [i_0] [14] [i_1] [4]) ? (arr_20 [1] [i_1] [i_1] [i_0]) : 252))));
                }
            }
        }
    }
    #pragma endscop
}
