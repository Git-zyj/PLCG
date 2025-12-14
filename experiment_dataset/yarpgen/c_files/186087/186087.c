/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        var_11 = ((!(arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        arr_11 [i_1 - 1] [i_1 - 1] [i_1] [i_0] = ((-(arr_10 [i_0 - 2] [i_1 - 1] [i_2 - 3] [i_3 + 1])));
                        var_12 = 9;
                        var_13 += ((~((-(arr_8 [i_0] [2] [8] [10])))));
                        arr_12 [i_0] [4] = (arr_4 [i_3] [2] [i_1]);
                        arr_13 [2] [i_1] [i_0] = (!var_2);
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_14 = ((-40 ? 562949953421312 : (0 > 1)));
                        arr_16 [i_0] [i_0] [i_0] [i_0] = (-2147483647 - 1);
                        var_15 = (min(var_15, ((((arr_15 [i_2] [4] [i_1] [i_1] [i_1] [i_1 + 1]) ? ((((!(arr_4 [i_0] [10] [10]))))) : (arr_2 [i_1] [i_2]))))));
                        arr_17 [1] [i_0] [2] [i_2] = (arr_9 [i_0]);
                        arr_18 [i_0] [i_2] [i_1] [i_0] = (((!1) ^ (arr_3 [i_1] [i_2] [10])));
                    }
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_16 = (min(var_16, 18259892254909460061));

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            arr_25 [7] [i_1] [i_0] [i_5] [2] = ((var_9 ? 1 : -7));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-((0 ? 3627701226 : 1674451930))));
                        }
                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            arr_29 [i_0] [i_0] [i_1] [i_0] [i_1] [i_0] = ((!(((8243526419327697357 ? var_1 : var_10)))));
                            var_17 = (((arr_10 [i_1 + 1] [i_0 + 3] [i_0] [i_0]) | (arr_0 [i_0] [i_0])));
                            arr_30 [i_0] [6] [i_0] [i_5] |= (18240332327147105565 != 114);
                            var_18 = ((~(arr_24 [i_7] [i_7] [i_7] [i_5] [i_7] [i_5 - 1] [i_7])));
                        }
                        for (int i_8 = 3; i_8 < 7;i_8 += 1)
                        {
                            var_19 = 2190433320960;
                            arr_34 [i_0] [i_5] [i_2 + 1] [3] [i_0] = 252947117;
                            var_20 = 52474;
                        }
                        var_21 ^= arr_19 [i_2] [6] [i_2 - 2] [8] [6] [i_0];
                    }
                    arr_35 [i_0] = 68;
                }
            }
        }
        arr_36 [i_0] = (((28 * var_4) ? (arr_1 [i_0]) : 1));
        arr_37 [i_0] = 68719476735;
    }
    var_22 = var_8;
    #pragma endscop
}
