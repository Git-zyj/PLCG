/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 4554319008061750931;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = (max(var_18, (((((min((min(7420155688881069866, var_16)), ((var_13 ? var_14 : 18470))))) ? 11026588384828481749 : (((-18282 ? var_9 : var_7))))))));
        var_19 = (((((var_5 ? var_5 : ((min(1, 1)))))) ? ((((var_16 ? -3523 : 14)) * var_9)) : 2147483637));
    }
    var_20 = (((((-((18446744073709551615 ? -21 : var_12))))) ? (((((max(var_8, var_9))) ? 15 : 1))) : (((((1 ? 18298 : 1331094062))) ? ((1 ? var_12 : var_14)) : 5050116236772091835))));
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_9 [i_1] [7] [i_3] [i_1] = 16;
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_21 = (((-4869864211422466389 ? ((-3 ? var_15 : var_14)) : var_14)));
                                var_22 = -969434722;
                                arr_15 [i_5] [i_5] = -12288;
                            }
                        }
                    }
                    var_23 = ((((var_15 ? (((var_9 ? var_8 : var_9))) : (min(var_0, var_4))))) ? ((1613187417 << ((((28 ? 1152921504573292544 : var_5)) - 1152921504573292526)))) : var_7);
                }
            }
        }
    }
    #pragma endscop
}
