/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = var_3;
        arr_2 [i_0] = ((((-(var_3 - var_2))) > (((var_9 == (arr_0 [18] [i_0]))))));
        var_11 = 293;
        arr_3 [i_0] = (((arr_0 [i_0] [i_0]) ^ (((var_2 < (arr_1 [1]))))));
        arr_4 [i_0] [i_0] = ((arr_0 [i_0] [i_0]) > (arr_1 [i_0]));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (((arr_1 [i_1]) + (arr_1 [i_1])));
        var_12 = 7990049388775641083;
        arr_9 [i_1] = (arr_7 [2] [i_1]);
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_13 = var_0;
        var_14 = (((arr_10 [i_2]) / (arr_10 [i_2])));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_15 = var_0;

        /* vectorizable */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_19 [i_3] [i_3] [9] = (arr_10 [i_3]);

            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                arr_23 [i_3] = (((-7990049388775641083 / var_5) ? (arr_16 [i_3] [i_4] [i_5]) : (arr_17 [0] [i_4])));
                arr_24 [i_3] [i_4] [i_3] [i_5] = ((36406 != (var_5 & 624466699)));
                arr_25 [i_3] [i_4] [i_5] [i_3] = 1;
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_16 = (((arr_12 [i_3]) <= 113));
                            var_17 = 293;
                            var_18 = (min(var_18, (arr_20 [i_7])));
                            arr_35 [i_3] [i_3] [i_6] [3] [i_8] [4] = (arr_13 [1] [i_4]);
                        }
                    }
                }
                var_19 = (((var_0 == var_5) ? 113 : (var_9 < var_2)));
                arr_36 [i_3] [i_6] = -63;
                var_20 = (arr_13 [i_3] [i_3]);
            }
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                arr_39 [6] [2] [i_3] = ((~(arr_29 [i_3] [i_4])));
                var_21 = (((-64 ? 18446744073709551615 : (arr_31 [i_3] [3]))) < 5740);
                var_22 = (min(var_22, ((((var_4 <= 293) ? (((-63 > (arr_13 [i_3] [i_3])))) : (arr_13 [i_3] [i_9]))))));
                var_23 = var_8;
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 14;i_11 += 1)
                {
                    {
                        arr_45 [i_11] [i_3] [i_3] [i_3] = 1;
                        var_24 = ((-(arr_29 [i_11 + 1] [i_11 + 1])));
                    }
                }
            }
        }
        var_25 = (var_3 + 0);
        var_26 = (((((arr_30 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) * 27828873)) >> ((min(1, var_8)))));
    }
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 21;i_12 += 1)
    {
        for (int i_13 = 3; i_13 < 22;i_13 += 1)
        {
            {
                var_27 = (((arr_49 [i_12 + 3] [i_13] [i_13 + 3]) - 7565843068008002927));
                arr_52 [i_13] [i_12 + 2] = (arr_46 [i_13]);

                for (int i_14 = 3; i_14 < 23;i_14 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 24;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            {
                                var_28 = (((-(arr_58 [i_12 + 3] [i_12 + 3] [i_13] [i_16] [i_16] [i_16]))));
                                var_29 = ((-(var_9 < 293)));
                                var_30 = (((((var_8 && (arr_60 [i_13] [i_13 + 2] [i_13 - 1] [i_13] [20] [i_13]))))) / (((arr_58 [i_14 - 3] [i_15 - 1] [i_13] [i_16] [20] [i_16]) / (arr_60 [i_13] [i_13] [i_13 + 2] [i_16] [i_16] [i_13]))));
                                var_31 = ((((var_5 && var_4) ? var_0 : (7990049388775641083 <= var_9))));
                                var_32 = 7221;
                            }
                        }
                    }
                    var_33 = ((var_8 < (4042868671 / 4042868664)));
                }
            }
        }
    }

    for (int i_17 = 0; i_17 < 1;i_17 += 1)
    {
        var_34 = var_8;
        var_35 = var_1;
        var_36 = var_6;
        arr_64 [6] = 0;
        var_37 = (max(var_37, var_6));
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 14;i_18 += 1)
    {

        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {

            for (int i_20 = 1; i_20 < 1;i_20 += 1)
            {
                var_38 = (max(var_38, ((((arr_66 [i_19]) ? (arr_66 [i_20 - 1]) : 1059326652157770928)))));
                var_39 = (min(var_39, 58315));
            }
            var_40 = ((arr_1 [i_18]) > (arr_1 [i_18]));
            arr_75 [i_18] = ((var_8 == ((-(arr_71 [i_18])))));

            for (int i_21 = 0; i_21 < 14;i_21 += 1)
            {
                arr_79 [i_18] [i_19] [i_21] [i_21] = ((1 != (arr_71 [0])));
                var_41 = -7183456031913525447;
                var_42 = ((var_3 + (arr_22 [i_18])));
            }
        }
        var_43 -= ((((var_5 ? (arr_74 [i_18] [i_18] [i_18] [3]) : 732055312)) <= var_7));
    }
    for (int i_22 = 0; i_22 < 22;i_22 += 1)
    {
        var_44 = ((0 > (((var_0 + var_7) ? (arr_46 [i_22]) : (arr_47 [i_22])))));
        var_45 = -var_7;
    }
    for (int i_23 = 1; i_23 < 11;i_23 += 1)
    {
        var_46 = (arr_78 [i_23] [12] [i_23]);
        var_47 = 0;
    }
    var_48 = (min(var_48, (((-var_7 <= (((min(var_9, var_6)))))))));
    #pragma endscop
}
