/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, var_13));
                    var_20 = ((~((min((arr_2 [i_1] [i_2 + 2]), (var_16 && var_12))))));
                    var_21 = (min(var_21, 4710));
                    var_22 = (arr_4 [i_0]);
                    arr_7 [i_1] = ((94324402 ? -18202 : ((~(562949953421311 ^ 60126)))));
                }
            }
        }
    }
    #pragma endscop
}
