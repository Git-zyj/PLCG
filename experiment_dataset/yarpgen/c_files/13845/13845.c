/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    var_15 *= ((~((((53412 < 45182) == var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = ((((!((max(12417, (-2147483647 - 1)))))) || (-656991699 && 511)));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 ^= (((~48974) | 34224));
                                var_18 = (max((-1 <= -710548949), (((max(65535, -710548945)) + (max(-6, 45185))))));
                                var_19 = (max((15360 || -2), (((max(12417, -1937950188)) != (11684 || 1809641627)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
