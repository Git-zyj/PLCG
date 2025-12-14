/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = var_2;
                var_21 = -1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_22 = (1471246948 ^ ((((1 ? var_4 : var_15)) * -2)));
                            var_23 = (-32767 - 1);
                            var_24 &= (((var_5 + var_13) ^ 0));
                            var_25 = ((((((var_6 != 108) ? -1 : ((0 ? 51150 : var_10))))) ? ((0 ? (var_1 - var_4) : 53)) : (var_2 * var_7)));
                        }
                    }
                }
                var_26 *= var_0;
            }
        }
    }
    var_27 = (((var_18 >= (var_10 / 32767))));
    var_28 = -21;
    #pragma endscop
}
