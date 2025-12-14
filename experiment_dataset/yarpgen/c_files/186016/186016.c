/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = 61;
        arr_3 [i_0] = ((~(-61 != var_9)));
        arr_4 [2] = (arr_0 [i_0]);
        var_13 ^= ((-(arr_1 [i_0] [i_0])));
    }
    var_14 = var_0;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            {
                arr_11 [3] [12] = (((arr_5 [i_1]) ? (arr_10 [i_1] [i_1] [i_1]) : (((arr_8 [i_1] [5]) ? (arr_8 [i_2] [i_1]) : (arr_9 [i_1] [i_1] [i_2])))));

                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    var_15 = (min(var_15, (arr_9 [i_1] [i_1] [i_1])));
                    arr_14 [i_1] [i_1] [i_1] [12] |= -65507;
                    arr_15 [i_1] [i_3] [i_1] = (((+((112 ? (arr_0 [i_2]) : -9223372036854775790)))));
                    var_16 = (arr_1 [i_1] [i_2]);
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_22 [10] [7] [i_4] [12] = (arr_8 [i_2] [i_4]);

                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            arr_27 [i_6] [i_6] [i_6] [i_6] [i_2] [i_1] = (-62 & 61);
                            arr_28 [i_6] [i_6] [2] [i_5] [i_6] = var_6;
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_17 = (max(var_17, 62));
                            arr_33 [i_5] [i_5] [i_5] [i_5] [i_5] &= ((!(arr_19 [i_7] [i_4])));
                        }
                        for (int i_8 = 4; i_8 < 13;i_8 += 1)
                        {
                            arr_37 [i_1] [i_1] [i_1] [i_4] [i_5] [i_8] [i_8] = (arr_29 [i_2] [i_8 + 1] [i_8] [i_8 + 1] [i_8] [i_8]);
                            arr_38 [6] [6] [7] [0] [12] = ((((-(arr_16 [i_8] [i_4] [i_2] [8]))) >= (((!(arr_18 [i_5] [i_5] [i_5] [i_5]))))));
                        }
                        arr_39 [i_4] [i_4] [i_4] [i_4] = (((arr_1 [1] [i_1]) >> (((arr_1 [i_4] [i_4]) - 6500))));
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        arr_42 [i_1] [i_2] [14] [i_9] = (~112);

                        for (int i_10 = 2; i_10 < 13;i_10 += 1)
                        {
                            arr_46 [i_1] [i_1] [i_2] [i_10] [i_9] [i_10] = (((-40 + 2147483647) << (46 - 46)));
                            arr_47 [i_10 - 2] [i_10] [i_2] = (arr_35 [i_9] [i_10 - 2] [i_10] [i_10] [i_10 + 1] [i_10] [i_10]);
                            var_18 = (((((1527803572 << (255 - 255)))) >= -1699373060620551708));
                        }
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            var_19 = (max(var_19, -73));
                            var_20 = ((((-(arr_41 [i_1] [i_1]))) / (arr_10 [i_9] [i_2] [3])));
                        }
                    }
                    arr_50 [i_2] [i_2] [i_1] = ((arr_13 [i_4]) - 907032110);
                }
                var_21 = (((((arr_35 [i_1] [i_1] [i_2] [i_1] [i_1] [i_1] [i_1]) && 60)) ? ((((!(arr_17 [i_1] [i_1]))))) : (((44933 ? 1699373060620551737 : (arr_6 [i_1] [i_1]))))));
                var_22 = (~44933);
            }
        }
    }
    #pragma endscop
}
