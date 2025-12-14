/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 14590;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_15 = 1;

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_16 = ((7 ? (((((14590 ? 19 : var_3))) ? ((var_5 ? var_10 : 1)) : (19766 / 53))) : (((((-565883470 - -565883470) < ((-1444828868 ? var_8 : var_12))))))));
                            arr_14 [i_0] [i_0] [i_2] [i_2] [i_4] = (((var_6 + -565883470) ? (((!(11 | 45766)))) : (((-10 * var_6) - (-2139862021 + var_11)))));
                        }
                    }
                    var_17 = (((~12) * (((var_6 ? var_3 : 113)))));
                }
            }
        }
    }
    #pragma endscop
}
