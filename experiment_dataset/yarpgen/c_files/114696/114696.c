/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = ((((var_6 / ((var_9 ? var_3 : var_2)))) + (((var_2 ? var_8 : var_9)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_13 &= (((var_5 + var_3) << (23781421 - 34)));

                            for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                            {
                                arr_11 [4] [i_1] [i_2] [8] [i_4] = (((var_10 ? var_10 : var_5)));
                                var_14 = (-54 % 4271185875);
                            }
                            for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                            {
                                var_15 = (((var_5 <= -var_7) && (((var_7 ? var_9 : ((var_9 ? var_11 : var_8)))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] [i_5] = ((~((var_7 ? (var_0 % var_1) : var_7))));
                                var_16 = (max(var_16, (((var_11 <= (var_1 / var_2))))));
                                arr_15 [i_5] = (((var_9 | var_1) >= ((var_11 ? var_10 : var_5))));
                            }
                            arr_16 [1] [i_3] [i_3] = (((((((var_3 ? var_9 : var_11))) ? var_7 : var_3)) + var_1));
                        }
                    }
                }
            }
        }
    }
    var_17 = 4271185880;
    #pragma endscop
}
