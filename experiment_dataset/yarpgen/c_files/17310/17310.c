/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        var_19 = ((((arr_10 [i_0] [5] [i_2] [i_3]) ? ((((arr_4 [i_0 - 1] [i_1]) ? var_1 : var_14))) : (0 - var_9))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_20 = var_17;
                            arr_15 [i_0 + 1] [6] [i_0 - 1] [i_0] [i_1] [i_0 - 4] [i_0 + 1] = ((((((arr_6 [4] [i_3]) ? var_10 : 3208032))) == ((2175893942689256804 << (((arr_0 [10] [i_3]) - 26940))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_1] [15] [1] [14] [16] = (((arr_16 [i_0] [i_0 - 3]) ? (arr_13 [i_0 - 3] [8] [i_0 - 4] [8] [i_0 + 1] [12] [i_5]) : 16270850131020294806));
                        arr_19 [i_0] [i_2] |= ((var_7 ? (arr_6 [i_0 - 2] [i_1]) : (arr_6 [i_0 - 4] [i_0 - 4])));

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_21 = var_8;
                            var_22 = (((arr_13 [i_0] [i_0 - 1] [8] [9] [1] [i_0] [i_0 - 3]) ? (arr_8 [i_0 - 2] [i_0 - 2] [i_1]) : (arr_4 [i_0] [i_0 - 2])));
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_23 = (((arr_11 [i_0 - 1] [i_0 + 1]) ? (arr_11 [i_0 - 3] [i_0 + 1]) : var_13));
                            var_24 = (((arr_14 [i_0] [i_0] [i_1] [i_2] [i_0] [i_7]) ? 0 : var_0));
                        }
                    }

                    for (int i_8 = 2; i_8 < 14;i_8 += 1)
                    {
                        var_25 = var_9;
                        arr_26 [i_1] = ((((max(var_13, (arr_17 [i_8] [i_8 - 2] [i_8] [i_8 + 2] [i_8 + 1])))) ? (((((max(var_14, var_1))) >> ((((var_11 ? (arr_10 [i_8] [i_2] [i_1] [i_0]) : (arr_11 [i_0] [2]))) - 64520))))) : ((1 ? (arr_13 [i_0 - 1] [11] [13] [i_8] [i_1] [8] [11]) : (((arr_2 [i_1]) ? (arr_24 [5] [i_1] [i_2] [i_1] [i_2] [i_8]) : 4386339756842100567))))));
                        arr_27 [i_0] [i_1] [i_8] = (((((var_10 ? (arr_10 [i_0] [14] [i_0] [i_0 - 2]) : (arr_3 [i_0 - 2])))) ? (var_10 * var_12) : (arr_10 [i_0 - 3] [i_0 - 3] [i_2] [i_8 + 3])));

                        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                        {
                            var_26 -= var_15;
                            var_27 = (((arr_7 [i_0 + 1] [i_1] [i_8 - 1]) - ((-(arr_7 [i_0] [i_1] [i_8 + 1])))));
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            var_28 = (min((((4 <= (arr_8 [i_1] [i_8 + 2] [i_1])))), (max((arr_8 [i_1] [i_8 + 3] [i_1]), var_16))));
                            arr_33 [i_8] [i_1] = (arr_31 [i_0] [i_0] [4] [4] [4]);
                        }
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        var_29 = -6100;
                        var_30 = (((((arr_4 [i_0 - 1] [i_0 - 2]) ? (arr_4 [i_0 - 1] [i_0 - 4]) : (arr_4 [i_0 + 1] [i_0 - 1]))) >> (var_11 - 2111320890)));
                        var_31 = ((((min((arr_20 [i_0] [14] [i_2] [i_1] [1]), (((arr_9 [i_0] [i_1] [12]) / (arr_8 [i_0 + 1] [4] [i_1])))))) ? ((3208039 ? ((59450 ? var_9 : 295)) : (((max(var_7, (arr_21 [i_0] [i_0] [i_2] [i_0]))))))) : var_7));
                    }

                    for (int i_12 = 2; i_12 < 15;i_12 += 1)
                    {
                        var_32 = ((((arr_21 [i_12 - 2] [i_2] [i_1] [11]) + var_2)));
                        var_33 = (((-((-1 ? var_17 : var_17)))) <= (arr_17 [i_0 - 2] [i_0 - 2] [15] [i_12 - 1] [15]));
                    }
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        var_34 = (arr_38 [i_1]);
                        var_35 = var_5;
                        arr_41 [i_0] [i_0] [i_0] [i_2] [i_1] [i_1] = ((+(((arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 3]) / (arr_21 [i_0 - 1] [8] [i_0 - 1] [i_0 - 3])))));
                    }
                    for (int i_14 = 3; i_14 < 16;i_14 += 1)
                    {

                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 17;i_15 += 1)
                        {
                            var_36 = (((!var_7) / (((arr_28 [i_15] [i_14] [i_2] [i_0] [i_0]) ? (arr_47 [i_0] [i_0 - 2] [i_0 - 2] [9] [i_0 - 2] [i_0 - 2] [11]) : var_3))));
                            var_37 = (arr_46 [i_0 - 3] [i_0] [i_1] [i_1] [i_2] [i_14] [i_15]);
                            var_38 = (max(var_38, (((~(arr_42 [i_14 - 1] [i_0 - 1] [10] [i_0]))))));
                            arr_49 [i_0] [i_1] = ((var_16 ^ (arr_37 [i_0 - 2] [i_14 + 1])));
                            var_39 = (-9223372036854775807 - 1);
                        }
                        var_40 = ((var_14 ? (arr_14 [1] [i_1] [13] [13] [1] [8]) : 2047));
                        var_41 = ((!(min(var_4, (4294967295 > 8339)))));
                    }
                }
            }
        }
    }
    var_42 = var_1;
    var_43 = -3959548934049296246;
    #pragma endscop
}
