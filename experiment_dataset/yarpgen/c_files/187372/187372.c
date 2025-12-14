/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = 1;
                    var_15 = (((2806532375317173364 ? (arr_4 [i_0] [i_0]) : ((var_6 ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
                    arr_7 [i_1] [i_1] = ((((((arr_4 [i_0] [i_1]) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : 64))) ? (((arr_4 [i_0] [i_1]) ? (arr_4 [i_0] [i_1]) : (arr_4 [i_0] [i_2]))) : (((!(arr_5 [i_0] [i_0] [i_1] [i_2]))))));
                    var_16 = (((arr_5 [i_2] [i_2] [i_2] [i_2]) ? (((max(0, 1667710112)))) : (((var_11 ? 15 : 1)))));
                }
            }
        }
    }
    var_17 = var_11;

    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_18 = (53463 % 15829381227579973146);
        var_19 = ((((max((min(var_10, 18446744073709551600)), -1))) ? ((((arr_8 [i_3]) != (arr_8 [i_3])))) : (50 & -1671828466)));
        arr_10 [i_3] [i_3] = var_9;
        arr_11 [i_3] = ((var_4 * (!var_8)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_16 [i_4] [i_4] = (((arr_14 [i_4] [i_4]) / (arr_14 [i_4] [i_4])));
        arr_17 [i_4] [i_4] = (((arr_12 [i_4] [i_4]) ? -396262811 : (arr_13 [i_4])));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_21 [i_5] = ((15631926998264841546 >> (((max(var_5, (max((arr_1 [i_5]), (arr_6 [i_5] [i_5] [i_5] [i_5]))))) - 1353509761256178391))));
        arr_22 [i_5] [1] = (((min((var_0 || var_3), -4878613832043238574))) ? (~-8) : ((-(15829381227579973146 + 288337093))));
    }
    #pragma endscop
}
