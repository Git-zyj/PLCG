/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = (min((((arr_3 [i_1 + 1] [i_1 - 1]) ? var_9 : (arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 1]))), (max((arr_3 [i_1 + 1] [i_1 - 1]), 3066129409))));
                arr_6 [1] [1] [13] = 31;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_12 [10] [i_0] = 12902;
                            arr_13 [i_3] = (((max((max(767006550, (arr_7 [8] [i_2] [5]))), (((var_8 != (arr_2 [i_1])))))) >= var_13));
                        }
                    }
                }
            }
        }
    }
    var_20 = var_9;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            {
                arr_20 [i_4] [i_5] = (max(((31 << (var_18 - 3644163585))), ((5918 ? -50 : 1959310310))));
                arr_21 [i_4] = ((+(((((arr_17 [i_4] [1] [i_4]) ? (arr_9 [i_4] [i_4] [6] [i_4]) : -8833443938503561655)) >> (((min(20939, 365884276)) - 20908))))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 8;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 10;i_7 += 1)
                    {
                        {
                            arr_26 [i_4] [i_5] [i_5] [i_5] [i_5] [i_7 + 1] = (((17938 || var_14) ? (!65) : ((((arr_8 [i_4] [i_5] [i_6 + 1] [i_7]) <= (arr_8 [12] [i_6 - 1] [i_5] [i_4]))))));
                            arr_27 [i_4] [i_6] [i_4] [i_7] = (((!9041) ? (min(var_9, (arr_16 [i_4]))) : (((min(((max((arr_11 [2] [i_4]), (arr_3 [i_7 - 1] [i_7 - 1])))), 41274))))));
                            arr_28 [i_6] [i_5] [i_5] [i_5] = var_10;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                {
                    arr_37 [14] = var_4;
                    arr_38 [3] [1] = ((-((~(max((arr_30 [i_8] [i_10]), var_9))))));
                    arr_39 [i_8] [4] [i_8] = (arr_32 [i_8] [i_9] [4]);
                }
            }
        }
    }
    var_21 = (((~var_10) ? var_14 : var_15));
    #pragma endscop
}
