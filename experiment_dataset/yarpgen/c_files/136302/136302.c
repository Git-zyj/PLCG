/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(!var_13)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_17 -= (((min(var_0, (arr_4 [i_2])))));
                    var_18 = ((((((((10669254212063720059 ? var_9 : (arr_2 [i_1])))) || 20))) - (arr_6 [i_0 + 2])));
                    var_19 ^= (min(((((arr_5 [i_0 - 1] [i_0 + 1] [i_0 + 2]) ? (arr_4 [i_0 + 1]) : 23701))), (arr_3 [1])));
                }
                for (int i_3 = 4; i_3 < 10;i_3 += 1)
                {
                    arr_10 [i_3] = 163;

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_13 [i_1] [i_4] [i_4] = var_15;
                        var_20 = (min(var_20, ((((arr_4 [i_3 + 3]) ? var_13 : (arr_11 [i_3] [i_3 + 3] [i_3]))))));

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_16 [i_0] [12] [i_1] [i_3 - 4] [i_4] [i_4] [i_5] = (arr_9 [6] [i_3 + 1] [i_4] [i_5]);
                            arr_17 [6] [i_1] [i_3] [i_3] [i_3] [i_4] [i_5] &= (arr_0 [i_3]);
                            arr_18 [i_5] [i_4] [i_4] [i_3] [i_3] [i_4] [i_0] = ((!(arr_7 [i_0 - 1])));
                        }
                        arr_19 [i_0] [i_4] [i_0 - 1] = ((-((-(arr_6 [i_4])))));
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_21 = (min(var_21, ((+(((arr_8 [i_1] [i_1]) ? ((max(-112, 21983))) : (((!(arr_15 [1] [1] [i_1] [i_3 + 3] [1] [i_6] [i_6]))))))))));

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_22 = (max(-112, 303356582));
                            var_23 = (max(var_23, (~95)));
                        }

                        for (int i_8 = 3; i_8 < 12;i_8 += 1)
                        {
                            var_24 = (max((((~var_6) * (arr_5 [i_3] [i_6] [i_3]))), (arr_6 [i_3 - 4])));
                            var_25 &= (min((-58 != 63754), var_13));
                            var_26 = min((((((((arr_21 [i_0 - 1] [i_0 - 1] [i_3 + 2] [i_6] [i_8] [i_3 + 2]) ? -126 : var_7))) || (((var_13 ? var_1 : (arr_6 [i_0]))))))), (min((max(36, 112)), (arr_6 [1]))));
                            var_27 ^= (max((min((((arr_20 [8] [i_1] [i_1] [i_1] [i_1] [i_1]) / (arr_22 [i_0] [i_1] [i_3] [i_8]))), (arr_5 [i_3] [i_6] [1]))), var_3));
                            var_28 = ((112 * (!21983)));
                        }
                        for (int i_9 = 3; i_9 < 9;i_9 += 1)
                        {
                            arr_32 [i_1] [12] [i_1] [i_1] [i_1] [i_1] = ((((((arr_25 [0] [i_1] [10] [i_6] [i_6] [i_9 - 3] [i_9]) != (min(var_13, var_0))))) >> (arr_14 [i_1] [i_1] [i_3] [i_3 - 3] [i_6] [i_9])));
                            var_29 = ((max((arr_22 [i_0 + 2] [i_0 - 1] [i_3 - 1] [i_9 + 2]), (arr_23 [i_0] [i_0] [i_0] [5] [i_0 - 1]))));
                            var_30 = (arr_26 [i_0] [i_3] [i_9]);
                        }
                    }

                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        var_31 = (arr_25 [i_0] [0] [i_0] [1] [i_3] [i_10] [i_0]);
                        var_32 |= (((((max((arr_11 [i_0 - 1] [i_0 - 1] [i_1]), (arr_15 [8] [i_0 + 1] [i_0] [i_3] [i_3 - 1] [3] [i_10]))))) / 6061904385441319571));

                        for (int i_11 = 1; i_11 < 12;i_11 += 1)
                        {
                            arr_38 [i_11] [i_11] [i_10] [i_11 - 1] = var_6;
                            var_33 ^= ((var_10 ? (arr_27 [i_1] [i_1] [i_3 - 2] [10] [i_3 - 2] [i_10] [i_11]) : (min((((var_12 >> (((arr_21 [i_11] [i_10] [i_3] [i_1] [2] [i_0 + 1]) - 2882100641))))), (arr_22 [i_0] [i_0] [i_0 + 1] [i_0])))));
                        }
                    }
                }
                var_34 = ((~(((!(arr_7 [i_0 + 2]))))));
                arr_39 [i_0] = (((arr_2 [i_1]) * (min((((arr_34 [i_1]) ? (arr_28 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_1] [i_1]) : (arr_36 [i_0] [i_0] [i_0 - 1] [7] [i_0]))), (arr_26 [12] [i_0] [i_1])))));
                arr_40 [i_0] [i_0] = min(((var_11 >> (((arr_5 [i_0] [i_1] [i_1]) - 22571)))), var_4);
            }
        }
    }
    #pragma endscop
}
