/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    var_21 = (min(var_21, (((~((var_12 ? (min(var_16, 4294967295)) : var_17)))))));
    var_22 = var_1;
    var_23 = 0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = -var_9;
                var_24 = (max(var_24, var_17));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_25 = (-(min(var_17, (min((arr_10 [i_0] [i_1] [i_2] [i_3]), -72)))));
                                arr_14 [11] [i_1 + 2] [i_1] [i_1] [i_0] = (((!var_15) < ((1 >> (~4294967295)))));
                                arr_15 [i_0] [i_1 + 2] [0] = ((-(arr_3 [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
