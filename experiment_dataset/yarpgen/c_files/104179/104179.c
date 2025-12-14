/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 |= var_10;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = (((((arr_0 [i_0] [i_0]) / (arr_2 [i_0] [i_0])))) * (((arr_3 [i_0]) / var_6)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 &= 16997;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_15 += max(16994, 0);
                                arr_14 [i_0] [i_1 - 1] [i_2] [i_2] [i_4] = var_8;
                                var_16 += var_1;
                                var_17 -= (max(((max(1, (~2602401335)))), var_5));
                            }
                        }
                    }
                }
            }
        }
        var_18 -= ((var_10 ? 48541 : 8365224791860236626));
        var_19 = (min(var_19, (min((~var_2), (min((arr_12 [i_0] [i_0] [i_0] [2] [i_0] [i_0] [i_0]), var_6))))));

        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            var_20 += 16984;
            var_21 ^= var_8;
            arr_18 [i_5] [i_5] = (((min((min(var_8, var_3)), var_1)) - (((~(~var_7))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            var_22 = (min(var_22, ((((((var_3 ? (arr_2 [9] [i_0]) : var_9))) > var_3)))));
            var_23 = (max(var_23, var_0));
        }
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        arr_23 [1] = ((~(arr_22 [i_7] [i_7])));
        var_24 += ((~((((((13424049533190478829 ? var_4 : 13424049533190478829))) || (1229070756281498835 * 18446744073709551614))))));
        var_25 += var_9;
        arr_24 [i_7] [i_7] = ((~(min(var_2, (arr_21 [i_7] [i_7])))));
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        var_26 = var_7;

        for (int i_9 = 2; i_9 < 23;i_9 += 1)
        {

            /* vectorizable */
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {

                for (int i_11 = 1; i_11 < 23;i_11 += 1)
                {
                    arr_37 [i_8] [i_8] [i_8] [1] [i_8] |= var_1;
                    arr_38 [i_11 - 1] [i_11] [i_11] [8] = ((var_10 + (~var_9)));
                    arr_39 [1] [i_11] = ((1 ? var_9 : var_4));
                }

                for (int i_12 = 3; i_12 < 24;i_12 += 1)
                {
                    var_27 = (max(var_27, var_9));
                    var_28 -= var_2;
                }
                for (int i_13 = 1; i_13 < 24;i_13 += 1)
                {
                    var_29 = ((~(arr_36 [i_9 + 1] [i_9 + 2] [i_13 - 1] [i_13])));
                    var_30 = (arr_36 [9] [i_9 - 1] [i_10] [i_8]);
                    var_31 = (~var_4);
                    arr_45 [i_8] [14] [i_9] [i_10] [i_9] = var_3;
                }
                var_32 ^= ((~(arr_36 [i_8] [i_9] [i_9] [i_10])));
                arr_46 [i_8] [1] [12] = var_0;
            }
            var_33 += ((((min(var_6, 13424049533190478829))) ? (min(-7090400965892798808, 16997)) : (~199)));
            var_34 += (max((~var_8), ((var_4 ? (arr_43 [i_9 + 2] [i_9 - 2] [i_9 - 2]) : (~var_6)))));
            var_35 &= max((~7090400965892798825), (~1));
            arr_47 [i_8] = ((~(((((5022694540519072786 ? 13424049533190478826 : var_0))) ? (((var_1 ? var_0 : var_7))) : ((var_10 ? var_8 : var_4))))));
        }
        var_36 += (var_3 ? var_2 : (~var_5));
    }
    #pragma endscop
}
