/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = ((!((((~var_4) ? var_5 : var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [i_2] [10] [i_2] [1] = -var_4;
                    arr_11 [i_0] [i_2] [i_1] [7] = (arr_4 [i_1 - 2] [i_1 - 2] [i_2 + 1]);
                    var_12 = arr_1 [i_0] [i_1 - 2];
                }
            }
        }
    }
    var_13 -= ((!(((var_6 ? -var_3 : ((max(var_1, var_3))))))));
    #pragma endscop
}
