/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (((var_3 ? var_13 : var_16)));
                arr_8 [i_0] [i_1] [i_1] = (!var_7);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 ^= ((((~(var_0 | var_14))) >= var_6));
                            arr_14 [i_1] [i_2] [i_1] = ((max((var_8 | var_11), (var_7 || var_3))));
                            var_20 = max(var_10, ((((var_9 ? var_9 : var_10)) - var_13)));
                            arr_15 [i_0] [i_1] [i_2] [i_3] = var_11;
                        }
                    }
                }
                var_21 = (max(var_21, (((var_17 % (var_3 ^ var_9))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_22 = (((var_11 ? var_4 : var_4)));
                                arr_24 [i_1] = (min(var_3, (((var_15 | var_10) * (max(var_10, var_15))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_0;
    var_24 = var_10;
    #pragma endscop
}
