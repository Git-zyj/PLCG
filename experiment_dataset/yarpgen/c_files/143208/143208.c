/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_10 = (((~(arr_3 [i_0 + 1] [i_0 + 1]))) | (arr_6 [i_0 - 2] [i_1] [i_2] [i_0]));

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_11 = ((-(((~(arr_4 [i_0] [i_0] [i_3]))))));
                        var_12 = ((((((arr_4 [i_2] [i_2] [i_2]) != ((0 ? (arr_4 [i_0 + 2] [i_0] [i_0 - 2]) : 9857))))) <= (((arr_5 [11] [i_0 - 1] [i_0 - 3]) ? (arr_5 [i_1] [i_0 - 1] [i_0]) : (arr_5 [i_0] [i_0 - 1] [i_0])))));
                    }

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_13 = ((((min(((var_5 ? var_6 : 2136533375)), ((min(211, (arr_4 [i_4] [i_1] [i_0]))))))) || ((((var_3 ? -2136533374 : 43203))))));
                        arr_12 [10] [i_4] [i_1] [i_1] [i_0] [i_0] |= (((arr_4 [i_2] [i_1] [i_0]) ? (((((arr_3 [i_1] [i_0 - 2]) * (arr_5 [i_0] [i_0] [i_4]))) / ((min(5653013047006999391, var_6))))) : (max((arr_1 [i_4]), ((min((arr_9 [i_1] [14] [i_1]), -1981265805)))))));
                    }
                }
            }
        }
    }
    var_14 = (min(var_14, var_7));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 21;i_7 += 1)
            {
                {
                    arr_21 [i_5] [1] [i_6] [i_7] = (((((((((arr_18 [i_5]) ? var_3 : (arr_20 [16] [i_6] [i_7])))) ? (((arr_15 [i_5] [i_6]) ? (arr_20 [i_5] [i_5] [i_5]) : var_0)) : ((((arr_15 [1] [i_6]) ? (arr_14 [i_6]) : var_4)))))) ? (~-427106489) : ((+(((arr_14 [i_5]) ? (arr_14 [i_5]) : var_2))))));
                    arr_22 [i_5] [i_5] [i_7] [i_7] = var_9;
                    var_15 = (((~17) ? ((((arr_20 [i_7] [i_5] [i_5]) ? (arr_17 [i_5]) : ((-(arr_20 [i_5] [i_6] [i_7 - 2])))))) : 5653013047006999391));
                }
            }
        }
    }
    #pragma endscop
}
