/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_1, var_7));
    var_12 = var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (((arr_1 [i_0]) ? ((((var_8 - (arr_1 [8]))) + (arr_0 [i_0]))) : (((((var_2 ? var_2 : var_8)))))));
        arr_2 [i_0] = ((((var_9 / (arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_0] = (((arr_0 [i_0]) > (((arr_3 [i_1] [i_0] [i_0]) << (((arr_3 [i_0] [i_1] [i_0]) - 1084514018))))));

            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                var_14 += ((!(((~(arr_5 [i_2 + 1]))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_15 = (((var_9 != (((((arr_4 [i_0] [8]) < (arr_11 [i_0] [3] [3] [3] [i_3] [i_3] [3]))))))));
                            var_16 *= (arr_0 [i_0]);
                            var_17 *= (var_8 / var_9);
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_18 *= ((max(6471051178936596825, (arr_11 [4] [i_2] [i_2 + 2] [i_2] [i_2 + 1] [i_2] [i_2 + 1]))));
                    arr_15 [i_5] [i_5] [i_2 + 2] [i_0] [i_0] [7] = ((~((((((arr_4 [i_2] [i_2 - 2]) ? (arr_9 [5] [i_1] [i_2] [i_2] [i_1]) : (arr_4 [i_0] [i_1])))) ? (arr_4 [i_0] [i_0]) : (arr_14 [0] [7] [i_1] [i_2 + 1] [i_5])))));
                    var_19 = (max(var_19, (arr_10 [i_2] [i_2 + 1] [i_2 + 2] [i_2 - 1])));
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    var_20 ^= ((var_3 * (arr_16 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 3] [i_2 + 1] [9])));
                    var_21 = (arr_1 [i_6]);
                }
            }
            var_22 = ((((((((6471051178936596804 ? var_7 : (arr_7 [i_0] [i_1] [i_0] [i_1])))) ? var_10 : ((15113010261896470124 ? 48 : (arr_5 [i_0])))))) ? (((((arr_10 [i_0] [4] [i_1] [i_0]) || var_6)))) : ((max((arr_18 [i_1] [i_1] [i_0] [i_0]), (arr_18 [i_0] [i_0] [i_1] [i_1]))))));
            var_23 = ((((29 ? 62921 : 2147483647)) - (((((((arr_17 [i_0] [6] [i_0] [i_1] [i_1]) ^ var_4))) || ((((-12965 + 2147483647) << (((arr_1 [i_0]) - 99))))))))));
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            arr_21 [i_7] = -32758;
            arr_22 [i_0] [i_0] [i_7] = (((arr_16 [7] [2] [i_7] [i_7] [i_7] [0]) ? (((arr_16 [i_7] [i_7] [i_0] [i_0] [i_0] [i_0]) ? 16325637517548441139 : (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((min(-88, (arr_16 [i_0] [i_0] [i_0] [i_7] [i_7] [i_7])))))));
        }
        var_24 = var_7;
    }
    #pragma endscop
}
