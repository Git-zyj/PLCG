/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (max(((max(((var_9 ? var_8 : var_5)), ((max(var_0, var_0)))))), (min((max(var_7, var_3)), ((max(var_4, var_4)))))));
    var_11 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] = var_7;
                                arr_14 [i_1] [i_0 - 2] [i_1] [i_1 - 1] [i_0 - 2] = ((((min((min(3723796130, 34359214080)), (min(1, 18446744039350337552))))) ? (max((((var_1 ? var_8 : var_8))), (min(var_4, var_1)))) : ((36028797002186752 ? 34359214064 : 1))));
                            }
                        }
                    }
                    arr_15 [i_0 - 3] [i_1] = (((((var_3 ? var_8 : var_7))) ? var_3 : (var_5 + var_5)));
                    var_12 |= ((((min(var_1, (min(var_0, var_1))))) ? (min(var_9, var_3)) : (((max(var_5, var_5))))));
                    var_13 &= ((((var_1 ? var_3 : var_0)) <= (var_1 < var_6)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            {
                var_14 = (max(((min(var_5, var_6))), ((var_1 ? var_2 : var_2))));
                arr_23 [i_6] [i_5] [i_5] = -var_0;
            }
        }
    }
    #pragma endscop
}
