/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = ((((((((-46 ? var_7 : (arr_2 [i_0])))) ? (min(var_8, var_0)) : (((129 ? var_3 : var_11)))))) ? ((136 ? (var_0 ^ var_9) : ((min(var_17, (arr_8 [i_0] [16] [i_3] [i_4])))))) : (((-(arr_11 [i_0 + 2] [i_1] [i_3 + 1] [i_3]))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] = -369;
                            }
                        }
                    }
                    var_20 = (max(var_20, ((min(var_5, -var_8)))));
                    var_21 = (((141 - (115 - -2))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                arr_19 [i_5] [i_6] = (((!1859490322) ? -13 : var_8));
                var_22 = (max(var_22, (~2983384265)));
                arr_20 [i_5] [8] = (min(((0 ? 108 : 4294967295)), var_1));
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_23 = (min((((((min(var_15, var_18))) ? (min(var_9, 1456493488)) : (!var_1)))), 4294967295));
                            var_24 = var_16;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
