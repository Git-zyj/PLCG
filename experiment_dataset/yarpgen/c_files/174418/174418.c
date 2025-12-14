/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] |= (((-314807275 - (((arr_1 [i_0] [i_0]) - 3895222017)))));
        arr_3 [3] [i_0] = (max(var_12, (min(var_8, (arr_1 [i_0] [i_0])))));
        arr_4 [i_0] = ((max((((arr_0 [i_0]) ? (arr_0 [i_0]) : -314807283)), (arr_1 [i_0] [i_0]))));
        var_17 = (min(((((arr_1 [i_0] [i_0]) || (arr_0 [i_0])))), ((var_4 | (arr_1 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_18 = (min(var_18, 314807285));
            var_19 = (arr_7 [i_2]);
            arr_10 [i_1] = (((arr_6 [i_1] [i_2]) ? (arr_6 [i_1] [i_2]) : var_4));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_20 = var_5;
            var_21 = -314807283;
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            arr_16 [i_1] [i_1] = (!314807282);

            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_22 = (min(var_22, (((-314807283 ? ((-314807283 ? 314807303 : 341083768)) : (~148))))));
                            arr_26 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] |= (!341083768);
                        }
                    }
                }
                arr_27 [i_1] [i_1] [i_1] = (((((-9223372036854775804 ? (arr_25 [i_1] [i_1] [i_1] [i_1] [i_1]) : -314807292))) ? -22679 : var_16));
                arr_28 [i_1] [i_4] [18] = ((9 ? var_5 : (var_14 || -1)));
            }
            arr_29 [i_4] [i_1] [i_1] = (((arr_21 [i_1] [i_1] [i_1] [i_1]) + 3907924678));
        }

        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            var_23 = ((var_13 > (-1652170608 || -314807275)));
            arr_32 [i_1] [i_8] [i_1] = 18446744073709551615;
            var_24 = ((-(((arr_31 [i_1] [i_1] [i_1]) >> (((-127 - 1) + 138))))));
        }
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            arr_37 [i_1] = 9010948780400458311;
            var_25 = (var_2 - 204);
        }
        arr_38 [i_1] [3] = 387042617;
        var_26 = 314807263;
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    {
                        var_27 ^= ((((arr_9 [i_1]) * (arr_34 [i_11]))));
                        var_28 += ((-1652170608 / (arr_36 [i_1] [i_10])));
                        var_29 = (((arr_5 [i_1]) + ((-314807283 ? 3953883527 : 314807292))));

                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            var_30 = (((arr_13 [i_1] [i_10]) != (arr_13 [i_12] [i_11])));
                            arr_49 [i_12] [i_1] [i_12] = 140;
                            arr_50 [i_12] = ((!(((arr_43 [i_1] [10] [i_11] [i_11]) >= 65523))));
                            arr_51 [i_12] [i_12] [i_11] [1] = ((!(arr_22 [i_1] [i_11] [i_12] [i_13])));
                            arr_52 [i_13] [i_13] [i_12] [i_1] [i_12] [i_1] [i_1] = -314807269;
                        }
                        var_31 = 81;
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 22;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 22;i_15 += 1)
        {
            {
                var_32 = (max(var_32, ((max((((((max(127, (arr_58 [i_14])))) || 2139810581))), (~94))))));
                var_33 = (min(var_33, -314807293));
            }
        }
    }
    var_34 -= (((((((min(314807275, var_8)))) + 2147483647)) << (var_15 - 18627)));
    var_35 = var_4;
    #pragma endscop
}
