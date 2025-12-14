/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = ((((((((-32767 - 1) >= 0)) ? ((-32762 ? var_13 : -268435456)) : ((0 ? -95 : 17179869183))))) ? (((1 ? var_15 : var_6))) : ((-((var_16 ? 18446744073709551615 : var_8))))));
                arr_5 [i_0 - 1] [i_0 - 1] [i_0] = (((var_8 >= (var_1 >= 2576800242))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] = (var_14 % 4294967295);
                            var_20 ^= ((((((0 ? var_7 : var_3)))) ? ((((var_12 ? 0 : var_15)) ^ var_16)) : (((53 & (var_11 >= 481704711))))));
                            var_21 = (min(var_21, ((((!-113) ? (var_7 != 3368878759) : 0)))));
                        }
                    }
                }
            }
        }
    }
    var_22 = ((((((((var_6 ? var_2 : var_7))) != (7490045986198812002 / var_17)))) ^ ((var_4 * (-1 - 0)))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    var_23 = (max(var_23, ((((((815282185 - 4294967295) + 0)) + 1820260424)))));
                    var_24 = var_9;
                }
            }
        }
    }
    var_25 &= var_0;
    #pragma endscop
}
