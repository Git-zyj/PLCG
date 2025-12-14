/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-16390 ? ((((max(9631992023231690827, 32756))) ? ((max(3292607079, -114))) : var_12)) : var_9));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 |= (((((max((arr_4 [i_0 - 1]), (arr_4 [i_0 + 1]))))) >= (arr_4 [i_0 + 1])));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_9 [i_0] [1] [i_3] [i_1 - 1] [i_1] = -2094426000;
                        arr_10 [i_1] [i_1] [i_1] [i_3] = 29550;
                        arr_11 [i_1] [i_1] = 28495;
                        var_15 += var_1;
                    }
                    arr_12 [i_1] = (arr_0 [i_0 + 2] [i_0 + 2]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1] [i_2] [i_4] [i_1] = var_2;
                                arr_20 [i_1] [i_1] [i_2] [i_5] = (((((!(arr_4 [i_1 - 1])))) << (((arr_4 [i_1 - 1]) - 55))));
                                arr_21 [i_5 - 2] [i_0 + 2] [2] [i_4] [i_1] = (arr_16 [i_0] [i_1 - 1] [i_2] [i_0] [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 13;i_8 += 1)
            {
                {
                    arr_32 [i_6] [i_7 - 3] [0] [i_8] = (((((arr_29 [8] [1] [i_7 + 3]) || (36743 && 499056679530020676))) && (arr_28 [i_7])));
                    var_16 = (((((-1 ? var_7 : (~8814752050477860767)))) ? (max((min(5, 896)), -16409)) : 1));
                }
            }
        }
    }
    #pragma endscop
}
