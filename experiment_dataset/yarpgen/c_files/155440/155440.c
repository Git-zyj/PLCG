/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((var_4 ? (((((var_7 ? var_3 : var_0))) ? -4228 : var_0)) : var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_10 [3] [3] [6] [i_1] = ((var_4 || (((3937644812 ? -4228 : 42)))));
                            var_11 = (((((858725446 ? 42 : 4228))) ? (((((var_9 ? var_8 : var_8))) ? ((var_3 ? var_8 : var_3)) : var_7)) : var_1));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_12 ^= ((var_3 ? var_8 : ((((var_8 >= var_3) == ((var_8 ? var_4 : var_8)))))));
                                var_13 = (max(var_13, var_8));
                                var_14 *= (((var_9 && var_6) ? ((((var_2 ? var_4 : var_2)) | (-4751864876522386448 != 42))) : ((var_1 ? var_6 : ((var_6 ? var_4 : var_2))))));
                            }
                        }
                    }
                }
                arr_21 [i_1] [i_1] = (((((var_1 ? var_5 : ((var_2 ? var_7 : var_8))))) ? ((var_9 ? ((-4228 ? 42 : 793423480)) : (((4223 ? 4219 : 26))))) : var_8));
                arr_22 [i_1] = (((((((1 ? 2830949141 : 482576254))) ? 5868469367116696668 : var_0))) ? ((((var_5 >= (var_2 == var_9))))) : (((((-5305832255243172407 ? -4235 : -9166972440795271001))) ? var_4 : (((var_8 ? var_3 : var_1))))));
            }
        }
    }
    #pragma endscop
}
