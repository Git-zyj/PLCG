/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (max((((((((arr_2 [i_0] [i_0]) + var_7))) ? (((arr_0 [i_0]) ? 2157721808 : var_4)) : -27))), (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_10 += ((((max(1, -1143024532))) ? (max(1, 4)) : (arr_11 [i_1] [i_3 + 2])));
                                arr_13 [i_0] [i_3] [3] [i_3] = -var_1;
                                var_11 = arr_12 [i_3] [i_3 - 1] [i_3 + 3] [i_3 + 3] [i_3 - 1] [i_3 - 1];
                            }
                        }
                    }
                    var_12 = -1310455706;
                    var_13 = var_4;
                }
            }
        }
        var_14 = (((((15933128853546081997 ? 3616453540 : var_5))) ? ((-((var_5 ? var_6 : var_5)))) : (var_0 ^ 79)));
        var_15 += (min((arr_6 [i_0] [6] [i_0]), 1));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        arr_17 [i_5] = ((arr_16 [i_5 + 1]) ? ((255 ? var_1 : var_2)) : (arr_16 [i_5 + 1]));

        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_16 = ((-((-(arr_18 [i_5 + 1])))));
            var_17 = 60441;
            var_18 = (min(var_18, (((arr_14 [i_5 + 1]) ^ (arr_14 [i_5 + 1])))));
            var_19 = var_4;
        }
        arr_20 [i_5] = ((70368744177600 ? (arr_18 [i_5 + 1]) : var_4));
    }

    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        var_20 |= ((+((max(138, (max((arr_22 [i_7] [i_7]), 0)))))));
        arr_24 [3] [i_7] = ((+(((arr_14 [i_7]) ? ((var_7 ? var_1 : var_2)) : (((max((arr_15 [i_7]), (arr_7 [i_7] [i_7] [i_7] [i_7])))))))));
    }
    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {
        arr_27 [i_8] = (((max((arr_19 [2] [i_8]), ((var_0 ? var_3 : (arr_5 [i_8] [i_8])))))) ? ((~((var_1 ? var_0 : 13613825958751319292)))) : (((min((arr_22 [i_8 + 1] [i_8 + 1]), (arr_22 [i_8 + 1] [i_8 + 1]))))));
        var_21 = (((((+(min((arr_11 [i_8] [i_8 + 1]), var_4))))) ? 1 : (max(-1248934, ((var_0 ? var_7 : (arr_2 [i_8] [i_8])))))));
        var_22 += ((-(var_6 > var_9)));

        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 9;i_11 += 1)
                {
                    {
                        var_23 = ((var_6 ? var_2 : (arr_34 [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_11 - 2] [i_11 - 1])));
                        var_24 = (((((arr_6 [i_8 + 1] [i_9] [i_10]) ? -3029550369394498604 : (arr_12 [i_8] [i_9] [i_10] [i_8] [i_10] [i_11])))) ? (((max((arr_19 [i_8] [3]), 19)))) : (max(var_4, 1)));
                        var_25 = 4032;
                    }
                }
            }

            for (int i_12 = 2; i_12 < 8;i_12 += 1)
            {
                var_26 = (arr_19 [i_9] [24]);
                arr_40 [i_8] [1] [i_12] = (max(1, ((-3029550369394498607 ? (arr_9 [i_8] [i_9] [i_12] [i_12 + 1]) : (arr_37 [i_8] [i_9] [i_9] [i_12 + 2])))));

                /* vectorizable */
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    var_27 = (arr_6 [i_9] [i_12 + 2] [i_13]);
                    var_28 = ((~(arr_18 [i_8 + 1])));
                    var_29 = ((((-(arr_23 [i_8])))) ? (arr_30 [i_8 + 1] [i_8 + 1] [i_12 - 1]) : var_7);
                    arr_44 [0] [6] [i_9] [i_9] [6] [i_13] |= var_5;
                }
            }
            var_30 = 18863;
            var_31 = (arr_23 [i_8]);
        }
        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {

            /* vectorizable */
            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {

                for (int i_16 = 0; i_16 < 11;i_16 += 1)
                {
                    var_32 += ((-((var_9 ? 194 : var_8))));
                    var_33 = var_9;
                    arr_53 [i_8 + 1] [i_8] [8] = ((~(arr_32 [i_8])));
                }
                for (int i_17 = 3; i_17 < 10;i_17 += 1)
                {
                    var_34 = ((-(~18446744073709551615)));
                    var_35 ^= (arr_9 [i_8] [i_8] [i_15] [12]);
                    var_36 = 1;
                }
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    var_37 = (arr_15 [i_8 + 1]);
                    var_38 = -678513751;
                }
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 11;i_19 += 1)
                {
                    for (int i_20 = 3; i_20 < 10;i_20 += 1)
                    {
                        {
                            arr_62 [i_8] [i_15] = var_5;
                            var_39 = (+-4294963261);
                            var_40 = ((17620 ? (arr_22 [i_8 + 1] [i_20 + 1]) : (arr_22 [i_8 + 1] [i_20 - 1])));
                        }
                    }
                }
                var_41 = -33;
            }
            var_42 = ((!((((((var_9 ? (arr_6 [i_8] [i_8 + 1] [i_14]) : 4035))) ? (((arr_32 [i_8]) ? 132 : var_2)) : (arr_56 [i_8] [10] [i_8]))))));
            var_43 = (min(var_43, (arr_59 [i_8] [i_8])));
            var_44 = ((max((4294963285 - 6410), (max((arr_50 [3] [i_8] [10]), var_4)))));
            var_45 = (~var_5);
        }
        /* vectorizable */
        for (int i_21 = 0; i_21 < 11;i_21 += 1)
        {
            var_46 = (~294293901);
            var_47 = 160;
        }
    }
    var_48 = ((var_4 ? var_0 : var_4));
    var_49 = (min(var_49, ((max(var_7, (var_7 <= var_0))))));
    #pragma endscop
}
