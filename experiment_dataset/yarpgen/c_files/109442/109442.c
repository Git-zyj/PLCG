/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_10, (var_1 / var_7)));
    var_17 = var_11;
    var_18 = ((max(var_4, (max(4270385330, 254)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [1] [1] [1] [i_2] = var_1;
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((!((!(((var_0 ? (arr_5 [i_2] [i_2]) : var_4)))))));
                }
            }
        }
    }
    var_19 = (max(24961, -6447518411950327168));
    #pragma endscop
}
