/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    var_16 |= (max((((var_11 / var_14) * ((min(7, var_10))))), -var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [7] = (min((arr_1 [i_1]), ((((((max(var_4, 7)))) > 13136555337959109518)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = ((max(-3268926759432981756, 16383)));
                                var_18 = ((-(min((arr_6 [i_2] [i_1 + 2]), 0))));
                            }
                        }
                    }
                }
                arr_12 [0] [0] [i_1 - 1] = ((-((max(7, var_7)))));
            }
        }
    }
    #pragma endscop
}
