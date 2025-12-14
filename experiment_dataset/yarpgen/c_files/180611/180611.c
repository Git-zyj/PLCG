/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += ((var_4 ? -32 : var_3));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_16 = ((arr_5 [i_0] [6] [5]) << 1);
                    var_17 = (((arr_0 [i_0 + 1]) + (arr_0 [i_0 - 1])));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_13 [i_3] [i_1] = (~2032);
                            var_18 = (16572 ^ 1);
                            var_19 = ((-(arr_9 [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2])));
                        }
                        for (int i_5 = 1; i_5 < 7;i_5 += 1)
                        {
                            arr_16 [i_0] [i_5] [i_0] [0] = (arr_15 [i_2 - 1] [i_2 - 1] [i_2] [i_0 - 1] [i_1] [i_5 + 1] [1]);
                            arr_17 [i_0] [i_0] [7] [i_0] [1] [i_0] [i_5] = (arr_2 [i_0 - 1] [i_0 + 1] [i_0 + 1]);
                            arr_18 [i_5] = ((!(arr_1 [i_0 - 1])));
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_20 = (arr_6 [i_2 + 1] [i_2] [i_2 + 1]);
                            var_21 += (1658396547 && 127);
                            arr_23 [i_1] [i_1] [i_1] [i_3] [i_1] [i_6] = 8941289842132188273;
                        }
                        for (int i_7 = 4; i_7 < 9;i_7 += 1)
                        {
                            var_22 += ((1 ? 1658396574 : 32));
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_7] = (arr_12 [i_2 + 1]);
                        }
                        arr_27 [i_0] [i_1] = ((-89 % (arr_15 [i_1] [i_1] [i_2] [i_3] [i_2] [1] [i_2 - 2])));
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_23 = ((!(arr_15 [i_0 - 1] [i_8] [i_0 - 1] [i_2 + 1] [i_2 + 1] [3] [i_1])));
                        var_24 = (arr_12 [i_0 + 1]);
                        var_25 += (11938403428435639024 < -32);
                    }
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        var_26 = 32394;
                        arr_33 [i_9 + 1] [i_9] [i_0] = 28171;
                        var_27 = (min(var_27, (((~(arr_21 [i_2 - 2] [i_0 - 1]))))));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_28 = (((~(arr_11 [i_0] [5] [i_0]))));
                        arr_37 [i_0] [1] [i_1] [i_0] = 21854;
                        var_29 += ((833148892 + (arr_30 [i_0] [i_1] [6] [i_0 + 1] [i_1])));
                    }
                }
            }
        }
        var_30 = (max(var_30, (arr_14 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0] [8])));
        arr_38 [i_0] = (arr_35 [i_0 - 1] [i_0 + 1]);
    }
    /* vectorizable */
    for (int i_11 = 3; i_11 < 14;i_11 += 1)
    {
        var_31 += -48;
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    {
                        var_32 = 14397;
                        var_33 = (((arr_44 [i_14] [i_11 - 1] [i_12] [i_11 - 1]) < 411365315));
                    }
                }
            }
        }
        arr_49 [i_11] [i_11 - 2] = -2873790476290657904;
    }
    #pragma endscop
}
