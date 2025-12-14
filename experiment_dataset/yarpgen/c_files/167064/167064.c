/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2] [i_1] &= ((((((arr_2 [i_1]) ? (arr_7 [i_0 + 1] [i_1] [i_3]) : (arr_2 [i_0 - 2])))) > (((-1 ? (arr_1 [i_0]) : (arr_1 [i_2]))))));
                        arr_13 [8] [8] [2] [i_1] |= -134217727;
                    }
                    var_13 = (min(var_13, (((var_7 ? 122 : (arr_3 [i_0] [i_0] [4]))))));

                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_14 = (min(var_14, ((((arr_7 [i_0 + 1] [i_0 + 3] [i_0 - 2]) ? 122 : (arr_7 [i_0 - 2] [i_0 + 2] [i_0 - 2]))))));
                            arr_20 [i_0] [i_0 + 3] [i_0] [i_0 + 1] [i_2] = (var_6 ? ((2251250057871360 ? var_1 : (arr_6 [i_4] [i_1] [i_0 + 1]))) : var_8);
                            var_15 |= var_9;
                            var_16 = (((arr_9 [i_0 + 3] [i_2]) ? 162 : (arr_18 [i_0] [i_1] [i_2] [i_4] [i_5])));
                        }

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_24 [i_0 + 3] [i_2] [i_2] [i_4] = ((+(((((arr_11 [i_0] [i_1] [i_1] [i_6]) ? (arr_19 [i_2]) : var_2))))));
                            arr_25 [0] [i_2] [i_6] = 3;
                            var_17 = ((var_7 ? (arr_9 [i_0 + 3] [i_2]) : (min((arr_9 [i_4] [i_2]), 14109816600914640281))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_18 = ((max(var_10, (((arr_6 [5] [i_2] [i_7]) || (arr_0 [i_4]))))));
                            arr_28 [i_1] [2] [i_2] [i_4] [10] [8] |= (min((((var_7 + ((((arr_7 [i_0] [7] [i_0]) << (((arr_21 [i_1] [i_1] [12] [i_4] [i_4] [i_4] [12]) - 19120)))))))), 10269312618978107434));
                        }
                    }
                }
            }
        }
    }

    for (int i_8 = 1; i_8 < 16;i_8 += 1)
    {
        var_19 = var_12;
        arr_32 [i_8] = (arr_31 [i_8] [i_8]);
    }
    var_20 = var_0;
    #pragma endscop
}
