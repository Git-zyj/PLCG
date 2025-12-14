/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((--65532) ? var_5 : var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {

                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            arr_14 [i_0] [7] [i_2] [i_2] [i_2] [i_0] [i_4] = (((((arr_6 [i_0] [i_0]) == 3)) ? (arr_8 [i_0] [i_3] [i_0]) : -2266040311));
                            arr_15 [i_0] [i_0] [i_0] = (arr_7 [i_0] [i_2] [i_0]);
                            var_13 = (max(var_13, 10010399015683555243));
                            var_14 -= 96;
                            arr_16 [i_0] [i_0] [i_2] [i_0] [i_2] [i_2] [i_2] = ((9223372036854775807 ? (!1273388252536034202) : ((var_8 ? var_5 : (arr_5 [i_1] [i_3] [10])))));
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_15 = (min(var_15, 2028926985));
                            var_16 = (min(var_16, 96));
                            var_17 = (~16383);
                        }
                        arr_19 [i_0] [i_0] [i_2] = ((~((5215900908448701789 ? var_4 : (arr_18 [1] [1] [i_2])))));
                        var_18 = ((!(arr_18 [i_0] [i_2] [i_3])));

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_19 -= ((+(((arr_4 [i_6]) / 2266040310))));
                            var_20 = ((((-(arr_11 [i_0] [i_0])))) ? 4044134874 : (((1000268768823856529 ? -55 : -86))));
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_0] [1] = 18446744073709551615;
                        }
                        var_21 = ((~(~36028797018963967)));
                    }
                }
            }
            arr_25 [11] [i_0] [i_1] = ((-(arr_21 [i_1] [i_0] [i_1] [i_1] [i_0])));
            arr_26 [i_0] [i_0] [2] = (!-59);
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_22 = (((arr_1 [i_7]) ? -99 : 18446744073709551615));
            arr_30 [i_0] = var_8;
            var_23 = (((2048 ? -1000268768823856544 : 256)));
        }
        for (int i_8 = 3; i_8 < 11;i_8 += 1)
        {
            arr_33 [i_0] = -1;
            arr_34 [i_0] [i_0] [i_8 - 1] = -1000268768823856544;
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 9;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                {
                    arr_39 [i_0] [9] [i_9] [i_9] = 255;
                    var_24 -= (arr_23 [i_0] [10] [10] [i_0] [i_0] [4] [i_0]);
                }
            }
        }
        arr_40 [i_0] = 1000268768823856544;
        arr_41 [i_0] = ((1000268768823856525 ? -97 : 46));
        var_25 = (min(var_25, ((1 / (arr_38 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 1;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                {
                    var_26 = (max(var_26, (arr_49 [i_13] [2] [i_11])));
                    arr_51 [0] [1] [i_13] = ((!(!1069837610986323587)));
                    var_27 = 250832448;
                    arr_52 [i_13] = ((-50 ? 18446744073709551613 : 48690));
                    arr_53 [i_11] [i_13] [i_13] = var_7;
                }
            }
        }
        var_28 = ((!(((-(arr_46 [i_11] [i_11]))))));
    }
    #pragma endscop
}
