/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 = (((min(var_8, (arr_9 [i_0] [i_3 - 3] [i_3] [8]))) & (max(9223372036854775807, var_12))));
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_0] [i_4] = (-9223372036854775807 - 1);
                                var_16 = arr_5 [i_0] [i_0];
                            }
                        }
                    }
                    arr_15 [i_0] = (arr_9 [i_0] [i_1] [1] [i_0]);
                }
            }
        }
    }
    var_17 = -0;
    var_18 = (max(((min(var_11, ((-1206186462 ? 177 : 1959676900))))), (((var_1 ? 178 : var_3)))));
    var_19 = var_11;
    #pragma endscop
}
