/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = (max(((min(6, -7))), (3688746027 | -8836)));
                var_14 = var_2;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_15 -= ((((max((-9223372036854775807 - 1), 20))) ? var_12 : -var_6));
                            var_16 = (min(var_16, ((min(((min(0, 250))), (3 ^ 4252058499))))));
                            var_17 = (min(var_17, ((((((1776801096855431431 ? -1 : 4080))) ? ((max(4099, 0))) : var_8)))));
                        }
                    }
                }
            }
        }
    }
    var_18 = (!var_12);
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            {
                var_19 = (max(var_19, (32750 / 1)));
                arr_21 [i_4] [i_5] [i_4] = (-4081 ? -1 : 4);
                var_20 += (arr_7 [i_4] [i_4] [1] [i_4]);
                var_21 = (((+-2026480390) && var_1));
                var_22 = (((~159) ? (min(var_2, (arr_12 [i_5 + 1] [i_5] [i_5 + 1]))) : (arr_15 [12])));
            }
        }
    }
    #pragma endscop
}
