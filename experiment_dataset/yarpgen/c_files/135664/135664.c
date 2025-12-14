/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = var_2;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_16 = var_0;
                            var_17 = -var_6;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_14 [i_1] [i_1] [i_1] = (((((var_7 ? 231 : var_14))) ? (~20) : var_2));
                            var_18 *= (min(17, ((24830 ? 79 : 57234))));
                        }
                    }
                }
                var_19 *= var_14;
            }
        }
    }
    var_20 = (max(var_1, var_2));
    var_21 = 3190856495666070969;
    #pragma endscop
}
