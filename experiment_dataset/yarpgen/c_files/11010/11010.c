/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] = (max(var_9, (var_1 - var_2)));
                            var_13 = ((((-(var_10 || var_10))) <= ((var_0 / (var_7 || var_5)))));
                        }
                    }
                }
                var_14 = (((var_6 || var_7) ? -var_7 : (((!(var_4 - var_4))))));

                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_15 = (min((var_8 << var_0), ((var_7 ? var_3 : var_11))));
                                var_16 = (((((-(-127 - 1)))) ? ((min(-var_2, ((var_7 ? var_1 : var_5))))) : ((var_4 ? var_6 : (var_3 + var_10)))));
                                var_17 = var_8;
                                arr_19 [i_0] [i_0] [i_0] [i_4] [i_4] [i_5] [i_6] = ((~(var_9 >= var_5)));
                            }
                        }
                    }
                    arr_20 [i_0] = (((((var_6 ? var_0 : var_1))) < (!-var_4)));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    arr_23 [i_0] [1] = var_5;
                    arr_24 [6] [i_1] [i_1] = (((var_4 || var_10) << (var_8 / var_6)));
                    arr_25 [3] = ((((var_10 ? var_0 : var_3)) > (((var_5 ? var_2 : var_9)))));
                }
            }
        }
    }
    var_18 = var_8;
    #pragma endscop
}
