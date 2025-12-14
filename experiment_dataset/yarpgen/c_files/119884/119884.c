/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_1] = (arr_3 [i_1 + 2] [i_1 + 2]);
                var_19 = (arr_3 [i_1 + 2] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [13] [i_1] [i_2] [i_1] = (32756 / 51734);
                                var_20 = (arr_14 [i_0] [i_1 - 1] [i_1 + 3] [i_1 + 1] [i_2 - 1]);
                                arr_16 [i_0] [i_1 + 3] [i_0] [5] [i_1] = 4294967295;
                                var_21 = (max(var_21, (((var_18 * ((~(var_18 / 53309))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (max((((var_11 << (var_16 + 2061262389)))), ((-1 ^ (var_13 ^ var_18)))));
    var_23 = var_14;
    var_24 = var_15;
    var_25 = -3;
    #pragma endscop
}
