/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = max(-2147483638, (-2147483647 - 1));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_16 -= ((0 >= ((min((1069547520 >= 0), (!var_2))))));
                                var_17 = (min(var_17, (((var_4 != (max((((var_12 ? 1393475378 : 1))), -var_9)))))));
                            }
                        }
                    }
                    var_18 = (((((((min((-2147483647 - 1), var_0)) + 2147483647)) + 2147483647)) >> (((((-2147483638 ? var_4 : var_14)) == (max(var_7, 1220468713)))))));
                }
            }
        }
    }
    #pragma endscop
}
