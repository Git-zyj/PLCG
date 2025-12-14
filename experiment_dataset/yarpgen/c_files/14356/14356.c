/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_10 + 2147483647) << (var_0 - 1230274061));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_4] [i_3] = ((739373231 == (arr_4 [i_0 + 2] [i_0 + 2])));
                            var_21 = (2975879524 - (arr_10 [i_0 - 1] [i_0 + 1] [i_4 - 1]));
                        }
                        /* vectorizable */
                        for (int i_5 = 4; i_5 < 13;i_5 += 1)
                        {
                            var_22 = -1;
                            var_23 = (var_18 - var_1);
                        }
                        var_24 = (max((~-2018420161), (((arr_10 [4] [i_0 - 1] [i_1 - 1]) * 1))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_25 += ((!(((4218542241 ? (arr_3 [i_1 + 2] [i_1 - 2] [i_2]) : (arr_0 [i_0 - 1] [i_0 - 1]))))));
                        var_26 = (max(var_26, (arr_9 [i_1 - 1] [i_6] [i_0] [i_0 + 1] [i_0])));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_22 [i_0] [i_1] [i_1] [i_2] [i_2] [i_7] = (max(4294967295, (((4494803534348288 ? 2147483647 : var_8)))));
                        var_27 = ((-4074295402 > ((max((arr_21 [12]), 0)))));
                        arr_23 [i_2] [4] [i_7] [i_7] [10] [3] = (arr_12 [i_0] [i_0 + 1] [10] [i_0 - 1] [10] [i_0 - 1] [i_0 + 2]);
                    }
                    var_28 = (min(var_28, ((-(max(var_3, ((30421 ? 18446744073709551603 : var_7))))))));
                    var_29 = (min(((((max(var_11, (arr_17 [i_2] [i_2] [i_1] [i_0])))) ? (max((-9223372036854775807 - 1), 1156995819617606439)) : (max(-1, 18446744073709551605)))), (((-(min((arr_0 [i_0] [i_0]), 3398244836)))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 12;i_9 += 1)
                        {
                            {
                                arr_31 [i_9] [i_0] [i_9] [i_2] [i_9] [i_0] [i_0] = (~var_18);
                                var_30 = (max((arr_12 [i_9 - 2] [12] [i_9 - 1] [i_9 + 1] [i_9 - 2] [i_9 + 2] [i_9 - 1]), (!8865923996418084181)));
                            }
                        }
                    }
                    var_31 = (1346967689147838498 < -32767);
                }
            }
        }
    }
    var_32 = var_14;
    #pragma endscop
}
