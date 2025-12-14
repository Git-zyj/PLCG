/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (127 / var_2);
    var_12 = (max(-127, 5408791975592997312));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_13 = (max((arr_7 [i_3] [i_2] [i_1 + 2] [i_0]), (((arr_7 [i_0] [i_1] [i_2] [i_3]) >> 13))));
                                var_14 = (max(var_14, 13));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_15 = var_8;
                                var_16 = (((((((-(arr_0 [i_2]))) | (((arr_14 [i_2]) / 9))))) ? ((~(min(2489937715, -7)))) : var_6));
                            }
                        }
                    }
                    var_17 = (max(var_17, var_9));
                }
            }
        }
    }
    var_18 = var_0;
    var_19 = (max(var_19, var_10));
    #pragma endscop
}
