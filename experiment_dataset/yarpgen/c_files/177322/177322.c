/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    var_20 = ((((min(1, 92))) + ((~((max(106, var_13)))))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_21 = (max(var_21, ((max((max((arr_2 [i_0 + 1] [i_0 + 1] [0]), (arr_1 [i_0 + 1]))), (arr_2 [i_0 + 1] [i_0 + 1] [10]))))));
            var_22 = arr_4 [i_0];
            var_23 = (max(var_23, (arr_4 [10])));
            var_24 ^= ((16798617346089366693 ? (((((min((arr_2 [1] [i_0] [1]), var_3))) && (arr_3 [i_0] [i_0] [i_0])))) : ((max(1, -93)))));
        }
        for (int i_2 = 4; i_2 < 22;i_2 += 1)
        {
            var_25 = (min(var_25, (arr_4 [i_2])));
            var_26 = var_13;
            var_27 = (min(var_27, (((((((((arr_3 [i_0 + 1] [i_2] [i_0 + 1]) ? (arr_4 [i_2]) : var_1))) ? (max(1, 1648126727620184923)) : var_18)) + ((((((arr_0 [i_2]) - var_3))) ? (arr_0 [i_2]) : (arr_0 [i_2]))))))));
        }
        var_28 = var_17;
        arr_9 [i_0] = var_6;
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            arr_16 [i_3] [i_4] = ((31744 ? 92 : 527509094414680733));
            arr_17 [i_3] = (arr_4 [i_4]);

            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                var_29 = (16777215 || 1846426170);
                var_30 = (max(var_30, ((((~var_15) ? (arr_12 [i_3]) : var_7)))));
            }
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                var_31 = (((arr_6 [i_3 + 1] [i_3 - 1] [i_3 + 1]) ? (arr_6 [i_3 + 2] [i_3 - 1] [i_3 + 1]) : (arr_6 [i_3 + 2] [i_3 + 2] [i_3 + 1])));
                var_32 = (((arr_8 [i_3 - 1] [19]) ? (((!(arr_13 [i_3])))) : (((-2147483647 - 1) ? (arr_12 [i_4]) : 1))));
            }
            arr_23 [i_3] [i_4] = var_17;
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            arr_27 [i_3] [i_7] [i_7] = ((((((arr_6 [i_3] [i_3 - 1] [i_7]) / 1648126727620184923))) ? (((arr_18 [i_7] [i_3] [i_3 - 1] [3]) * var_0)) : (arr_24 [i_7] [i_7] [16])));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    {
                        var_33 = (max(var_33, 16798617346089366686));
                        var_34 = (min(var_34, (!var_8)));
                    }
                }
            }
            arr_35 [i_3] [22] [i_7] = (arr_22 [i_3 + 1] [i_3 + 1] [i_7] [i_7]);

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {

                for (int i_11 = 3; i_11 < 21;i_11 += 1)
                {
                    var_35 = var_16;
                    arr_41 [i_3] [i_7] [i_10] [i_3] [i_3] [i_11] = 4294967295;
                    var_36 = (max(var_36, var_18));
                }
                for (int i_12 = 1; i_12 < 1;i_12 += 1)
                {

                    for (int i_13 = 1; i_13 < 22;i_13 += 1)
                    {
                        var_37 = (92 == 1846426170);
                        var_38 -= (arr_39 [i_13 - 1] [i_13 - 1] [i_7] [i_7] [i_12] [i_3]);
                        arr_47 [i_13] [i_10] [i_10] [i_3] = (((arr_11 [i_12 - 1]) >= 1846426170));
                    }
                    var_39 = (arr_20 [i_3] [i_7] [i_10] [i_12]);
                }
                arr_48 [i_10] [i_10] [i_10] = (arr_18 [i_3] [i_7] [i_7] [i_10]);
                var_40 = -var_9;
            }
            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                var_41 = ((76 ? ((var_11 ? (arr_13 [i_3 + 2]) : var_2)) : (var_6 && 1648126727620184922)));
                arr_53 [i_3] = (arr_52 [i_3]);
            }
        }
        var_42 -= var_4;
        arr_54 [i_3] = var_14;
        var_43 = (arr_34 [i_3]);
    }
    for (int i_15 = 0; i_15 < 25;i_15 += 1)
    {
        arr_57 [i_15] = ((max((min(var_6, (arr_55 [i_15] [i_15]))), var_14)));
        var_44 *= 174;
    }
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 12;i_16 += 1)
    {
        for (int i_17 = 1; i_17 < 1;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 10;i_18 += 1)
            {
                {
                    arr_64 [i_17] = (arr_21 [i_18] [i_17 - 1] [i_16]);
                    arr_65 [i_18] [i_17] [i_17] [1] = (((arr_0 [i_17]) >> (max((!174), (min(var_14, 1))))));
                    arr_66 [i_16] [i_17] [i_17] [i_16] = var_3;
                }
            }
        }
    }
    #pragma endscop
}
