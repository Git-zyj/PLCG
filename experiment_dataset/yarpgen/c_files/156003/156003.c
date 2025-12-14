/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_17));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((((((arr_0 [4] [4]) && 100)) ? (((var_8 && var_2) ? ((var_11 ? var_7 : -5002400088914528178)) : (var_1 || 1))) : (var_2 || 1))))));
                    var_20 = ((-57 ? -var_6 : (max((!124), (min(5002400088914528178, -99))))));
                    arr_8 [i_0] = (((!-var_0) < (~15)));
                    arr_9 [i_0] [i_0] [i_0] [i_1] = ((~(((~var_11) ? ((max(1, 244))) : (25885 ^ 17830665)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_0] = (arr_0 [i_0] [i_0]);
                                var_21 = (min(var_21, (((-(min(((min((arr_14 [i_0] [i_0] [i_1] [i_0] [i_3] [i_1]), 229))), (((arr_1 [i_4]) ? -268426036 : var_13)))))))));
                                var_22 = (((!-1081076450) ? (((arr_13 [i_0] [i_0] [i_2 - 1] [i_0] [i_0]) ? var_12 : var_15)) : var_8));
                                arr_18 [i_4] [i_4] [i_0] [i_2] [i_0] [i_0] [i_0] = ((((((arr_12 [i_0]) ? (arr_12 [i_0]) : var_10))) ? (arr_12 [i_0]) : var_13));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
