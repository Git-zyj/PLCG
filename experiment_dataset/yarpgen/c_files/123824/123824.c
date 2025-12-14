/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 ^= ((((max((max((arr_6 [i_0] [i_1] [i_2]), var_3)), var_19))) || (arr_5 [i_0] [i_0])));
                    arr_8 [i_0] [i_0] = var_14;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_21 ^= var_10;
                                var_22 = (min(var_22, var_10));
                                var_23 = (min(((max(var_4, (arr_12 [i_0] [7] [i_2] [i_4 + 1])))), var_6));
                                arr_13 [i_0] [i_0] = ((-(((max((arr_4 [i_1]), var_2))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = ((var_2 / ((min(((max(var_11, var_3))), (var_15 - var_12))))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_25 = (((var_3 < var_0) - ((var_17 ? ((var_5 ? var_18 : var_15)) : var_1))));
                                var_26 = (min(var_26, (max((min(var_5, (max(var_8, var_17)))), ((((var_1 ? var_16 : var_8))))))));
                                var_27 = ((-((((min(var_11, var_16))) ? var_12 : (((-2147483647 - 1) ? var_11 : 128))))));
                            }
                        }
                    }
                    var_28 = (min(var_28, var_5));
                }
            }
        }
    }
    var_29 = var_9;
    #pragma endscop
}
