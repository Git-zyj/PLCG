/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 &= (min((((arr_1 [i_0]) ? (arr_2 [i_0] [i_0]) : (min(var_0, 11447323623960044768)))), (((-(arr_3 [i_0]))))));
        var_20 = (min((((~(~var_13)))), (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : var_6))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_21 += -11447323623960044768;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_22 = ((((((arr_0 [i_3]) ? (arr_6 [i_1 - 1] [i_1] [i_1 + 1]) : var_14))) ? var_13 : (((((var_13 ? 9 : var_0))) ? (((-(arr_5 [9])))) : 6999420449749506848))));
                    arr_10 [i_2] = (((((((arr_1 [i_1]) ? var_10 : var_5))) ? ((min(var_1, (arr_7 [i_1] [i_1] [i_1])))) : (arr_1 [i_1 + 1]))));
                    var_23 = (min(var_13, ((6999420449749506848 ? 0 : -23))));
                }
            }
        }
        arr_11 [i_1] [i_1] = (arr_2 [i_1] [i_1]);
        var_24 = ((-(min((arr_0 [i_1 + 1]), (arr_5 [i_1 + 1])))));
        var_25 = (min((min(6999420449749506833, 0)), 0));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_15 [i_4] |= 2079245324825686093;
        var_26 = (min(var_6, ((126 ? -118 : 127))));

        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            arr_19 [0] [7] [i_5] = var_8;
            arr_20 [i_5] [i_5] = (arr_1 [i_4]);
            var_27 = (min(((((arr_13 [i_5 - 1] [i_5 - 1]) ? (arr_13 [i_5 + 1] [i_5 - 1]) : (arr_13 [i_5 - 1] [i_5 + 2])))), (min(var_2, var_2))));
            var_28 = ((2980342193185646145 ? 0 : -2980342193185646145));
            arr_21 [i_5] = (~var_14);
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 19;i_7 += 1)
            {
                arr_27 [i_4] [i_6] [i_7 - 1] = (arr_18 [i_4] [11] [i_6]);
                arr_28 [i_4] [16] [i_4] [i_6] = -120;
            }
            var_29 = (max(var_29, ((((arr_13 [i_6 + 2] [i_6 + 1]) ? (arr_13 [i_6 + 2] [i_6 + 1]) : (arr_13 [i_6 + 2] [i_6 + 1]))))));
            arr_29 [i_6] = ((-(arr_24 [i_6 + 1] [i_6])));
            arr_30 [i_4] [10] [i_6] = ((61917 ? ((var_3 ? 112 : var_7)) : (arr_24 [i_6] [i_6])));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_30 = (max(var_30, ((min((((((-8015702257855340788 ? (arr_25 [i_4] [i_4]) : (arr_33 [i_4] [i_8])))) ? 1 : ((min(38523, -127))))), ((var_1 ? ((-(arr_17 [i_4] [i_8]))) : (arr_33 [i_4] [i_4]))))))));
            var_31 = ((var_2 ? var_11 : -512));
            arr_35 [i_8] = ((var_0 ? (!105) : ((-5242024207152281273 ? var_9 : (((arr_2 [i_8] [i_4]) ? 1 : 38))))));
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 19;i_10 += 1)
                {
                    {
                        var_32 = ((-40 ? (arr_23 [i_8] [i_8]) : (arr_38 [i_9 + 3] [i_9 + 1] [i_9 + 2] [i_9 + 2] [i_9])));
                        arr_40 [i_8] = min(7101120925163166578, (((arr_17 [i_4] [i_4]) ? (arr_17 [i_4] [i_4]) : var_4)));
                        var_33 = ((~(arr_38 [i_10 - 1] [i_10] [i_9 - 2] [i_9] [i_9 - 1])));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            arr_44 [i_11] [i_4] = (arr_36 [i_11] [i_4] [i_4]);
            var_34 = -22360;
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 11;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        for (int i_16 = 4; i_16 < 10;i_16 += 1)
                        {
                            {
                                arr_58 [i_12] [i_12] [i_14] [i_12] [i_15] = (!var_12);
                                var_35 = (!-38);
                            }
                        }
                    }
                    arr_59 [i_12] [i_13] [i_13] [i_13] = min(((var_15 ? (arr_14 [i_13] [i_14]) : -5242024207152281273)), (((((arr_45 [i_13]) ? 1159856681394945930 : (arr_13 [i_12] [i_12]))))));
                }
            }
        }
    }
    #pragma endscop
}
