/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_14 = (arr_3 [i_1]);
                            var_15 = (3508196056537909749 ^ 14938548017171641866);
                            var_16 = (((((var_11 ? var_4 : (arr_6 [i_0 - 2] [i_0] [i_1] [i_0 - 1])))) + -3508196056537909749));
                            arr_10 [i_0] [i_1] [1] = (((arr_1 [i_3]) + (arr_5 [i_1])));

                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 12;i_4 += 1)
                            {
                                arr_13 [i_1] [i_3] [i_2] [i_1] [i_1] = var_7;
                                var_17 *= (arr_8 [i_4] [i_0 - 2] [i_0 - 1] [i_0 + 2] [i_4 - 2] [i_4 - 1]);
                            }
                            for (int i_5 = 2; i_5 < 11;i_5 += 1)
                            {
                                var_18 = ((~(((arr_6 [i_0 + 1] [i_0 - 2] [i_1] [i_3]) << (arr_6 [i_0 + 1] [i_2] [i_1] [i_5])))));
                                var_19 -= (min((((((arr_0 [i_0] [i_0]) >= var_1)))), (max((arr_7 [i_2]), 1163210731))));
                            }
                        }
                    }
                }
                var_20 = ((!(arr_11 [i_0] [i_0] [i_0] [2] [i_0] [i_0])));
                var_21 = (((arr_5 [i_1]) - (((var_10 - var_11) ? (var_10 + var_10) : ((min(-1799013978, var_4)))))));
                arr_17 [i_0] [i_1] [i_1] = (arr_0 [i_0 + 2] [i_0]);
                var_22 = (arr_0 [i_0] [i_1]);
            }
        }
    }
    #pragma endscop
}
