/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = ((((((arr_0 [i_0] [i_1]) / 13130))) ? ((3063821427 ? 255 : 1071525633)) : (((-(arr_0 [i_0] [i_0]))))));
                arr_4 [i_0] [i_0] = ((~(arr_0 [12] [i_1])));
                var_15 = 3993599198;
                var_16 = (((((3348643066 ? (arr_2 [i_0] [i_0] [i_0]) : (arr_2 [i_0] [i_1] [i_0])))) ? ((var_13 - (arr_2 [i_0] [i_1] [i_0]))) : (((arr_2 [i_0] [i_0] [i_0]) + -106885482))));
                arr_5 [i_0] [0] [3] = (arr_1 [i_0] [i_0]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_17 = (min(var_17, (arr_8 [i_3] [4] [i_4])));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        arr_15 [i_2] [i_5] = 92;
                        arr_16 [i_5] [i_4] [i_4] [13] = var_8;
                        arr_17 [i_3] [i_4] [i_5] = (((arr_14 [i_2] [i_3] [i_4] [i_2]) <= (((0 ? -25896 : 9)))));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        var_18 = ((((!var_0) ? (arr_19 [i_2] [i_3] [i_4] [i_6] [i_2] [i_3]) : var_0)));
                        var_19 = (((arr_13 [i_6] [i_4] [i_3] [i_2]) ? (((arr_12 [i_3]) / (arr_12 [i_2]))) : (((arr_12 [i_2]) ? (arr_13 [i_2] [i_3] [i_4] [5]) : (arr_12 [i_2])))));
                        var_20 = (max(51432, (min(8828, 1))));
                        var_21 = (((((~((1 ? 43269 : -13))))) ? (((((~(arr_9 [i_2] [i_3] [i_2])))) & (var_10 | var_3))) : (((~(arr_11 [i_2] [i_2]))))));
                        arr_20 [i_6] [i_4] [i_6] [i_6] = (max((((arr_6 [4] [4]) & ((15690 ? 65524 : -87)))), (((arr_8 [i_2] [i_3] [i_4]) ? (arr_8 [i_2] [i_3] [i_4]) : (arr_8 [i_2] [i_2] [i_6])))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 10;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 8;i_11 += 1)
                        {
                            {
                                var_22 -= ((((((arr_19 [i_7] [i_7] [i_7] [8] [i_8 - 2] [i_7]) && (arr_19 [i_8] [9] [i_8] [i_8] [i_8 - 2] [i_11 + 1])))) * ((min((var_7 || var_10), (((arr_10 [i_7] [i_7] [i_7]) > var_11)))))));
                                var_23 = (arr_30 [1] [i_8]);
                            }
                        }
                    }
                }
                var_24 ^= ((0 + ((0 ? 10 : (arr_8 [i_8 - 2] [i_8] [i_8 - 2])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 18;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 18;i_14 += 1)
            {
                {

                    for (int i_15 = 2; i_15 < 16;i_15 += 1)
                    {
                        arr_45 [i_12] = (535822336 / -7);
                        var_25 *= -26761;
                        var_26 = ((((((44 >> (1078 - 1065)))) ? ((((!(arr_6 [1] [1]))))) : (max((arr_40 [i_12] [i_13] [i_12]), (arr_41 [i_12] [i_12] [i_12] [i_12]))))));
                    }
                    var_27 -= ((((((arr_35 [i_14]) ? (arr_42 [i_12] [i_12] [i_12] [i_13] [i_13] [i_14]) : var_2))) ? (min(32767, -2020936196)) : (-3399412840221354362 > -1)));
                }
            }
        }
    }
    #pragma endscop
}
