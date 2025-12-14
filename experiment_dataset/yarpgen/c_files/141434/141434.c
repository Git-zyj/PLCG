/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = 1072128778;
                    var_15 = ((!(((((min(63, 7019))) ? 1932504314580825552 : 48)))));
                }
            }
        }
    }
    var_16 = (min(var_16, var_12));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {
                var_17 = ((((max((arr_2 [i_4]), (~1)))) ? var_4 : (!-8883249900465644894)));
                var_18 = -var_0;
                var_19 = (min(var_19, var_11));
            }
        }
    }
    #pragma endscop
}
