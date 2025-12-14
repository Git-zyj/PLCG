/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (((min(1, 16716438955298616757)) != (min((~1), (max(var_4, 1))))));
    var_13 = (((((((var_4 ? var_9 : 16716438955298616731)) & var_10))) ? -0 : (((min(0, -1895929835))))));
    var_14 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = (arr_2 [0]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_16 = ((-(18446744073709551606 & 0)));
                            var_17 -= (((min((min(10247505815925107229, 1)), 65535)) != (((min(1730305118410934882, 16716438955298616732))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
