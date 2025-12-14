/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_7, ((1 ? 1 : var_7))));
    var_11 = ((((((1 * var_3) | (1 | 128)))) & ((1122842065 ? 1 : (-9223372036854775807 - 1)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = (max(var_12, ((max(((((arr_0 [i_0] [i_0]) && (arr_1 [i_0])))), (arr_2 [i_0] [i_0]))))));
        var_13 = (max(var_13, ((max(1, 31)))));
        var_14 = ((+(((arr_2 [i_0] [i_0]) << (((max(1, 2269814212194729984)) - 2269814212194729972))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] [i_3] [i_4] [i_2 - 1] [i_5] = (max((((arr_2 [i_2] [i_2 - 1]) | (arr_9 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))), (54 != 87)));
                                var_15 = ((((!(arr_15 [i_1] [i_2] [i_2] [i_2 - 2] [9]))) ? (arr_5 [i_2] [i_2 - 1]) : (-388471857 != 1)));
                                var_16 = max(((9223372036854775792 ? 1 : (arr_15 [1] [i_2] [i_3] [i_4] [i_5]))), (((633332215 | (~-494168884)))));
                                arr_17 [10] [10] [i_3] [i_4] [5] = (((((arr_3 [i_1]) + 2147483647)) << (((var_0 + 1666138895) - 11))));
                            }
                        }
                    }
                    arr_18 [i_3] [i_3] [i_3] = ((1 >= ((+((max((arr_12 [i_1 + 1]), var_8)))))));
                }
            }
        }
    }
    #pragma endscop
}
