/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_2 % var_12);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (min(((-(arr_1 [i_0] [i_0]))), ((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 ^= (((((((arr_3 [i_1] [14]) | (arr_1 [i_1] [i_1]))))) ? (((arr_4 [3] [i_2] [i_1]) - (arr_6 [i_0] [i_1] [i_1] [i_0]))) : (arr_1 [i_0] [i_2])));
                    var_15 ^= (((((+(max((arr_9 [i_1] [i_1]), (arr_7 [1] [i_2])))))) ? (arr_4 [i_2] [i_1] [i_2]) : ((((((59728 + (arr_7 [12] [12])))) > (arr_9 [i_0] [i_0]))))));
                    var_16 += (((((arr_5 [i_0]) + (arr_0 [i_0] [i_1]))) < ((max((arr_5 [i_1]), (arr_5 [i_1]))))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_17 = (min(var_17, (((((min((arr_3 [i_0] [i_1]), (arr_0 [i_0] [i_1])))) ? (arr_1 [3] [i_3]) : (min((arr_10 [i_0] [17] [i_0] [i_0]), (((arr_10 [i_0] [18] [18] [i_3]) ? (arr_6 [i_0] [i_2] [i_1] [i_3]) : (arr_6 [i_0] [i_0] [6] [1]))))))))));
                        var_18 = (!-1437047970);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_1] [i_1] = (arr_7 [i_1] [i_2]);
                        arr_15 [i_4] [14] [14] [14] [i_0] &= (((((arr_9 [i_0] [i_1]) + 9223372036854775807)) >> (((arr_5 [i_4]) - 52639))));
                        arr_16 [i_0] [i_0] [i_1] [i_0] [i_2] [i_1] = (min((min((arr_13 [i_1]), (arr_13 [i_1]))), ((-(arr_13 [i_1])))));
                        arr_17 [i_1] = (arr_12 [i_2] [i_1] [i_2] [i_1] [2]);
                    }
                }
            }
        }

        for (int i_5 = 4; i_5 < 19;i_5 += 1)
        {
            var_19 ^= (min(((((max((arr_1 [13] [i_5]), (arr_3 [5] [i_5 - 1]))) <= ((min((arr_7 [8] [2]), (arr_13 [1]))))))), (arr_6 [i_0] [i_0] [i_5] [i_5 - 1])));

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                arr_23 [18] [18] &= ((((((arr_12 [i_0] [14] [i_5] [i_0] [i_6]) + (arr_6 [i_6] [12] [i_5 + 1] [i_0])))) + (((((18446744073709551615 + (arr_0 [i_5 - 1] [i_5])))) ? (((arr_3 [i_0] [i_5 + 1]) + (arr_21 [i_0] [i_0] [i_5] [i_6]))) : (-66 + 225)))));
                var_20 ^= ((((max((arr_12 [i_0] [18] [i_0] [i_6] [i_5 - 3]), (arr_22 [i_0] [10] [10])))) ? ((-(arr_12 [i_0] [1] [i_5 + 1] [4] [i_6]))) : 239));
            }
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            arr_26 [i_0] [i_7] [i_0] = (((10275316413195018299 & 5813) << (((((arr_4 [i_0] [i_7] [i_7]) + 2147483647)) >> (23406 - 23377)))));
            arr_27 [i_0] [i_7] [i_7] = ((+(((arr_8 [i_0] [i_0] [i_7] [i_7]) >> (((arr_8 [i_0] [i_0] [i_0] [i_7]) - 117))))));
        }
        arr_28 [13] = (arr_5 [i_0]);
    }
    #pragma endscop
}
