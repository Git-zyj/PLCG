/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_13;
    var_16 = var_3;
    var_17 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((var_4 == ((-((var_2 + (arr_3 [i_1] [i_0] [i_0])))))));

                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_2 + 1] [i_0] = (~var_2);
                    arr_10 [i_1] [i_0] = (min(66, 255));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = (~(73 & 9223372036854775807));
                    var_18 += ((~(((!var_6) ? (arr_6 [i_2] [i_0]) : (arr_7 [i_0] [i_0] [i_1] [i_0])))));
                    arr_12 [i_2] [i_1] [i_1] [i_0] = (arr_1 [i_2] [i_1]);
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_22 [i_0] [i_1] [i_3] [i_4] = (((arr_17 [i_0] [i_1] [i_3 - 2] [i_5]) & (arr_16 [i_0] [i_1] [i_4] [i_5])));
                                arr_23 [7] [i_1] [i_3] [i_5] = (((arr_18 [i_0] [i_1] [i_3] [i_4] [i_5]) ? (arr_15 [i_3] [i_4 + 1] [i_4] [i_4]) : ((var_6 << (((arr_21 [i_5]) - 305886224))))));
                                arr_24 [i_0] [i_0] [i_0] [i_4] [5] [i_3] = (0 <= 4294967295);
                            }
                        }
                    }
                    arr_25 [i_3] [i_3] [i_3] [9] = (((arr_1 [i_3 - 1] [i_1]) ? ((~(arr_1 [i_0] [i_3]))) : (arr_6 [i_0] [i_3])));
                    var_19 = ((0 < ((var_4 ? var_1 : 372007790))));
                    var_20 = (((-2013050966824455063 ? (-32767 - 1) : var_12)));
                }
                for (int i_6 = 3; i_6 < 12;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        arr_32 [i_0] [i_1] [i_1] [i_6 - 3] [i_6] = ((var_5 ? (((arr_3 [11] [i_6 + 1] [i_6 - 3]) ? (arr_3 [3] [0] [i_6 - 1]) : var_3)) : (arr_17 [i_6 + 1] [i_6] [i_6] [i_6 + 1])));
                        var_21 = var_1;
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_22 = var_6;
                                var_23 = var_13;
                                arr_41 [i_6] [i_1] [i_6] [i_8 + 3] [i_9] = -1;
                                arr_42 [i_6] [1] [i_6] [i_8] [i_1] [i_9] [i_1] = ((+(max((((arr_21 [i_0]) & var_12)), 1))));
                                arr_43 [i_6] [i_8 + 1] = -20471;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 2; i_10 < 18;i_10 += 1)
    {
        for (int i_11 = 4; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 0;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 18;i_14 += 1)
                        {
                            {
                                arr_58 [i_14 - 1] [i_13] [i_13] [i_13] [i_11 - 1] [i_10 - 2] [i_10 - 2] |= var_8;
                                var_24 *= (((max(((3972 ? 0 : var_5)), (-32767 - 1))) ^ (((((var_11 ? -1722174625 : var_5))) ? (7260 + var_5) : var_13))));
                            }
                        }
                    }
                    var_25 = ((((((0 ? 1 : var_1)) + 2147483647)) >> (-var_14 - 7966808910231197717)));

                    for (int i_15 = 1; i_15 < 16;i_15 += 1)
                    {
                        arr_61 [i_10] [i_10] [i_12] [i_15 - 1] = (max((~1), (((!(arr_46 [i_10] [i_10 + 2]))))));
                        var_26 = var_9;
                        var_27 = (~(arr_56 [i_10] [i_11] [i_11] [i_11] [i_11 - 2] [i_11] [i_10]));
                    }
                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {
                        arr_66 [i_10] [i_16] = 372007790;
                        var_28 = (max(var_28, ((((~(arr_47 [i_10 + 2] [i_11 - 4])))))));
                        var_29 = (((arr_55 [i_16] [i_12 + 1] [i_11] [i_11] [i_10 + 2]) ? (var_12 % -18358) : var_5));
                        arr_67 [i_10] [i_10] [i_10] [i_11] [i_10] [i_10] = (((arr_52 [i_10] [i_10] [i_16]) ? (arr_63 [i_10] [i_11 + 3] [i_10 + 2] [i_10]) : (arr_46 [i_10] [i_11])));
                    }
                    arr_68 [i_10] = (min(((var_11 ? var_14 : (~var_3))), var_7));
                }
            }
        }
    }
    #pragma endscop
}
