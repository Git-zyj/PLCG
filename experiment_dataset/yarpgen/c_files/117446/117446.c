/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((var_11 ? ((((var_4 ? var_1 : 2147483623)))) : var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 ^= (((2147483620 + 589991424) ? (((((var_12 ? 233 : -5127))) ? var_6 : var_7)) : -2147483621));
                var_15 *= (2147483608 + (15 + 753127213));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] = (!var_7);
                                arr_13 [i_4] [i_3 - 1] [i_2] [i_1] [i_1] [i_0] = (((((((118 ? var_1 : 8297364594777746122)) + var_3))) ? 22978 : (((36028797018963967 + var_8) + (!var_3)))));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_1] = (134217727 + 1791289724);
            }
        }
    }
    #pragma endscop
}
