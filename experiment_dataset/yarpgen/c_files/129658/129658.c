/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = (((0 ^ 0) ? 1 : var_6));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = (arr_4 [i_1 - 3] [i_1] [i_2]);
                                arr_17 [i_0] [i_3] [i_0] [i_1] [i_0] [i_0] = (arr_3 [i_0] [i_1 + 1] [i_2]);
                                arr_18 [i_0] [i_2] [i_0] [i_2] [i_0] [i_0] [i_0] = (((-(arr_11 [16] [i_0] [i_0] [i_1 - 3]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_15;
    var_20 = (max(var_20, ((min((max(((var_8 ? 0 : var_7)), ((var_0 ? 0 : 1)))), var_14)))));
    #pragma endscop
}
