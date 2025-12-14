/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((max((max(var_16, var_6)), (max(var_1, 62))))) ? ((~((14679198317177599091 ? var_2 : var_4)))) : ((((-9314 > (max(var_9, var_5)))))));
    var_18 *= (max(((max(-44, 11))), 250));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = ((-(((arr_4 [14]) ? ((-(arr_5 [i_0 - 1] [i_2]))) : 64))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_20 = (arr_4 [i_3]);
                        var_21 = (((arr_7 [i_0] [i_1] [i_2] [i_3]) * (arr_4 [i_0])));
                        arr_11 [i_0] [i_1 - 2] [16] [i_0] |= 46;
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_22 = (~0);
                        arr_14 [i_0] [i_0] [i_1] [i_0] = 26862;
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_19 [i_0] [i_1] [i_2] [i_1] = (max(((((max((arr_3 [i_2] [i_0]), (arr_15 [i_0]))) <= (arr_13 [i_0])))), (arr_7 [i_0] [i_1 + 1] [i_1 + 1] [18])));
                        var_23 = arr_6 [i_0] [i_1] [i_0];
                    }
                    arr_20 [i_0] [i_1 + 2] [i_2] = ((((((max((arr_10 [i_2] [i_1 + 1] [i_0] [i_0] [i_2] [i_1]), (arr_10 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 1] [i_0])))) ? -19 : (max(18446744073709551613, (arr_2 [i_0]))))) >= (+-1)));
                    var_24 = ((+(max((arr_15 [i_0 - 1]), -249))));
                    var_25 -= max(152, -22508);
                }
            }
        }
        var_26 = (min(var_26, ((max(((-(arr_13 [1]))), (-22 > 1))))));
        arr_21 [i_0] = ((-(max((arr_17 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0]), ((((arr_13 [i_0]) & 13)))))));
        var_27 = ((max((arr_12 [i_0]), (max(2097151, 0)))));
        arr_22 [i_0] = (max(-64, (max(((~(arr_7 [0] [i_0] [i_0] [i_0]))), (arr_10 [7] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0])))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_25 [i_6] = (max(((max(((((arr_6 [i_6] [i_6] [0]) || (arr_2 [8])))), ((-(arr_0 [1])))))), (max((arr_2 [10]), (arr_18 [i_6] [18] [i_6] [18])))));
        arr_26 [i_6] [i_6] = (max(((max((arr_8 [0] [i_6] [12] [12] [i_6]), (arr_18 [i_6] [12] [i_6] [i_6])))), (max((max((arr_1 [2]), (arr_3 [8] [8]))), ((max(254, 164)))))));
        arr_27 [i_6] = (min((max(1, 23)), ((((-110 ? 36771061 : -91)) & (~161)))));
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_28 = (min(var_28, (((13469022365140297505 >> (-11 + 34))))));
        arr_30 [i_7] [i_7] &= (arr_18 [i_7] [i_7] [14] [i_7]);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 13;i_9 += 1)
            {
                {
                    var_29 ^= ((~(max((arr_9 [i_7] [17] [i_7]), 108))));
                    var_30 = (max(var_30, -20049));
                }
            }
        }
    }
    var_31 = (max(var_31, ((max((min((min(var_9, var_0)), ((min(var_13, var_2))))), -255543044)))));
    #pragma endscop
}
