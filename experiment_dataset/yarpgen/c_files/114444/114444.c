/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [5] = (((max((arr_4 [i_1 - 1]), (((var_15 && (arr_2 [i_0] [i_1])))))) ^ ((+(((arr_0 [i_0]) << (var_2 - 114)))))));
                var_19 = -var_7;
                arr_6 [i_0] = (min(((((var_16 * 1115392688) > (arr_4 [i_1])))), ((~(((arr_3 [i_1 - 1]) ? var_9 : (arr_4 [i_1])))))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    var_20 = (~(arr_0 [i_1 + 1]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] = var_6;
                                var_21 -= var_2;
                                var_22 = ((~(arr_14 [i_0] [i_1])));
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] = ((((var_9 ? var_8 : (arr_14 [i_1 - 2] [i_1 - 2])))) != (((arr_13 [i_0] [i_0] [i_1 + 1] [i_2] [5]) ? 10572 : (arr_10 [i_0] [6] [i_1 - 1] [i_2]))));
                    var_23 = (var_16 ? (arr_14 [i_1 + 2] [i_2 - 2]) : ((((arr_12 [i_2] [i_1]) ? (arr_2 [8] [i_0]) : (arr_1 [i_0])))));
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    arr_20 [3] [i_1] [i_5] = ((((((arr_15 [8] [i_0] [i_0] [i_0] [i_0] [4]) ? (arr_11 [i_0] [i_1 - 1] [i_1 - 1] [i_5]) : (arr_1 [i_0])))) ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : (arr_15 [i_0] [7] [i_0] [i_1] [i_0] [i_5])));

                    for (int i_6 = 4; i_6 < 11;i_6 += 1)
                    {
                        var_24 = (arr_7 [i_0]);
                        var_25 = arr_21 [i_6] [i_6] [i_6 - 3] [i_6 - 1];
                        var_26 ^= ((~(arr_11 [10] [5] [10] [i_1 - 1])));
                        var_27 = (((((((arr_8 [i_0] [i_1]) ? var_2 : (arr_3 [i_0]))) >> (-87 + 97)))) ? ((max((arr_23 [i_6]), ((((arr_13 [4] [i_1] [i_5] [i_5] [10]) <= var_13)))))) : (arr_23 [i_0]));
                        arr_24 [i_0] [4] [i_0] [i_0] [i_0] [i_0] = ((arr_0 [i_1 - 2]) ? (arr_22 [i_0] [i_1] [i_1] [i_5] [i_6] [3]) : (arr_9 [i_1 + 2] [i_1] [i_1]));
                    }
                    var_28 = (max((((arr_22 [i_1 - 2] [i_1 - 3] [i_1 - 1] [i_1] [i_1 - 2] [i_1 - 3]) ? (max((arr_23 [i_1 + 2]), (arr_12 [i_0] [i_1 - 1]))) : var_16)), ((((-(arr_22 [i_0] [i_1] [i_0] [8] [i_0] [i_0])))))));
                }
                var_29 = (max(var_29, ((((arr_19 [4] [4] [i_1 + 1] [i_1]) < (((arr_23 [i_0]) ? var_10 : (arr_19 [i_0] [i_1] [6] [10]))))))));
            }
        }
    }
    var_30 *= ((-(max(var_12, ((var_12 ? var_12 : var_4))))));
    #pragma endscop
}
