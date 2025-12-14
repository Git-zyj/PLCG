/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 *= (arr_10 [i_0] [i_1] [i_2 + 2]);
                    arr_11 [i_2] = var_16;
                    var_18 = (max(var_18, (((((((((arr_10 [i_0] [i_0] [i_0]) * (arr_10 [i_0] [i_0] [i_2 + 3]))) / ((0 ? 1 : 3743))))) * (((((arr_10 [i_2] [i_1] [i_0]) ? var_13 : var_14)) / (arr_1 [i_0] [2]))))))));
                }
            }
        }
    }
    var_19 = var_0;
    #pragma endscop
}
