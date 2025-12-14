/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_6 & 65534);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_2] = (!9223372036854775807);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [i_3] [i_2] [i_1] [i_3] = (((max(var_6, 683891852)) * ((var_4 / (max((arr_9 [2] [i_3]), 1460062337))))));
                                arr_13 [i_3] [i_3] = var_0;
                                var_14 = ((-((-((var_1 << (((-1929142472 + 1929142518) - 46))))))));
                                arr_14 [i_3] = -var_5;
                                arr_15 [i_3] [9] [4] [i_1] [i_3] = 1460062337;
                            }
                        }
                    }
                    arr_16 [i_0] [18] [i_1] [i_2] = 65534;
                    var_15 = ((~((((1460062337 == 12) && 65534)))));
                }
            }
        }
    }
    var_16 = var_1;
    #pragma endscop
}
