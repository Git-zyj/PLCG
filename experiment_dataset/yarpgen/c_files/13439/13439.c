/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_3;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_1] = 180987718;

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_21 = (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                        var_22 = arr_1 [i_0 - 1] [i_0];
                        var_23 = 1;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_24 = (arr_4 [i_0 - 1]);
                                arr_19 [i_0] [i_1] [11] [i_2] [i_4 + 3] [i_0] = (arr_17 [i_5] [i_5] [i_5] [i_4 + 1] [i_4] [i_4 + 2] [i_2]);
                            }
                        }
                    }
                    arr_20 [i_0] [i_0] = -17;
                }
            }
        }
    }
    var_25 = var_18;
    var_26 = var_11;
    #pragma endscop
}
