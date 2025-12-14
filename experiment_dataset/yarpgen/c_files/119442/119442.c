/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_3] = (((((-8843861406524746774 ? 8522547474944843500 : 8924709427977568014))) ? ((var_9 >> (((arr_9 [i_1 - 1] [i_1]) - 580008619648943014)))) : ((var_6 | (arr_4 [i_1 + 1] [i_1 + 2] [i_1 - 2])))));
                                arr_12 [i_0 + 2] [i_4] [i_4] [i_4] [i_0] = var_7;
                                arr_13 [i_0] = arr_4 [i_0] [i_0 + 2] [i_0];
                                arr_14 [8] [8] [i_2] [i_0] [i_4] [i_1 - 2] = (-1 ? (((((min(65535, (arr_10 [i_4] [i_3] [i_0] [i_0] [i_0]))) < (((arr_0 [i_0]) ? var_3 : var_2)))))) : (max((arr_8 [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 + 2]), var_3)));
                            }
                        }
                    }
                    var_10 = max((((var_3 > ((((6 && (arr_0 [i_0])))))))), (((max(-60, (arr_10 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 1]))) & ((var_6 ^ (arr_7 [i_0] [i_0] [i_2] [i_0 + 1]))))));
                }
            }
        }
    }
    var_11 = var_7;
    var_12 ^= var_9;
    #pragma endscop
}
