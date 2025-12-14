/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = max(var_3, (var_7 == 49314));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_3] [i_2] [i_3] [i_2] [i_1] [i_0] = 16221;
                                var_12 = ((arr_8 [i_4 + 1] [i_2 + 2] [i_1]) % 18361);
                                var_13 ^= (arr_15 [i_0] [i_0]);
                                arr_17 [i_0] [i_0] [i_2 + 1] [i_3] [i_4 + 1] &= 18229729179809504503;
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = 1976675729;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_14 += ((0 ? (arr_12 [i_6] [i_6] [i_2 - 1] [i_5] [i_6]) : (arr_12 [i_6] [i_1] [i_2 - 1] [i_2] [i_6])));
                            var_15 = ((((233 || (arr_8 [i_2] [i_1] [i_2]))) ? (((18229729179809504523 ? (arr_5 [i_2]) : 35510))) : -18229729179809504530));
                            var_16 ^= -43;
                        }
                        for (int i_7 = 3; i_7 < 14;i_7 += 1)
                        {
                            var_17 *= (((arr_25 [i_2 - 1] [i_7 - 2] [i_0]) / 1976675735));
                            var_18 |= (2113747070040371340 || -43);
                        }

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_19 = -1976675730;
                            var_20 |= (1976675729 ^ 51887034);
                        }
                    }
                }
            }
        }
        var_21 = 12611;
        var_22 = (min(var_22, ((((arr_21 [i_0]) + (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                {
                    var_23 = (max(var_23, (((((0 ? 1 : var_1)) << (((-1976675730 + 1976675785) - 55)))))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 14;i_12 += 1)
                        {
                            {
                                arr_41 [i_11] [i_11] [i_11] [i_11] [1] = -var_1;
                                var_24 = (arr_23 [i_0] [i_0] [i_0] [i_0] [i_10] [i_11] [i_12]);
                                var_25 = (arr_3 [i_0]);
                            }
                        }
                    }
                    arr_42 [i_9] [i_9] [i_0] = (arr_32 [i_0]);
                    arr_43 [i_0] [i_0] [i_9] [i_10] = var_6;
                }
            }
        }
    }
    var_26 = (((-83 + 2147483647) >> (((max(1976675729, var_3)) - 1976675712))));
    #pragma endscop
}
