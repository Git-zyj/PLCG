/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= var_4;
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((((arr_5 [i_0]) || ((max(2305834213120671744, var_13)))))))));
                var_17 = 2305834213120671752;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] [i_1] [i_2] = (-1974697929 | var_0);
                                arr_14 [1] [8] [i_2] [i_2] [i_1] [12] = (5423011402108297803 ? ((((arr_5 [i_4 - 3]) ? -1645682445 : 1974697928))) : var_10);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (((((-1974697921 ? var_4 : var_9)))) ? var_12 : ((((min(var_5, var_7))) ? ((var_3 ? var_13 : var_7)) : var_2)));
    #pragma endscop
}
