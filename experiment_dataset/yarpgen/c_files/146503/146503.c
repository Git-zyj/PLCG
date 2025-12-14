/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    var_19 = (var_12 | var_10);
    var_20 = ((((!(25873 | var_14))) ? (((((((var_7 ? var_16 : var_12))) && var_14)))) : 2115029461862456722));
    var_21 = var_12;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            var_22 *= (((!var_13) >= (min(((240 ? var_8 : var_15)), (arr_2 [i_1])))));
            var_23 = (min(var_23, (((-(max((arr_1 [i_0] [i_1 - 2]), var_12)))))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_24 = (min(39663, (((65535 & var_0) ? (((arr_2 [i_0]) ? 4294967295 : (arr_1 [1] [13]))) : ((((arr_0 [i_0] [i_0]) ? (arr_5 [4]) : (arr_3 [i_2]))))))));
            var_25 = (((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))) >> (((arr_3 [i_0]) - 7333022282060881479))));

            /* vectorizable */
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                var_26 ^= (arr_6 [i_0] [i_0] [i_2] [4]);
                var_27 = var_12;
                var_28 = (max(var_28, (((var_8 >= (arr_5 [i_3 + 2]))))));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {

                for (int i_5 = 2; i_5 < 19;i_5 += 1)
                {
                    var_29 = (((arr_2 [i_5 + 1]) ? (arr_2 [i_5 - 1]) : (arr_2 [i_5 + 1])));
                    var_30 = arr_3 [i_0];
                    var_31 = arr_11 [i_0] [i_0] [i_2] [i_4] [i_5 - 1];
                }

                for (int i_6 = 2; i_6 < 18;i_6 += 1)
                {
                    arr_15 [i_0] [i_0] [i_4] [i_6] = ((-(arr_11 [16] [i_2] [i_6 + 2] [2] [i_2])));

                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_4] = 39659;
                        arr_19 [i_0] [19] [15] [i_6] [i_7] = (((arr_16 [i_7] [i_7] [i_7 + 1] [i_7] [i_7 - 1] [i_7 - 1]) ? (arr_16 [i_0] [i_2] [i_6 + 2] [i_6] [i_7] [i_7 + 1]) : (arr_16 [i_7 - 1] [i_0] [i_4] [i_4] [i_2] [i_0])));
                        var_32 += -103393216244460813;
                    }
                    for (int i_8 = 3; i_8 < 19;i_8 += 1)
                    {
                        arr_22 [17] [19] [i_4] [i_6] = (arr_11 [i_4] [i_0] [i_4] [i_4] [2]);
                        var_33 = (arr_1 [i_6] [i_6]);
                    }
                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        var_34 = arr_4 [i_0] [i_2] [i_4];
                        arr_25 [11] [i_2] [9] [i_6] [i_9] = (arr_2 [8]);
                        var_35 ^= var_5;
                        var_36 = (min(var_36, ((((((var_7 ? (arr_2 [i_9]) : (arr_0 [i_9] [i_4])))) ? ((var_3 ? (arr_5 [i_2]) : (arr_23 [i_2] [i_4] [i_6]))) : (arr_8 [i_6 + 1] [i_6 + 1] [i_6] [i_9 + 1]))))));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_28 [i_0] [i_2] [i_2] [13] [i_4] [i_6] [i_10] = (((arr_21 [4] [i_2] [i_4] [i_6 + 1] [i_10]) ? var_2 : (arr_11 [i_0] [i_0] [i_10] [i_6] [i_2])));
                        var_37 = (((var_0 ? (arr_1 [i_0] [i_0]) : var_12)));
                        var_38 = ((-(((arr_5 [i_10]) ? (arr_21 [i_0] [i_0] [i_4] [i_6 + 2] [i_10]) : 239913714))));
                        var_39 = arr_5 [i_2];
                        var_40 = (arr_1 [i_0] [i_6]);
                    }
                }
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    arr_32 [i_11] [i_11] [i_4] [i_2] [0] [14] = (((arr_8 [13] [4] [i_4] [17]) ? (arr_8 [i_0] [i_2] [i_4] [i_11]) : (var_0 + 1)));
                    var_41 = 241;
                }
            }
            for (int i_12 = 0; i_12 < 0;i_12 += 1)
            {
                arr_35 [i_2] = ((-(max((((arr_8 [i_0] [6] [i_2] [i_12]) ? (arr_3 [i_0]) : var_5)), (!69)))));
                var_42 = ((0 & (((-(min(var_14, var_4)))))));
            }
            /* LoopNest 3 */
            for (int i_13 = 1; i_13 < 19;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 16;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {
                        {
                            arr_44 [i_0] = (arr_23 [i_0] [i_2] [i_2]);
                            arr_45 [i_0] [i_0] [10] [i_14 + 2] [i_15] = var_1;
                            arr_46 [i_2] [11] [i_2] [10] = -123;
                            var_43 = (max((((-(arr_24 [i_2] [i_13 + 1] [i_15])))), (var_12 - var_5)));
                            arr_47 [i_0] [i_2] [i_13] [i_2] [i_2] = ((-(arr_23 [i_15] [i_14] [1])));
                        }
                    }
                }
            }
            var_44 = 0;
        }
        arr_48 [i_0] = (arr_0 [i_0] [i_0]);
        var_45 = var_10;
        arr_49 [i_0] = (arr_41 [7] [7] [7] [i_0] [9] [i_0]);
        var_46 = (max(var_46, ((min((min((arr_29 [i_0] [i_0] [i_0] [i_0]), (arr_1 [i_0] [i_0]))), (arr_6 [i_0] [i_0] [i_0] [5]))))));
    }
    for (int i_16 = 0; i_16 < 19;i_16 += 1)
    {

        for (int i_17 = 2; i_17 < 17;i_17 += 1)
        {
            var_47 = ((-(((-(arr_1 [i_16] [6]))))));
            var_48 = (arr_29 [i_16] [i_17] [i_16] [i_17]);
        }
        arr_56 [i_16] = (var_3 ? (-127 - 1) : (((arr_3 [i_16]) ? (arr_12 [13] [i_16]) : (arr_12 [i_16] [i_16]))));
    }
    #pragma endscop
}
