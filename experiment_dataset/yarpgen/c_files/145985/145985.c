/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += ((((!13133) > var_13)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((((((arr_7 [i_2] [i_1] [i_0]) - 17))) && 1439747779));
                    arr_9 [i_0] [i_0] [i_0] = (((((0 ? var_2 : (arr_7 [i_0] [11] [11]))))) ? ((((var_8 * (arr_0 [i_1] [i_2]))) * (var_10 / 1))) : ((((arr_2 [i_0] [i_0] [i_0]) / (arr_4 [i_0] [i_1] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1 + 2] [i_2] [i_3] [i_4] = (((((((min((arr_0 [i_1 + 2] [i_0]), -1))) ? (((arr_3 [i_0] [i_1] [i_1]) ? -2965160416926808528 : -1439747780)) : (~var_8)))) ? (arr_14 [i_4] [i_4]) : (4 % -1)));
                                var_16 ^= (-1 && 1);
                            }
                        }
                    }
                    var_17 = (~1953255642);

                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            var_18 = (((arr_17 [i_0] [i_0] [i_0] [i_2] [i_5 - 1] [i_6]) ? ((3241626921 >> (arr_12 [i_5] [i_1] [i_2]))) : (arr_15 [i_1 + 2])));
                            var_19 = 1439747789;
                            var_20 |= (((arr_14 [i_1 + 2] [i_6 - 1]) > (((3574792524524730845 != (arr_7 [i_0] [i_0] [i_6]))))));
                            arr_21 [i_6] [i_5] [i_2] [i_1] [i_5] [i_0] = ((-3574792524524730845 * (arr_2 [i_1 + 1] [i_5 + 1] [i_6 + 2])));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_21 = (arr_11 [i_0] [i_7] [i_0] [i_0]);
                            arr_24 [i_5] [i_5] = (((((arr_11 [i_0] [i_0] [i_0] [i_0]) >> (arr_19 [i_0] [i_5 - 1] [i_1] [i_5 + 1] [i_5 + 1] [i_0]))) > (((-(arr_22 [i_5] [i_5] [i_5 + 1] [i_5] [0] [i_5]))))));
                            arr_25 [i_2] [i_5] = ((176234808777208857 ? 0 : 1));
                        }
                        var_22 &= ((59861105986820827 ? 1053340376 : 0));
                        var_23 = ((((((arr_7 [i_0] [i_1] [13]) ^ var_6))) >= (((arr_11 [i_0] [i_1] [i_1] [i_0]) ? -3574792524524730831 : (arr_23 [i_0] [i_1] [i_2] [i_2] [i_5])))));

                        for (int i_8 = 2; i_8 < 19;i_8 += 1)
                        {
                            var_24 = (arr_11 [i_8] [i_5] [i_2] [i_0]);
                            var_25 = (arr_23 [i_5] [i_2] [i_2] [i_1 + 2] [i_5]);
                            var_26 = ((~(arr_1 [i_8 - 2])));
                            arr_30 [i_8] [i_5] [i_2] [i_5] [i_0] = var_5;
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_27 = (~var_1);
                        arr_33 [i_0] [i_2] [i_2] = var_6;
                        var_28 += ((((1238519888 ? (arr_6 [i_0] [i_1] [i_0] [i_0]) : (arr_12 [i_0] [i_1] [i_2])))) ? (((((arr_3 [i_0] [i_2] [i_9]) > (arr_11 [i_9] [i_0] [i_1 + 2] [i_0]))))) : (arr_10 [12] [i_1] [i_1 + 1] [12] [i_1 + 1] [i_1 + 1]));
                    }
                }
            }
        }
    }
    #pragma endscop
}
