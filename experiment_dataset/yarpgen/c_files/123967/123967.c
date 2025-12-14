/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max(var_8, var_0)))) * (var_2 ^ -var_9));
    var_11 = (max(var_11, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = (((min(0, var_3))) ? (min(var_6, (~var_4))) : (((var_9 ? (arr_3 [i_1] [i_0]) : var_8))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] = (((~(arr_9 [i_1]))) / ((~(arr_9 [i_0]))));
                                arr_13 [i_0] = ((!(arr_11 [i_4] [i_3] [i_2] [i_2] [i_1] [7])));
                                arr_14 [i_0] = ((!((18446744073709551615 != (min(0, 0))))));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 6;i_7 += 1)
                        {
                            {
                                arr_23 [2] [i_1] [i_0] [i_6] [i_7] = (((((((max((arr_2 [i_0] [i_0] [3]), var_0))) ? (max((arr_5 [i_7] [i_6] [i_0]), var_3)) : (((arr_7 [i_0] [0] [0] [i_0]) ? var_7 : var_8))))) ^ ((((max(var_4, var_6))) ? var_0 : (((min(var_3, var_8))))))));
                                arr_24 [i_0] [3] [i_5] [i_6] [3] [i_0] = var_2;
                            }
                        }
                    }
                    var_13 = (min(var_13, (!-7)));

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_29 [i_0] [i_5] [i_1] [i_0] [i_0] = (min(((0 >> (((max(0, 15113304799482156372)) - 15113304799482156370)))), (arr_22 [i_0] [0] [i_5] [i_8] [i_5])));
                        var_14 ^= ((((((!var_0) ? var_6 : (arr_28 [i_5])))) * (max((((var_6 ? var_2 : var_7))), (min(3834273109, (arr_22 [i_0] [i_1] [i_5] [i_8] [i_8])))))));
                        arr_30 [i_8] [i_5] [i_0] [i_1] [i_0] = var_9;
                    }
                    for (int i_9 = 3; i_9 < 7;i_9 += 1)
                    {
                        var_15 = (arr_33 [i_9] [i_5] [i_0] [i_0] [i_0] [i_0]);
                        var_16 = (max(0, 192));
                    }
                    var_17 = ((((((min(35, 1))) || (var_5 || var_3))) ? (max((arr_16 [i_0] [i_5]), 0)) : var_9));
                }
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    var_18 = 490129853434568005;
                    arr_37 [i_0] [i_1] [i_0] [i_0] = (min(((~(-7581892644613866652 * 11953022521327740455))), (((var_6 ? (arr_35 [i_0] [i_1] [i_1] [i_0]) : ((var_8 ? var_2 : var_1)))))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            {
                                arr_42 [i_0] = (min((((var_0 >= (min(var_1, (arr_36 [i_0] [1] [i_0])))))), ((-var_5 ? (62874 != 157) : (arr_11 [i_0] [1] [i_0] [i_11] [i_11] [i_12])))));
                                arr_43 [i_0] [i_0] [i_1] [i_0] [i_12] [i_0] = ((0 / (arr_10 [i_0] [i_0] [i_10] [i_11] [i_11])));
                            }
                        }
                    }
                    arr_44 [i_10] [i_0] [i_10] [i_0] = (!var_7);

                    for (int i_13 = 2; i_13 < 9;i_13 += 1)
                    {
                        var_19 &= (min(((+(((arr_34 [i_0] [i_0] [i_0] [5]) * var_3)))), var_8));
                        arr_48 [i_0] [i_1] [0] [i_0] = (min((max((max(-779396427, (arr_11 [i_0] [i_0] [i_0] [i_0] [i_10] [i_0]))), (~var_9))), ((min(32666, -842)))));
                    }
                }
            }
        }
    }
    var_20 = (max(var_0, ((var_2 & ((var_5 ? var_8 : (-9223372036854775807 - 1)))))));
    #pragma endscop
}
