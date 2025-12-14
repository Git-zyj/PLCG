/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 6;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_1] [i_0] = (((min((var_10 | var_8), (((arr_5 [i_0] [i_0] [i_2]) ? var_8 : (arr_0 [i_0]))))) | var_10));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, (arr_3 [i_0])));
                                var_17 *= (~var_14);
                                var_18 = (max(var_18, (((-(arr_7 [i_1] [i_2 - 1] [i_1 - 1]))))));
                                arr_17 [i_0] [i_0] [i_2] [i_0] [i_4] = ((var_8 ? (1 | var_9) : (var_12 + var_2)));
                                arr_18 [i_0] [i_4] [i_2] [i_3] = var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_3;
    #pragma endscop
}
