/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max(-1531909841002546988, 2010888056);
    var_20 = var_14;
    var_21 -= var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [16] [i_2] = (max(-45, 44));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [7] [i_2] [i_2] [i_3] = ((var_5 / (arr_3 [i_3] [i_2])));
                        arr_13 [i_0] [i_0 + 1] [i_1 - 2] [i_2] [i_3] = -45;
                        var_22 = (arr_2 [i_1 - 3] [i_0 + 1]);

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_23 = (((arr_11 [i_0 - 1] [i_1 + 3]) >= var_4));
                            var_24 = (max(var_24, (((arr_3 [i_1] [i_1]) << (((arr_6 [i_1] [i_1 - 1] [2]) - 17115352971613244616))))));
                            arr_18 [i_0] [i_1] [1] [i_2] [i_4] = (arr_3 [i_0 + 1] [i_0]);
                            arr_19 [i_2] [i_3] [i_2] [i_1] [i_2] = -var_7;
                        }
                        for (int i_5 = 3; i_5 < 18;i_5 += 1)
                        {
                            arr_22 [i_5] [i_2] [i_5] = (((arr_3 [i_0 + 1] [i_1 - 4]) | var_18));
                            arr_23 [i_0] [i_1 - 4] [i_2] [i_2] [i_2] [i_3] [i_5] = var_2;
                        }
                        for (int i_6 = 3; i_6 < 18;i_6 += 1)
                        {
                            arr_26 [i_3] [i_3] [i_3] [i_3] [i_2] = (arr_3 [i_1 + 1] [i_6 - 2]);
                            arr_27 [i_2] [i_1] [i_2] [i_3] [i_6] = (2147483647 || 27);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
