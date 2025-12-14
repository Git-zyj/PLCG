/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 += (~18446744073709551591);
                arr_6 [i_0] [i_1] [i_1] = (1881933419 % -1881933421);
            }
        }
    }
    var_16 = ((var_8 ? var_2 : (max(var_2, (max(-466972496926066237, var_12))))));

    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        var_17 = (max(var_17, ((min(var_5, ((~(arr_3 [i_2 - 2]))))))));
        arr_9 [i_2] &= (-1615691106 > -1881933445);
        arr_10 [i_2] = (((((((1881933444 ? 8128566876403115589 : 18))) ? (((max((arr_7 [i_2] [i_2]), (arr_7 [i_2] [i_2]))))) : (arr_4 [i_2] [i_2 - 1]))) >= ((max((arr_5 [i_2 - 2]), var_8)))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {

                for (int i_6 = 3; i_6 < 24;i_6 += 1)
                {
                    arr_21 [i_5] [i_6] [i_5] [i_4] [i_3] = arr_20 [i_6];
                    arr_22 [i_3] [i_5] [i_4] [i_3] = 1881933444;
                }

                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    arr_27 [i_3] [i_3] [i_5] [i_5] = var_9;
                    var_18 = (max(var_18, var_2));
                }
                var_19 = (min(var_19, (--1)));
                arr_28 [i_3] [i_3] [i_3] [i_3] = (~-1881933438);
            }
            var_20 = (158823763 / 230197754);

            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                arr_31 [i_8] [i_4] [i_3] [i_3] = ((!((min(((443816703 ? var_4 : 10193121129305879533)), 0)))));
                arr_32 [i_8] [i_8] [i_8] [i_8] &= (!((max(-1881933444, (arr_13 [i_3])))));

                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    arr_35 [i_3] [i_3] [i_3] [i_3] [i_3] = (max(-1881933409, 9223372036854775807));
                    var_21 = (arr_23 [i_4] [i_4]);
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    arr_38 [i_8] [i_8] [i_8] [i_10] = var_10;
                    arr_39 [i_3] [i_8] [i_4] [i_3] [i_3] [i_3] = (arr_20 [i_3]);
                    arr_40 [i_3] [i_4] [i_4] [i_8] [i_4] [i_10] = (var_8 ? (arr_19 [i_3]) : (((arr_34 [i_4]) ? (arr_29 [i_3] [i_3]) : 5047)));
                    arr_41 [i_10] [i_8] [i_4] [i_4] [i_3] = var_12;
                }
                var_22 |= var_9;
            }
        }

        /* vectorizable */
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {

            for (int i_12 = 3; i_12 < 24;i_12 += 1)
            {
                var_23 = (min(var_23, (((((((arr_24 [i_11] [i_11] [i_11] [i_12] [i_3]) ? var_5 : var_1))) ? (arr_36 [i_11] [i_11] [i_11] [i_3]) : -var_8)))));
                var_24 ^= (arr_46 [i_12 + 1] [i_12] [i_12 + 1]);
                var_25 = (((arr_26 [i_12] [i_12] [i_12] [i_12] [i_12 + 1]) ? ((9905 ? (-9223372036854775807 - 1) : (arr_11 [i_3]))) : (!-1881933409)));
                var_26 *= ((var_7 ? 1 : var_8));
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        {
                            var_27 = (((((-(arr_11 [i_11])))) ? var_5 : 1881933408));
                            var_28 = (min(var_28, (((var_9 ? (((var_9 ? 1 : var_10))) : var_1)))));
                            var_29 &= var_5;
                            arr_54 [i_11] [i_13] = ((-(arr_48 [i_11])));
                        }
                    }
                }
                arr_55 [i_3] [i_3] [i_3] [i_3] = var_11;
            }
            for (int i_16 = 3; i_16 < 22;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 0;i_18 += 1)
                    {
                        {
                            var_30 = (min(var_30, var_6));
                            arr_64 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = -var_13;
                            arr_65 [i_3] [i_11] [i_17] [i_18] = (((arr_37 [i_3] [i_11] [i_18 + 1] [i_11] [i_18] [i_16 - 1]) & (arr_13 [i_3])));
                        }
                    }
                }
                var_31 ^= (!(((var_4 ? 1881933419 : var_6))));
                var_32 = (((1 ? (arr_59 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) : (arr_43 [i_3]))) > ((((arr_57 [i_3] [i_3]) != (arr_26 [i_3] [i_3] [i_16] [i_3] [i_3])))));
                var_33 = var_9;
            }
            for (int i_19 = 0; i_19 < 25;i_19 += 1)
            {
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        {
                            var_34 -= ((!(((-(arr_15 [i_20] [i_20]))))));
                            arr_74 [i_3] [i_3] [i_3] = (arr_11 [i_19]);
                            var_35 = ((var_13 ? (arr_36 [i_19] [i_19] [i_19] [i_11]) : (((var_13 << (31744 - 31737))))));
                            arr_75 [i_3] [i_3] [i_3] [i_3] = (arr_70 [i_19] [i_19]);
                            var_36 *= (((arr_70 [i_3] [i_3]) ? (arr_70 [i_19] [i_11]) : (arr_70 [i_3] [i_11])));
                        }
                    }
                }
                var_37 = (min(var_37, ((!(arr_62 [i_19] [i_19] [i_11] [i_11] [i_3] [i_3] [i_3])))));
            }
            arr_76 [i_11] = ((18446744073709551615 ? 1 : 1881933444));
        }
    }
    #pragma endscop
}
