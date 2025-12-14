/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = ((~(arr_1 [7])));
        var_13 = (arr_0 [1]);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_14 += (min(((((arr_4 [0] [6]) && (arr_4 [i_1] [4])))), (arr_2 [0])));
        arr_5 [i_1] = (max((arr_2 [i_1]), (((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_2 [i_1])))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_16 [1] [i_3] [2] = var_2;
                            var_15 = arr_6 [i_5];
                            arr_17 [i_5] [i_3] [1] [0] [i_3] [i_2] = ((+(max((arr_4 [i_4 - 1] [i_3]), (arr_4 [i_4 - 1] [i_3])))));
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    arr_22 [1] [5] [2] [i_3] = ((+(min((arr_10 [i_2]), (arr_10 [i_3 - 1])))));
                    var_16 = (((arr_8 [i_3 - 1] [5]) & ((min(var_7, (arr_8 [i_3 - 1] [16]))))));
                    arr_23 [9] [9] [i_3 + 1] [i_3] = (((arr_12 [i_3 + 1] [1] [i_3 + 1] [i_3 + 1]) >> ((((~(max((arr_19 [i_2] [11] [16]), (arr_7 [i_6]))))) + 4158065750860415717))));
                    var_17 = ((-((-(arr_14 [i_2] [i_3 - 1] [i_6])))));
                    var_18 = (((~var_5) ? (((min((arr_11 [1] [4] [i_3]), (!var_11))))) : ((var_6 ? (arr_10 [i_3 + 1]) : (min((arr_10 [1]), (arr_9 [i_2] [1] [i_6])))))));
                }
            }
        }
    }
    var_19 = (((((var_8 ? (~var_0) : var_5))) ? (~var_6) : (max((~var_6), ((max(var_4, var_0)))))));
    #pragma endscop
}
