/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    var_11 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = (arr_2 [i_1 + 2]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_13 = ((-24 ? 8191 : 8195));
                            var_14 |= -4294959106;
                            var_15 *= (((((arr_9 [i_1 + 2] [i_1 + 4]) + 2147483647)) << (((arr_5 [i_2 + 2]) * ((((arr_4 [i_0] [i_1 + 1] [i_2]) < (arr_9 [i_2] [i_3]))))))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    var_16 -= (-125 + 0);

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_17 = (~0);
                        var_18 = ((((25 - -10583) ? ((((arr_7 [i_1 + 3] [i_5]) - (arr_12 [i_0])))) : (arr_9 [i_1 + 1] [i_1 + 4]))) + (((((arr_6 [i_0] [i_4] [i_0]) ? (arr_10 [i_5] [i_0] [i_0]) : (arr_13 [i_0] [i_0] [i_0]))) + (arr_13 [i_1 + 4] [i_1] [i_0]))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_19 -= (arr_1 [i_1 + 4]);
                        var_20 = (min(var_20, (arr_15 [i_0] [18] [i_1 + 4] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_21 = ((((arr_7 [i_1] [i_4]) ? (arr_9 [i_7] [1]) : (arr_10 [i_0] [i_1] [i_4]))));
                        arr_18 [i_0] [4] = (arr_11 [6] [i_1 + 4] [i_1 + 2]);
                    }
                    var_22 |= (((arr_6 [i_0] [i_1] [i_4]) ? (~0) : (((arr_9 [i_0] [i_1]) * (arr_8 [i_0] [i_0])))));
                    arr_19 [i_0] [i_1] = ((~(((arr_11 [i_0] [i_0] [i_4]) ? (arr_11 [i_4] [i_4] [i_4]) : (arr_11 [i_0] [i_0] [i_4])))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    arr_23 [i_0] [i_1] [i_1] [i_8] = (arr_0 [i_0]);
                    arr_24 [i_8] |= (((arr_8 [i_8] [i_0]) | (arr_8 [i_1] [i_1])));
                    var_23 = (max(var_23, (arr_13 [i_1 + 2] [i_1 + 2] [i_1 + 2])));
                    var_24 = (arr_11 [i_1 - 1] [i_1 + 3] [i_1 - 1]);
                }
            }
        }
    }
    var_25 = ((~(~var_5)));
    #pragma endscop
}
