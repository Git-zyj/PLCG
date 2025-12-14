/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (!var_5);
    var_13 = (-15803 / var_1);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_14 = ((~((var_11 ? (arr_3 [i_0 - 1] [i_1] [6]) : (arr_2 [i_0 - 1] [i_0 + 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 = ((min((arr_3 [i_0 - 1] [16] [i_0]), (arr_3 [i_0 + 1] [i_1] [i_0]))));
                                var_16 = var_9;
                                var_17 = (min(var_17, (((-15803 ? (((0 + ((min(0, -15812)))))) : (min(((0 ? 9361156525707366625 : 9961)), 9361156525707366625)))))));
                                var_18 = (min((((((!(arr_4 [i_1] [i_2] [i_4 + 1])))))), ((((((arr_0 [i_1]) ? 300320172 : var_11))) ? (arr_10 [i_4 - 1]) : (min((arr_7 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0]), 14460078440514649653))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 &= var_4;
    #pragma endscop
}
