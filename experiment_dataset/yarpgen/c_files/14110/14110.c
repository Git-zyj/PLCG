/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        {
                            var_13 = (max((arr_4 [i_0 - 3] [i_2 + 1]), (~-9)));
                            var_14 = (min(var_14, 213285060));
                        }
                    }
                }
                var_15 = (max((~1), 8));
                arr_13 [i_0] [i_1] = (-2147483647 - 1);
            }
        }
    }
    var_16 = (max(var_16, var_6));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 23;i_6 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_17 = (~2147483647);
                        var_18 = (max(var_18, (2147483642 || -2147483638)));
                    }
                    for (int i_8 = 3; i_8 < 20;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            arr_31 [i_4] [21] [i_4] [i_4] [21] [i_9] = (max(2147483643, 2147483644));
                            arr_32 [i_4] [i_4] [i_9] [i_6 - 2] [9] [i_4] [i_9] = min(var_1, (((-2147483638 + 2147483647) << (2147483647 - 2147483647))));
                        }
                        var_19 = (max(var_19, ((max((max((arr_30 [i_4] [i_6 + 1] [i_6 - 1] [i_4] [i_8 + 4]), (-2147483647 - 1))), 2147483638)))));
                    }
                    var_20 = var_4;
                }
            }
        }
    }
    var_21 = (max(var_21, (((-2147483645 ? -2147483638 : -2147483645)))));
    #pragma endscop
}
