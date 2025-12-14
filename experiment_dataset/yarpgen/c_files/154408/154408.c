/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((min(var_15, (var_12 && 0)))) ? var_16 : var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 += 6167766840603564068;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = var_0;
                                arr_12 [i_0] [i_0] [i_2] [i_2] [i_3] [9] [i_2] = (2128873480 > 11);
                            }
                        }
                    }
                }
                var_21 = (((11 + 0) & ((((((-1436137526 + 2147483647) << (9 - 9)))) ? 0 : 11))));
            }
        }
    }
    var_22 = (18446744073709551604 && var_1);
    #pragma endscop
}
