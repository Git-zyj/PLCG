/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    var_21 = (max(var_21, (((var_15 / (max((max(var_9, var_18)), (var_0 * var_14))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_22 = (((((~(arr_4 [i_2] [i_2] [i_0])))) / (arr_3 [i_2] [i_1 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [5] [i_2] [5] [5] [5] [i_2] = (arr_2 [i_4] [i_3] [i_0]);
                                arr_16 [i_0] [i_0] [12] [i_2] = (arr_4 [i_3] [i_2] [i_0]);
                            }
                        }
                    }
                    var_23 = (((((((arr_7 [i_2] [i_2] [i_0]) <= var_3)))) * ((1 ? 3394012744410345120 : 46894))));
                    arr_17 [i_0] [i_1 - 1] [i_2] = var_18;

                    for (int i_5 = 4; i_5 < 11;i_5 += 1)
                    {
                        var_24 = ((((((arr_19 [i_0] [i_0] [i_2] [i_5]) ? var_0 : (arr_18 [i_2] [i_2] [i_2])))) || (arr_6 [i_0] [i_0] [i_2])));
                        var_25 = ((~(((arr_7 [i_0] [i_2] [i_0]) / (arr_3 [i_5 + 3] [i_0])))));
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_26 = ((((((arr_3 [i_0] [i_0]) <= var_9))) * var_18));
            arr_25 [9] [i_0] [5] = ((-(arr_4 [i_0] [i_0] [i_0])));
            var_27 = ((arr_12 [i_0] [i_6] [i_0] [i_0] [i_0] [12]) ^ var_16);
        }
    }
    var_28 = ((!(((-(var_8 * var_14))))));
    #pragma endscop
}
