/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((!17916326248348296403) != 1676416718));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    var_11 = (((arr_2 [i_0]) ? (~530417825361255220) : var_9));
                    var_12 = var_7;
                    arr_8 [i_0] [i_2] = ((23 ? (arr_7 [i_0]) : (((arr_6 [i_0] [1]) ? var_1 : (arr_4 [i_1] [i_2])))));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_13 = var_7;
                    var_14 |= (((((arr_2 [i_1]) ^ var_4)) | ((min(var_7, var_7)))));
                    var_15 = (((var_8 >= var_1) <= (max((max(17916326248348296403, -7725793632886969427)), -1883))));
                }

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_14 [i_0] = var_3;
                    var_16 = var_1;
                    var_17 = (var_3 + ((var_9 ? var_4 : 17916326248348296395)));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
                {
                    var_18 ^= ((var_6 * (!var_2)));
                    var_19 = (min(var_19, (((var_9 | ((3 ? var_0 : var_3)))))));
                }
                for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
                {
                    var_20 -= (arr_12 [i_1]);
                    var_21 = (max((arr_10 [i_1]), (arr_3 [i_0] [11])));
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        var_22 = var_2;
                        arr_29 [i_0] [i_1] [i_0] = (((var_7 && var_0) ? ((var_0 ? 1 : var_8)) : (var_9 || var_5)));
                        arr_30 [i_0] [i_0] [i_0] = (var_3 + var_5);
                        var_23 = var_7;
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_24 = (~(arr_27 [i_7 + 1] [i_7 + 1] [9] [i_9] [i_7 + 1] [i_9]));
                        var_25 = ((var_5 ? var_5 : (arr_17 [i_0] [i_0] [i_7] [10])));
                        arr_33 [i_0] [i_0] [i_7] [i_0] = (arr_25 [i_0] [i_1] [i_0] [i_0]);
                    }
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        var_26 = (((((530417825361255210 >> (-2 + 33)))) ? (arr_27 [i_7] [i_7] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1]) : (var_1 && var_0)));
                        arr_37 [i_0] [i_1] [i_0] [i_7] = var_5;
                        var_27 = (max(var_27, (var_2 && 530417825361255243)));
                    }
                    var_28 = (max(var_28, ((((arr_32 [i_7 + 1] [i_7 + 1] [i_1] [i_7 - 1]) - (var_5 - 114))))));
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            {
                                var_29 = var_3;
                                var_30 = (arr_15 [i_12] [i_0] [i_0]);
                                var_31 = (((arr_11 [i_0] [i_0] [i_0]) ? ((333730285247574745 ? var_1 : var_7)) : (arr_39 [i_11 - 1] [i_0] [i_7 + 1] [i_0] [i_7 + 1])));
                                var_32 = (((arr_39 [i_0] [i_0] [i_0] [i_0] [i_0]) > 7725793632886969436));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                arr_47 [i_0] [i_0] = (var_3 >= var_5);
                                var_33 = (min(var_33, (((-333730285247574745 ? -7725793632886969427 : 3584606677381083925)))));
                                arr_48 [i_0] [i_0] [0] [0] [i_0] [0] [i_1] = (arr_3 [i_14] [i_14]);
                                arr_49 [i_0] [i_1] [i_0] [i_13] [i_1] [1] [i_1] = ((var_2 ? var_4 : 530417825361255211));
                            }
                        }
                    }
                }
                arr_50 [i_0] = var_5;

                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    arr_53 [i_0] [i_0] [i_0] [i_0] = (((((((~(arr_39 [i_0] [i_0] [i_0] [i_0] [i_0]))) + var_6))) ? ((1534242135 | (~1))) : var_5));
                    arr_54 [i_0] = var_6;
                    var_34 |= (arr_40 [i_1] [i_1] [i_1] [i_1] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
