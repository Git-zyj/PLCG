/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = var_11;
                arr_6 [i_0] [i_1] [i_1] = var_5;
                arr_7 [0] [0] [i_0] = ((var_11 ? var_12 : -16861));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                arr_14 [i_3] [i_2] [i_2] = (max(((((max(-1323035622, 5))) ? 16853 : (arr_12 [i_2 + 2] [i_2] [i_2]))), ((1323035621 ? (var_15 > var_11) : (min((arr_13 [i_2] [i_2] [i_2]), 466734300))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_22 [i_2 - 1] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = -2683765047703932831;
                                arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] = ((((max(var_5, (arr_20 [i_2] [i_6] [i_6] [i_6 - 1] [i_6] [i_6] [11])))) ? ((var_9 % (arr_20 [i_2] [i_6] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6] [i_6]))) : (((-(arr_20 [i_2] [i_2] [i_6] [i_6 - 1] [i_6] [i_2] [i_2]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_16;
    var_19 = ((var_13 ? 3830766533 : (0 + 0)));
    #pragma endscop
}
