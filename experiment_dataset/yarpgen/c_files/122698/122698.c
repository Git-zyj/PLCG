/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = ((((max((arr_4 [i_1 - 1] [i_1 + 2]), var_6))) ? var_3 : (4078806139 | var_1)));
                    var_12 = 37231;
                    var_13 = (arr_0 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_14 = ((-(((arr_7 [i_0] [i_3] [7] [i_1]) ? var_3 : var_3))));
                                var_15 = (max((!var_9), ((var_4 + (var_1 + 143)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
