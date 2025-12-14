/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    var_17 = (min((3505093576 <= var_13), var_15));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (((0 ? 4294967283 : (arr_1 [9]))));
        var_18 += -var_1;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                {
                    arr_11 [i_2] [i_2] [i_2] [i_3] = (~(arr_5 [i_2 - 1]));
                    arr_12 [i_2] = (arr_3 [i_1] [i_3]);
                    var_19 = (min(var_19, ((~(arr_8 [i_2 - 2])))));
                    var_20 = (~-330229537);
                }
            }
        }
        arr_13 [i_1] = (!(arr_3 [i_1] [i_1]));
        var_21 = -43;

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_17 [i_1] [i_4] = (((4294967294 ^ var_4) ? (12150460337999521134 | 10184551157881590489) : var_0));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 16;i_7 += 1)
                    {
                        {
                            arr_25 [11] [11] [11] [i_6] [i_6] = (6182864397070617019 / 4294967289);
                            var_22 = (((arr_23 [i_7 + 1] [i_7 + 2] [i_7 + 1] [i_7 + 3] [i_7 + 3] [1] [i_7]) * var_7));
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            var_23 = (arr_7 [i_1]);
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 18;i_10 += 1)
                {
                    {
                        arr_33 [i_1] = (((arr_28 [6] [i_10 + 1] [i_10 - 1] [i_10 + 1]) | (arr_28 [i_9] [i_10 - 1] [i_10 - 2] [i_10 + 1])));
                        var_24 = (max(var_24, 8262192915827961126));

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_25 = (15872 < 53717);
                            var_26 -= (~1);
                        }
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            arr_38 [i_1] [1] [i_9] [i_10] [i_10] [18] [6] = ((~(arr_23 [i_10] [1] [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 - 2] [i_10 + 1])));
                            var_27 = ((!(arr_14 [i_1] [i_1] [i_9])));
                        }
                        for (int i_13 = 1; i_13 < 16;i_13 += 1)
                        {
                            arr_41 [i_1] [i_1] [3] [i_13] = (((-65 ? var_13 : 1)) > ((~(arr_10 [i_10] [i_10] [i_9] [i_9]))));
                            var_28 = 18204541466569480148;
                        }
                    }
                }
            }
        }
        arr_42 [i_1] = ((~(arr_22 [i_1] [1] [i_1])));
    }
    #pragma endscop
}
