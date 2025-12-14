/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 -= var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 -= (arr_3 [i_1] [11] [5]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_14 = 452161209;
                            arr_9 [3] [20] [14] [18] = 60780;
                        }
                    }
                }
            }
        }
    }
    var_15 = (min(var_15, (8987657625534963335 <= 0)));
    #pragma endscop
}
