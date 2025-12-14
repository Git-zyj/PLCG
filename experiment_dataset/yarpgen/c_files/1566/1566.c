/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_12 = (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : ((var_10 ? 1992410427 : -11))));
        var_13 = (min(var_13, var_10));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_4 [i_0] [i_1] &= (!var_7);

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                arr_8 [i_0] = 24540;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_14 = (max(var_14, (arr_2 [i_4 + 1] [i_4 + 1])));
                            var_15 = var_1;
                        }
                    }
                }
                var_16 = (min(var_16, var_7));
            }
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                var_17 = (((arr_7 [i_0] [i_0] [i_0] [i_0]) >= var_8));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_22 [i_0] [i_6 - 2] = ((((((248 ? -35 : 2147483640)) + 2147483647)) << (2147483618 - 2147483618)));
                            arr_23 [i_0] |= (((arr_21 [i_6 - 1] [i_6 - 1] [i_5] [i_6] [i_5] [i_0] [i_1]) ? (((arr_12 [i_0] [i_1] [i_5]) ? (arr_6 [i_0] [i_1] [i_5]) : (arr_0 [i_5] [i_6]))) : (arr_16 [i_6 - 2] [i_6 + 1] [i_6 - 2] [i_6 - 2])));
                            var_18 &= ((var_9 / (((var_1 ? (arr_7 [i_0] [i_0] [i_5] [i_6]) : (arr_16 [i_0] [i_1] [i_5] [i_6]))))));
                        }
                    }
                }
                var_19 ^= (32761 - var_11);

                for (int i_8 = 3; i_8 < 15;i_8 += 1)
                {
                    var_20 = (min(var_20, var_10));

                    for (int i_9 = 3; i_9 < 14;i_9 += 1)
                    {
                        arr_29 [i_0] [i_0] [i_1] [i_5] [i_8] [i_9 - 1] [i_8] = -63322;
                        var_21 = (arr_15 [i_0] [i_0] [i_5]);
                        arr_30 [i_0] [i_8] [i_5] [i_8 + 2] [i_0] = ((!(arr_25 [i_8] [i_9 + 2] [i_8 - 1] [i_8])));
                    }
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        arr_34 [i_0] [i_0] [i_0] [i_8] [i_0] = var_4;
                        arr_35 [i_0] [i_1] [i_5] [i_8] [i_8] [i_10] = var_11;
                        arr_36 [i_0] [i_0] [i_5] [i_8] [i_8] = ((954242018 ? 18446744073709551612 : 18446744073709551606));
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        var_22 = (((-1 || 25) ? 1146901456 : ((((arr_3 [i_8 + 1] [i_5]) && (arr_39 [i_8] [i_1] [i_1] [i_1] [i_8]))))));
                        arr_40 [i_1] [i_5] [i_1] |= ((!(((arr_37 [i_11] [i_5] [i_5] [i_5] [i_0]) <= var_4))));
                        var_23 = (min(var_23, ((-12994 ? -1 : (((arr_9 [i_0] [i_1] [14] [i_1]) ? 3231 : var_3))))));
                    }
                }

                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    arr_43 [i_0] [i_12] = (481979516853474975 && 32747);
                    var_24 = var_8;
                    var_25 = (max(var_25, (~var_7)));
                    arr_44 [i_12] = (arr_27 [i_1] [i_1] [i_1] [i_12] [i_1] [i_12] [i_1]);

                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        arr_47 [i_13] [i_12] [i_5] [i_1] [i_0] [i_0] = (((arr_32 [i_0] [i_5] [i_5] [i_1] [i_0]) > var_4));
                        var_26 = ((-2147483641 ? ((-250 ? var_2 : var_6)) : 9));
                        var_27 = 8176;
                        var_28 -= (1146901446 & var_9);
                    }
                }
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    var_29 = (min(var_29, ((2097148 ? 15828 : -27860))));
                    var_30 += ((-(((arr_9 [i_5] [i_1] [i_5] [i_5]) + 2147483616))));
                }
            }
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                var_31 = (max(var_31, (((-var_6 ^ (arr_28 [i_15] [i_15] [i_0] [i_1] [i_0] [i_0] [i_0]))))));
                var_32 = ((-(arr_15 [i_0] [i_1] [i_15])));
            }
            arr_52 [i_0] [i_0] = var_5;
        }
        for (int i_16 = 1; i_16 < 16;i_16 += 1)
        {
            arr_55 [i_0] |= ((!(((var_1 ? var_7 : (arr_25 [i_0] [i_16 + 1] [i_16] [i_0]))))));
            arr_56 [i_16] [i_16 - 1] [i_16 - 1] = (((arr_6 [i_16 + 1] [i_16] [i_16 - 1]) ? (-1146901453 / var_6) : (arr_7 [i_0] [i_16] [i_0] [i_0])));
        }
    }
    for (int i_17 = 0; i_17 < 17;i_17 += 1) /* same iter space */
    {
        var_33 = (max(var_33, var_11));
        var_34 ^= (((arr_10 [i_17] [i_17] [i_17] [i_17] [i_17]) && ((min((max(var_6, (arr_50 [i_17] [i_17]))), (arr_26 [i_17] [i_17] [i_17] [i_17] [i_17]))))));
        var_35 = (arr_10 [i_17] [i_17] [i_17] [i_17] [i_17]);
    }
    var_36 -= (((((-11092 / ((-11 ? -1146901429 : 27841))))) ? (((var_3 > ((-27598 ? 27854 : -27858))))) : (max(((min(32760, var_0))), ((2147483641 ? var_6 : var_7))))));
    #pragma endscop
}
