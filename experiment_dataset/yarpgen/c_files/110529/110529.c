/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (arr_0 [i_0] [9]);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_19 = ((-9 ? 251 : 871144896));
                            var_20 = (arr_9 [11] [i_3 + 1] [i_3 - 1] [i_2 + 2]);
                            arr_10 [i_0] [i_2] [i_2 + 2] [6] = 2147483647;

                            /* vectorizable */
                            for (int i_4 = 3; i_4 < 15;i_4 += 1)
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3 - 1] [1] = (var_9 == -879);
                                var_21 ^= ((-(arr_6 [i_3] [i_3 + 1] [i_3] [i_3])));
                                arr_16 [i_2] [i_2] [i_2 - 1] = (!249);
                                var_22 = (((arr_14 [i_4] [i_4] [i_2] [3] [i_4 - 3] [i_4]) ? -18745 : (((871144896 == (arr_1 [i_1] [i_1]))))));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_23 = (arr_1 [i_1] [i_2]);
                                arr_19 [i_0] [i_3] [i_2] [i_2] [i_2] [15] = (~var_11);
                                var_24 |= ((((-1141353663 ? (((arr_9 [i_0] [i_1] [i_0] [i_3]) ? (arr_14 [i_0] [1] [2] [i_2] [0] [i_3]) : (arr_12 [4] [1]))) : ((max((arr_8 [i_0] [i_0] [i_2 + 2] [i_2 + 2]), (arr_5 [3])))))) ^ (arr_4 [i_0] [16])));
                            }
                        }
                    }
                }
                arr_20 [1] [1] [1] = (((((arr_0 [i_0] [10]) && 22003))) > (!-898));
            }
        }
    }
    var_25 &= var_6;
    var_26 = (min((((!13) ? var_3 : ((var_5 >> (-6080618167655779324 + 6080618167655779346))))), (max((~-19498), 0))));
    #pragma endscop
}
