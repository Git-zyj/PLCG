/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (-(var_12 - var_0));
                arr_7 [0] [i_1] [i_0] = var_1;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_14 = (((var_0 || var_9) | (var_4 * var_8)));
                                var_15 = var_7;
                                var_16 = ((((var_3 || var_6) || (!var_2))) && var_4);
                                arr_17 [i_0] [i_1] [i_2] [i_1] [i_1] = var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        {
                            arr_27 [1] [i_8] [7] [i_8] [1] = (((-6 == -8) >> (-var_5 - 44998)));
                            arr_28 [i_8] = (var_10 || var_2);
                        }
                    }
                }
                var_17 &= var_10;
                arr_29 [5] = ((!(--19683)));
                arr_30 [i_6] = var_2;
            }
        }
    }
    #pragma endscop
}
