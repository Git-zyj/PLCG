/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 = ((1 * (41801 + 10)));
                                var_19 = (max(var_19, (((var_17 && 1986) << (117 - 95)))));
                            }
                        }
                    }
                }
                var_20 = var_15;
                var_21 = (max(var_21, (-var_5 == 9709)));
            }
        }
    }
    var_22 = (max(var_22, (((((((1 * (-32767 - 1))))) == ((((var_11 ? 1 : var_0)) / (1 + var_12))))))));
    #pragma endscop
}
