/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 = var_5;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] = -var_2;
                                arr_13 [i_1] &= ((-(((arr_4 [i_4 + 1]) ^ var_3))));
                                arr_14 [i_0 - 4] [i_1] [i_0 - 4] [i_3] [i_4] = var_2;
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_2] = arr_8 [i_0] [i_0];
                }
            }
        }
    }
    var_13 = -var_6;
    var_14 = var_7;
    #pragma endscop
}
