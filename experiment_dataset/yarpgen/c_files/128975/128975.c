/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 4294967295;
    var_12 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [9] [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] = 699760350;
                                arr_17 [i_4] [i_3] [i_0] [i_0] [i_0] [i_0] [i_0] = 36937;
                            }
                        }
                    }
                    arr_18 [i_0 - 3] [i_0] [i_0] [i_2] = (min((((127 ? (arr_1 [i_0 - 3]) : var_6))), (1713565322604858889 >> 1)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 22;i_9 += 1)
                        {
                            {
                                arr_33 [i_5] [i_6] = ((min((arr_26 [i_7] [i_9] [i_6]), 131)));
                                var_13 = (max(-2, (((!(-119 >= 255))))));
                                arr_34 [i_5] [i_6] [i_7] [i_6] [i_5] = var_4;
                            }
                        }
                    }
                    arr_35 [i_7] [i_5] [i_5] [i_5] = ((~(!255)));
                    var_14 = (~350);
                }
            }
        }
    }
    #pragma endscop
}
