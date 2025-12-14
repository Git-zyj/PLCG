/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = (max(var_11, ((((((((min(var_7, (arr_3 [i_1])))) ? ((((arr_4 [i_0]) ? 857587428 : 39846))) : var_7))) ? (((((var_9 ? -489419938 : (arr_5 [i_0] [i_1])))) ? (arr_0 [5] [5]) : (arr_5 [i_0] [i_1 + 1]))) : 2018194834)))));
                arr_6 [i_0] [i_1] [i_1] &= (((4194304 - (arr_0 [i_0 + 2] [i_1 - 1]))) + (arr_2 [i_0] [i_1]));
                arr_7 [i_0] = var_7;
                var_12 = var_3;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    var_13 += (((min(var_0, ((-6813922947703535315 ? var_2 : (arr_15 [i_2] [i_2] [i_2] [i_4]))))) == ((((-8639911827788077142 && (arr_14 [2] [2] [i_3])))))));
                    var_14 = ((arr_16 [i_2]) ? (((57596 & (((var_4 + 2147483647) >> (var_10 + 1314462520)))))) : (((arr_10 [i_2] [i_3]) ? (arr_11 [i_2] [i_2]) : ((var_8 ? (arr_10 [i_2] [19]) : (arr_10 [i_2] [i_2]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                arr_24 [i_5] = arr_2 [i_5 + 1] [1];
                arr_25 [i_5 - 2] [i_5 - 2] [i_5 - 2] = ((-((~(arr_14 [i_5 - 2] [i_5 - 1] [12])))));
            }
        }
    }
    #pragma endscop
}
