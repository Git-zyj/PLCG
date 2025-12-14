/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_10 = var_3;
                            var_11 = (min(var_11, (((var_1 ? (((((var_4 ? var_6 : var_2))))) : var_5)))));
                        }
                    }
                }
                var_12 = (-((-var_0 ? (~var_2) : var_1)));
            }
        }
    }
    var_13 = (~var_7);
    var_14 = var_4;
    #pragma endscop
}
