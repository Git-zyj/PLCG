/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [i_1] [i_2 - 2] [i_3 + 1] [i_4 - 1] = var_9;
                                arr_13 [i_0] [i_3] [i_2] = (max(65535, 122));
                                arr_14 [i_0 + 1] [0] [0] [i_0] [i_0] [i_0] [i_3] = 1;
                            }
                        }
                    }
                    var_14 = (max((((var_8 ? var_6 : -1))), (((arr_5 [i_2 - 2] [i_2 - 2] [i_1] [i_0 - 1]) * ((-26596 ? var_8 : (arr_0 [i_2])))))));
                }
            }
        }
    }
    var_15 = (-127 - 1);
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                arr_20 [i_5] = (min(((min((arr_16 [i_5] [i_6]), (min((arr_15 [i_5 - 1]), var_5))))), var_3));
                var_16 = (((((arr_19 [i_5] [i_5 + 2] [i_5 + 2]) > 0)) ? (((min((arr_15 [i_5 + 1]), (arr_15 [i_5 - 1]))))) : (((arr_19 [i_6] [i_5] [i_6]) ? (405346557 || 405346557) : -405346548))));
            }
        }
    }
    #pragma endscop
}
