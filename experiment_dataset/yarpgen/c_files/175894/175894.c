/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 23;i_3 += 1)
                {
                    {
                        var_16 = (max(var_13, var_9));
                        var_17 = var_3;
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = (min((min(var_10, var_6)), var_10));
                        arr_13 [i_0 + 4] [i_0 + 4] [i_0] [i_2] [i_0 - 2] [i_0] = (max((min(var_0, var_3)), ((max(var_5, var_1)))));
                        arr_14 [i_0] [i_1] [i_2] [i_3] = var_3;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 23;i_5 += 1)
            {
                {
                    arr_20 [20] [i_4] [1] |= (min(var_2, (min(var_9, var_0))));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_27 [i_0] [i_4] [i_5 - 2] [14] [i_4] = (max(var_2, (max(var_0, var_0))));
                                var_18 &= var_11;
                            }
                        }
                    }
                    arr_28 [i_0] [i_4] [i_5] [i_0 - 2] = var_5;
                    arr_29 [i_4] [i_4] [i_4] = var_5;
                }
            }
        }
    }
    var_19 = var_1;
    #pragma endscop
}
