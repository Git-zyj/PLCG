/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_20 |= -6592036968811360526;
                var_21 = ((((((((-2147483647 - 1) >= 6592036968811360517)) ? 15229 : -515991424))) < (max((arr_0 [i_0]), ((6592036968811360540 ? -6592036968811360526 : var_4))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((((((-6592036968811360519 ? 6592036968811360519 : 45518))) >> (var_5 + 15529))))));
                                var_23 = (max(var_23, 1));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (max(var_24, var_14));
    #pragma endscop
}
