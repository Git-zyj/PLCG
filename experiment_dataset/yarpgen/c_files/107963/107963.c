/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (var_11 && var_1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_18 = (min(255, ((((arr_1 [i_2 + 1]) ? (arr_2 [i_2 + 1]) : var_1)))));
                    var_19 = ((min(1961330086826497529, 1)));
                    var_20 = var_3;
                    var_21 = -1796824415;
                }
            }
        }
    }
    var_22 = 1;
    #pragma endscop
}
