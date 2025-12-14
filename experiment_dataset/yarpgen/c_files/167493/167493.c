/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167493
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
                var_16 -= ((~(((!7) ? ((min(-1, 17730))) : (~219)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_17 ^= ((((var_13 ? 3155 : var_9)) >> (((~91) + 119))));
                            var_18 = var_7;
                            var_19 = var_3;
                        }
                    }
                }
                arr_10 [i_1] [i_1] [i_1] = ((~(!-22)));
                arr_11 [i_1] = ((~(!var_15)));
            }
        }
    }
    var_20 -= var_15;
    var_21 &= (((17708 / 11818) + (var_6 / var_13)));
    var_22 = var_12;
    #pragma endscop
}
