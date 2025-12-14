/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 &= (max((var_10 * var_0), ((((min(28404, 51))) ? ((var_7 >> (var_7 - 6327807483705668482))) : var_10))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_13 = (((var_0 ? var_0 : var_9)) <= (var_0 && var_5));
                                var_14 = ((((((!var_4) & ((min(var_11, var_11)))))) ? (((var_1 ? var_9 : var_7))) : ((var_10 ? var_3 : var_4))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 -= var_5;
    var_16 = var_0;
    var_17 = (-65526 ? ((75 ? 1 : 34)) : var_10);
    #pragma endscop
}
