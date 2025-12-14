/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = 17373;
                var_17 = 0;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 |= ((-((((arr_2 [i_2 + 3] [i_2 + 3] [4]) || 0)))));
                            var_19 = var_7;
                        }
                    }
                }
            }
        }
    }
    var_20 = var_6;
    var_21 = var_13;
    var_22 = ((16 ? 16 : 250));
    #pragma endscop
}
