/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -14975;
    var_15 -= max(var_5, var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = (((-18286 + 2147483647) >> (((((!2216384805431289100) ^ (((arr_0 [i_0]) ? (arr_0 [i_1]) : (arr_1 [i_1]))))) - 647818565))));
                arr_4 [i_0] [i_0] = 3870;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_17 = (arr_9 [i_4] [i_4] [i_2] [i_4] [i_4]);
                                arr_13 [i_2] [i_1] [15] [i_3] [i_4] = (12973786842992099498 % 5472957230717452135);
                                arr_14 [i_3] = 870996912;
                                var_18 = (arr_12 [i_0] [i_0]);
                            }
                        }
                    }
                    var_19 -= (((arr_10 [i_1] [i_0] [1] [i_2] [i_2] [i_2]) | (arr_10 [1] [i_2] [i_2] [i_2] [i_1] [i_0])));
                    arr_15 [i_1] [i_0] [i_2] = (((((arr_10 [i_0] [i_1] [i_2] [i_1] [i_0] [i_2]) + 2147483647)) >> (((arr_10 [i_0] [22] [i_2] [i_0] [i_0] [i_2]) + 9766))));
                    arr_16 [i_0] = arr_11 [i_2] [i_2] [i_0] [18] [i_0];
                }
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    arr_19 [i_0] = (((((arr_17 [i_5 + 3] [i_5 + 2]) / 3870))) & (arr_5 [i_0] [i_0] [i_1] [i_5]));
                    arr_20 [i_5] = max((arr_8 [i_5 + 3] [i_5 + 1] [i_1] [i_0]), (((arr_8 [16] [i_1] [i_0] [i_0]) >= (arr_8 [i_0] [i_5 - 2] [i_5 + 2] [i_0]))));
                }
                arr_21 [i_0] [i_1] [i_0] = ((!(((arr_17 [i_1] [i_1]) <= (arr_10 [i_1] [8] [i_0] [i_0] [6] [i_0])))));
            }
        }
    }
    var_20 = var_1;
    #pragma endscop
}
