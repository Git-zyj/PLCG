/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (((arr_2 [i_0]) ? (max((((9708929669277188579 ? -17700 : 65532))), (min(0, (arr_2 [i_0]))))) : (arr_0 [i_0])));
        arr_3 [i_0] [i_0] = ((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))));
        var_20 |= ((var_15 ? (((((var_0 ? (arr_0 [i_0]) : 0))) ? (((arr_2 [i_0]) ? (arr_2 [i_0]) : var_9)) : var_12)) : ((((1 && (arr_0 [i_0]))) ? (!var_14) : ((0 ? (arr_2 [i_0]) : var_4))))));
        var_21 = ((((1 - 192) ? (arr_0 [i_0]) : ((var_2 ? var_5 : (arr_2 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_22 |= ((-(arr_5 [i_1 + 1])));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                {
                    arr_12 [i_1] = (arr_9 [i_1 + 1]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_23 = (((((var_12 ? (arr_14 [i_1 + 1] [i_2] [i_2] [i_4] [i_5] [i_5]) : (arr_7 [i_1])))) ? 48 : ((((arr_5 [i_4]) ? (arr_0 [i_1]) : (arr_14 [i_1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_5] [i_5]))))));
                                arr_19 [i_1] [i_1] [i_4] = (((((arr_1 [i_1] [i_1 + 1]) >> (((arr_7 [i_2 - 3]) + 10138)))) | (arr_17 [i_4] [i_5] [i_1] [i_2] [i_2] [i_4])));
                            }
                        }
                    }
                    arr_20 [i_1] = ((((arr_17 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_3]) + 2147483647)) >> (((arr_1 [i_1] [i_1]) - 934728243)));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_26 [i_1] [i_3 + 1] [i_3 + 1] [i_7] [i_7] [i_7 - 4] = (arr_17 [i_3] [i_3] [i_3 - 2] [i_3 - 2] [i_3] [i_7]);
                                var_24 = (((!var_14) <= var_17));
                            }
                        }
                    }
                }
            }
        }
        var_25 = (arr_11 [i_1] [i_1]);
    }
    var_26 = (min(var_26, 43010));
    var_27 = ((((max(82, 600801854))) <= var_17));
    #pragma endscop
}
