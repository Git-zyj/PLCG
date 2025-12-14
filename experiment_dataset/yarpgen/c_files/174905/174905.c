/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_11 [i_2] [i_1] [i_0] = (210 < 1516682330888775672);
                    var_12 += (arr_4 [i_0]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                var_13 = (max(var_13, var_4));
                var_14 *= ((var_10 ? var_7 : (min((13977845927054072996 < 1516682330888775672), 1516682330888775671))));
            }
        }
    }
    var_15 = -1516682330888775672;
    #pragma endscop
}
