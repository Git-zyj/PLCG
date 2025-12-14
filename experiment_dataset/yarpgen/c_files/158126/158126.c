/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            {
                var_13 = arr_3 [i_0];
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 += (arr_0 [6] [i_1 + 3]);
                                var_15 = (((arr_5 [i_0] [i_1 + 1] [i_2] [i_1 + 3]) * (arr_5 [i_0] [i_1 + 1] [i_2] [i_1 - 2])));
                                var_16 = ((!(((-(arr_11 [i_4] [6] [i_2 - 1] [i_1 - 2] [i_1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 += (((((var_5 <= ((var_12 >> (var_1 - 61)))))) | var_2));
    var_18 = (min(var_18, var_4));
    var_19 = var_10;
    var_20 = (((!-2101793615) && (((-var_7 ? ((1 ? 8062740823189620310 : -13)) : (((var_0 ? var_11 : var_6))))))));
    #pragma endscop
}
