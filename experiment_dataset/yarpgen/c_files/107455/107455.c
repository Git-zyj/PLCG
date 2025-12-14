/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min(-18470, (max(var_4, -7245))))) <= var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 |= arr_4 [14] [i_2];
                    arr_7 [i_0] [i_1] [i_2] [19] = ((((~(arr_0 [i_2] [i_1 - 1]))) * ((~(255 & 32745)))));
                    arr_8 [i_0] [i_0] [i_0] [i_1] = var_7;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    arr_18 [i_3] [i_4] [i_5] |= arr_1 [i_3];
                    var_15 = (max(var_15, ((((arr_0 [i_3] [i_4]) % 32745)))));
                    var_16 = arr_1 [i_3];

                    for (int i_6 = 4; i_6 < 15;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_17 = (((arr_23 [i_6 - 1] [i_6 - 2] [i_6 - 1] [i_6 - 4] [i_6 - 3] [i_6 + 2]) != (arr_23 [i_6 + 2] [i_6 - 4] [i_6] [i_6 - 4] [i_6 - 3] [i_6 + 3])));
                            var_18 = 231;
                            var_19 *= (((arr_15 [i_3] [i_5]) && (((var_0 ? var_7 : (arr_9 [i_3]))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_20 = (-32725 > 117);
                            arr_27 [i_4] = (((arr_5 [i_3] [i_4] [i_5] [i_6]) ? (~var_12) : (var_7 - 142)));
                            arr_28 [i_3] [i_3] [i_3] [i_8] = (((arr_26 [i_6 - 4] [i_6 - 3]) * (arr_11 [i_6 + 1])));
                        }
                        var_21 = ((((((~var_2) - (arr_24 [i_6 + 3] [i_6] [i_6 + 3] [i_6 - 1] [i_6] [i_6 - 1] [i_6])))) ? var_2 : var_5));
                    }
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        var_22 = (((((((min(var_9, var_1))) ^ var_3))) ? (((((142 ? var_3 : var_11))) ? (((arr_15 [i_4] [i_9]) ? (arr_13 [i_3] [i_9]) : (arr_17 [i_9] [i_4] [i_4]))) : (arr_1 [i_3]))) : (arr_0 [i_4] [i_5])));
                        var_23 = (min(var_23, (((((-(arr_4 [i_5] [i_9]))) < var_9)))));

                        for (int i_10 = 1; i_10 < 17;i_10 += 1)
                        {
                            arr_33 [i_10] [i_4] [i_4] [12] [i_4] [i_4] = (!122);
                            var_24 = ((((((min(0, 209))) ? var_11 : ((max((arr_25 [i_9] [i_9]), 45))))) | (((arr_26 [i_9] [i_5]) ? (((arr_25 [i_3] [i_3]) << (var_6 - 61))) : var_6))));
                            var_25 = ((0 != (max(var_4, (((arr_15 [i_4] [i_10 - 1]) ? 237 : var_11))))));
                            var_26 = (max(var_26, (((!(((-((((arr_6 [18] [i_9] [i_5]) <= 15)))))))))));
                        }
                    }
                    var_27 = var_4;
                }
            }
        }
    }
    #pragma endscop
}
