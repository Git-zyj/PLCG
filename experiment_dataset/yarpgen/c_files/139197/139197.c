/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 127;
    var_13 = 2135558531;
    var_14 = var_11;

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        arr_3 [i_0] = (54836 >= var_4);
        arr_4 [i_0] = ((~(max((var_8 << var_11), (arr_1 [i_0 + 2])))));
        var_15 = ((((max((arr_2 [i_0 + 2]), (arr_2 [i_0 + 1])))) ? ((-(arr_1 [i_0 + 3]))) : ((max((~124), (arr_2 [i_0]))))));

        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            var_16 ^= var_10;
            var_17 += (((!(arr_1 [i_0 + 3]))));
            var_18 -= (((((((arr_2 [i_0 + 1]) ? var_7 : (arr_2 [i_0 - 1]))) + 2147483647)) >> (((max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 2]))) - 11328912222176456811))));
        }
        for (int i_2 = 4; i_2 < 9;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_19 = (!1);
                var_20 ^= ((arr_1 [i_0 - 1]) << (((arr_10 [i_2 + 1] [i_2 - 1]) - 3447499024)));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_21 ^= var_2;
                var_22 = (max(var_22, (((!(arr_5 [i_0] [i_2] [6]))))));
            }
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 9;i_7 += 1)
                    {
                        {
                            arr_22 [i_0 - 1] [i_6] [i_5] [4] = (((var_10 + 2147483647) << ((((1 && (arr_14 [7])))))));
                            var_23 = (((((max(var_8, var_11))) ? (arr_21 [i_5] [i_5] [i_5] [i_5] [i_6] [i_7 + 1] [8]) : (((arr_17 [1] [i_6] [i_5] [i_2 + 1]) ? (arr_9 [4] [4]) : var_0)))) & (((((max(var_10, var_4))) ? var_8 : (((arr_0 [i_7]) & (arr_14 [i_0 + 2])))))));
                            arr_23 [9] [9] [9] [i_6] [i_6] = (((arr_11 [i_7] [i_5] [i_5]) << (!var_1)));
                        }
                    }
                }
                var_24 = (((var_7 + 2147483647) >> (((max(var_3, (max(var_3, var_0)))) - 8342589441462163128))));
            }
            var_25 = (min((max((arr_2 [i_0]), (var_11 * var_10))), (max(((-(arr_15 [i_2 - 2] [i_2 - 2] [i_0]))), (arr_18 [i_2 - 4] [i_2] [i_0] [i_0])))));
        }
        for (int i_8 = 1; i_8 < 9;i_8 += 1)
        {
            var_26 = (max(var_26, ((min(13931998237670906103, 4251)))));
            var_27 = (max(var_27, (((((((((arr_24 [i_0] [i_8] [i_8 - 1]) - var_4)) != var_7))) <= ((((max((arr_8 [i_0] [i_8 - 1] [1]), 0)) && ((max(var_3, var_1)))))))))));
            arr_27 [i_8] [i_0 + 3] [i_0] = min((arr_6 [i_8 - 1] [i_0 - 1]), -124);
            var_28 = (min(var_28, (((((((arr_10 [i_0 - 1] [i_8]) || (arr_10 [i_0 + 2] [i_0 + 2])))) >= var_4)))));

            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                arr_32 [i_0 + 3] = ((((arr_26 [i_9]) + 2147483647)) >> (((((max(var_5, var_2)) >> (((arr_31 [i_9] [i_8] [i_0 + 2] [i_0]) - 2045390509)))) - 33)));
                var_29 = ((((!(((var_6 ? (arr_8 [i_0] [i_0] [3]) : var_11)))))) <= var_11);
            }
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                arr_35 [i_0] = (arr_31 [i_0] [i_0] [i_10] [i_10]);
                var_30 = (max(var_30, (max((!var_7), (((arr_26 [i_8 + 1]) != var_0))))));
            }
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                var_31 = ((((max(((max((arr_26 [i_0]), (arr_36 [i_0] [8])))), (arr_24 [i_8 + 1] [i_0 + 2] [i_0 + 1])))) ? (max((arr_6 [i_8] [i_0 + 2]), (max(var_7, (arr_2 [i_11]))))) : (var_11 != var_0)));
                var_32 &= ((var_6 >> (max(((var_9 ? var_9 : var_8)), (arr_2 [i_0 + 1])))));
                var_33 = (max(var_6, (((((0 ? 139 : 549621596160))) ? var_0 : ((((!(arr_0 [i_0 + 1])))))))));
            }
        }
    }
    #pragma endscop
}
