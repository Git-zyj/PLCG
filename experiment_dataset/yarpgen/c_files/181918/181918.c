/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = var_6;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_13 = (!var_7);
                            arr_14 [i_3] [i_1] [i_2] [i_3] [i_0] [i_3] = (((arr_8 [i_4] [14] [7] [7] [i_4]) << (((arr_11 [i_0] [8] [i_2] [i_3] [i_4]) - 72))));
                            var_14 = (((arr_3 [i_0] [i_0] [i_0]) ? var_0 : var_4));
                        }
                    }
                }
                var_15 = (((arr_13 [i_0] [i_2]) > (arr_13 [i_2] [i_2])));
            }

            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                arr_19 [i_1] [i_5] = arr_0 [i_5];
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_16 = (((((arr_8 [i_7 + 1] [i_6] [8] [i_1] [1]) * (arr_22 [i_5] [3] [i_6] [i_7]))) * ((var_5 / (arr_5 [i_0] [18] [i_0] [1])))));
                            arr_25 [i_5] [i_1] [i_1] [i_1] [9] = (((((var_5 ? var_7 : var_7))) ? ((4946322235357057808 ? var_6 : (arr_10 [15] [i_1] [i_1] [i_1] [15]))) : (arr_17 [i_5] [i_7 + 1])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 18;i_9 += 1)
                    {
                        {
                            arr_30 [i_5] = var_3;
                            var_17 = 32750;
                        }
                    }
                }
                arr_31 [i_5] [i_5] [i_5] [i_5] = 13500421838352493808;
            }
            for (int i_10 = 2; i_10 < 18;i_10 += 1)
            {
                arr_34 [i_10 + 1] = (arr_21 [i_1] [i_1] [i_10 + 1] [i_10] [i_0] [0]);
                arr_35 [i_0] [i_0] = ((~(arr_11 [i_1] [i_1] [i_10 + 1] [i_0] [i_0])));

                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    arr_38 [i_10] = (((var_7 ? (arr_4 [i_0] [i_1] [i_0]) : var_10)));
                    var_18 = var_10;
                }
            }
            /* LoopNest 2 */
            for (int i_12 = 3; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    {
                        arr_45 [i_0] [16] [i_0] [i_0] [i_0] = (arr_7 [i_12] [i_12 - 2] [i_12 + 2]);
                        arr_46 [7] [18] [18] [i_13] = ((((4121824379 ? 56 : 4946322235357057831)) << (((arr_2 [i_0] [i_0] [i_0]) - 1054082490))));
                        var_19 = (~4121824379);
                        var_20 = (arr_10 [i_1] [i_1] [i_1] [i_1] [14]);
                        arr_47 [i_13] [i_1] [8] [i_0] = (((arr_11 [i_13] [16] [i_1] [i_1] [i_0]) ? ((((arr_21 [i_0] [i_0] [i_0] [16] [i_0] [10]) * 0))) : (arr_22 [i_0] [i_0] [i_1] [4])));
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_14 = 1; i_14 < 18;i_14 += 1)
    {
        var_21 = (arr_22 [4] [4] [i_14] [i_14]);
        arr_52 [i_14] [i_14] = (((arr_3 [i_14 + 1] [18] [18]) ? ((var_7 ? 15 : (arr_3 [i_14] [i_14] [i_14]))) : 126));
    }

    /* vectorizable */
    for (int i_15 = 0; i_15 < 11;i_15 += 1)
    {
        arr_55 [i_15] [i_15] = (((arr_24 [i_15] [i_15] [i_15] [i_15] [6]) ? (((var_7 ? var_2 : var_3))) : (arr_27 [i_15] [i_15])));
        arr_56 [i_15] [2] = var_0;
        var_22 = (arr_18 [i_15] [i_15]);
    }
    #pragma endscop
}
