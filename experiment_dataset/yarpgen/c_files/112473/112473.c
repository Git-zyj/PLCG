/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((max(((min(var_13, var_13))), (var_13 ^ var_4))));
    var_17 = (9223372036854775807 <= 3194816038);
    var_18 = ((((((var_8 ^ var_10) ? var_3 : (var_11 >= var_6)))) && var_15));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 ^= (((((max((arr_5 [i_0] [i_0]), (arr_0 [3])))) ^ (arr_0 [i_0]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_20 += (((arr_12 [i_3] [i_3] [i_2] [5] [5] [i_0 - 1]) + (arr_2 [i_0])));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                arr_15 [15] [15] [i_1] [i_1] [i_1] [i_4] = (arr_6 [i_3]);
                                var_21 = ((((1100151273 ^ (arr_7 [i_0] [i_0] [i_0 + 1] [i_0]))) >= var_15));
                                arr_16 [i_4] = (arr_4 [12] [i_1] [i_2]);
                                var_22 = (max(var_22, (((((((arr_11 [9] [i_1] [i_2] [i_3] [9]) > (arr_2 [i_1]))))) > (arr_1 [i_3 - 1])))));
                            }
                            for (int i_5 = 1; i_5 < 15;i_5 += 1)
                            {
                                var_23 = (min(var_23, ((max((((min(3194816041, 3194816018)) & 25551)), ((((((var_0 > (arr_10 [i_3] [i_2] [4] [i_0])))) | ((min((arr_3 [i_0 + 1] [i_0] [i_0]), (arr_0 [i_0]))))))))))));
                                var_24 &= ((((max(((((arr_19 [i_0] [8] [i_2] [i_0] [i_2]) > var_6))), (arr_14 [i_0] [3] [i_2] [i_3])))) || (arr_20 [i_0] [i_1] [i_1] [9] [1] [i_3 - 3] [i_5])));
                                var_25 = var_2;
                            }
                            for (int i_6 = 1; i_6 < 1;i_6 += 1)
                            {
                                var_26 ^= (arr_14 [i_0] [2] [2] [i_3]);
                                arr_23 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2] [i_3] [i_3] = var_3;
                                arr_24 [2] [8] [11] [8] = ((var_13 % (max((arr_0 [i_0]), (((arr_3 [16] [16] [3]) - var_6))))));
                            }
                            for (int i_7 = 0; i_7 < 18;i_7 += 1)
                            {
                                arr_27 [i_7] [i_2] = ((((min((min((arr_9 [8] [i_3] [i_7]), (arr_26 [i_0] [i_1] [17] [i_1] [i_7]))), (25556 > 1100151252)))) != (max(var_0, ((((arr_19 [2] [i_1] [16] [i_1] [i_2]) & (arr_26 [i_0] [i_0] [i_2] [i_3] [16]))))))));
                                arr_28 [i_0] [i_0] [1] [i_0 + 1] [i_0] = (min((arr_14 [i_0] [i_1] [i_2] [i_3]), -1795045685));
                                var_27 *= (arr_1 [15]);
                                arr_29 [i_0] [1] = var_3;
                            }
                            arr_30 [i_0 - 1] [i_1] [i_2] = var_4;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
