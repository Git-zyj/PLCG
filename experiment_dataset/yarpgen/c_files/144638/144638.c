/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((min(1, (max(-2960896526203909869, 151)))), (min(5201652552981215745, -2048))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_1 [i_1]);
                                var_15 -= (arr_4 [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                    var_16 = var_6;
                }
            }
        }
    }
    var_17 += 128;
    var_18 = (max((((-((max(var_12, var_2)))))), (var_13 / var_5)));
    var_19 = (max(((((max(var_7, var_11))) ? var_0 : ((max(var_13, 2960896526203909854))))), ((max((var_9 && var_13), var_10)))));
    #pragma endscop
}
