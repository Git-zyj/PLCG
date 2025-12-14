/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_6 [i_1] = 0;
                    var_17 = ((max(-32750, (arr_0 [i_0] [i_2]))));
                    var_18 = (min(var_18, (((((max(((min((arr_3 [i_0] [i_0]), -1816))), -8)) + 2147483647)) >> ((((((max((arr_2 [i_1]), (arr_0 [i_0] [i_1])))) ? (((min((arr_4 [i_2] [11]), (arr_0 [i_2] [i_1]))))) : (min((arr_2 [i_0]), 26)))) - 39118))))));
                    arr_7 [13] = (((0 | (arr_1 [i_0]))));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    arr_10 [i_3] = (max(((max((arr_3 [i_0] [i_1]), -8))), (((arr_3 [i_1] [i_0]) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_0] [i_3])))));
                    var_19 = (65535 <= 3032680463);
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    var_20 = (max(var_20, 0));
                    arr_13 [i_4] = (((arr_5 [i_0] [i_1]) != (arr_9 [i_0] [i_0] [i_4] [i_4])));
                    arr_14 [i_4] = (arr_12 [i_0] [i_1] [i_4]);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_21 = (arr_9 [i_0] [9] [i_4] [i_6 - 1]);
                                arr_20 [i_0] [i_1] [i_4] [i_0] [i_6 + 1] = ((arr_17 [i_5] [i_5 + 1] [i_5] [i_5] [i_5 + 1]) ? (arr_15 [i_5 + 1] [i_5] [i_4] [i_6 + 2]) : 24);
                                var_22 = (arr_17 [i_0] [i_1] [i_1] [i_6 + 3] [i_5 - 1]);
                                var_23 = (((arr_15 [i_5] [i_5 - 1] [i_4] [i_5]) ? (arr_18 [10] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_4]) : (arr_18 [i_5] [i_5 - 1] [i_5 + 1] [8] [i_4])));
                            }
                        }
                    }
                    var_24 = (((arr_4 [i_1] [i_4]) ? (arr_4 [i_1] [i_4]) : (arr_16 [i_4])));
                }
                var_25 = 1375133248;
                var_26 *= ((8392098971847557977 ? (arr_11 [i_0] [i_0]) : (arr_11 [4] [i_0])));
            }
        }
    }
    var_27 = (min(16884, 555595911));

    /* vectorizable */
    for (int i_7 = 2; i_7 < 17;i_7 += 1)
    {
        var_28 = (arr_22 [i_7 + 1] [i_7 - 2]);
        arr_23 [i_7] = (((arr_21 [i_7 - 2] [i_7 - 2]) != (arr_21 [i_7] [i_7 - 1])));
    }
    var_29 = var_4;
    #pragma endscop
}
