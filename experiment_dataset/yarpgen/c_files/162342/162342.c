/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((var_2 ? var_18 : var_18)) | (var_15 >= -12)))) ? var_15 : (max((var_10 - var_9), var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] = (((var_4 + 2147483647) >> ((min((min(var_13, var_11)), (min((arr_6 [i_2]), -20)))))));
                                arr_16 [i_1] [i_0] [i_3] [i_4] = (arr_8 [i_2] [i_1] [i_2] [i_3]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_20 = (arr_11 [i_0] [i_0] [i_1] [i_0]);
                            arr_22 [i_5] [11] [i_5] [i_0] = ((max((arr_2 [i_0] [i_0]), ((var_16 ? var_18 : 2262717124)))));
                        }
                    }
                }
                var_21 = (((((min(var_16, (arr_8 [i_0] [i_0] [i_0] [i_0])))) ? -var_5 : ((max((arr_7 [i_1]), var_4))))));
            }
        }
    }
    var_22 = (((((var_11 * (var_14 / var_10)))) * var_8));
    var_23 = (var_5 - (((((var_9 ? var_3 : var_3))) ? (var_14 + var_5) : (var_2 + var_3))));
    #pragma endscop
}
