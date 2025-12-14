/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_0 ? (((3016689723 / 1278277573) ? (3016689723 / 146) : var_8)) : var_1));
    var_11 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] = (min(((((max((-2147483647 - 1), var_1))) && ((((arr_1 [i_0]) ? var_6 : 127))))), ((!(((arr_3 [i_0]) || 255))))));
                    arr_7 [i_0] = ((~((max((arr_1 [i_0]), 127)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_22 [i_3] [i_4] [i_4] [i_6] = ((~((2290002667 ? -50 : 536870911))));
                                arr_23 [i_3] [3] [i_3] [i_4] [i_3] = var_2;
                            }
                        }
                    }
                }
                arr_24 [i_4] [i_4] = (((arr_0 [i_4]) & (arr_15 [i_3] [i_4] [i_3])));
                arr_25 [i_4] = var_6;
                var_12 = 536870911;
                arr_26 [i_3] [i_4] [i_4] = ((-(~-6)));
            }
        }
    }
    #pragma endscop
}
