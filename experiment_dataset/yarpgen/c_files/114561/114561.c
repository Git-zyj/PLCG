/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = var_5;
                                arr_13 [i_4] [i_3] [i_2] [i_3] [i_0] = var_0;
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_2] = var_11;
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_21 [i_6] [i_1] [i_6] = var_4;
                                var_17 = (min(var_17, var_7));
                            }
                        }
                    }
                    var_18 = var_3;
                }
                var_19 = (min(var_19, var_6));
            }
        }
    }
    #pragma endscop
}
