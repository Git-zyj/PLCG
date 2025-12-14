/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max(((var_0 ? var_11 : var_6)), var_11))) ? (max(((var_8 ? var_10 : var_8)), 74)) : (max(((var_6 ? 173 : var_2)), (var_11 <= var_1)))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_14 = (((((-9223372036854775807 ? ((var_8 ? (arr_0 [i_0]) : -111)) : (((74 ? 21670 : -21669)))))) ? (((-9223372036854775807 - 1) ? -1 : var_7)) : ((228 ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_9 [7] = (((22225 > (arr_3 [i_1]))));
            arr_10 [i_1] = ((105 >> (var_1 + 52)));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_18 [i_1] = (((min((arr_7 [i_5] [i_3] [1]), ((21659 ? (-32767 - 1) : 7)))) | (min((((arr_8 [i_1] [i_3] [i_4]) ? (arr_7 [i_3] [i_4] [i_5]) : 182)), -1943342994))));
                        arr_19 [i_5] = (min(-1, (1 && 788370633)));

                        for (int i_6 = 3; i_6 < 18;i_6 += 1)
                        {
                            arr_23 [i_3] [i_3] = (arr_11 [i_1]);
                            arr_24 [i_6 - 3] [i_5] [i_4] [i_3] [i_3] [i_1] [i_1] = (((max(-2093173543, (arr_13 [i_6 + 3] [i_6 + 2] [i_6 - 3]))) <= 21657));
                            var_15 = -21670;
                        }
                    }
                }
            }
            arr_25 [i_3] = ((((((((3904248809833876589 >> (var_11 - 1384373686137451759)))) ? ((9 ? var_11 : (arr_13 [1] [i_3] [i_3]))) : (arr_8 [10] [i_1] [10])))) ? -var_3 : (arr_20 [i_1] [i_1] [i_1] [i_3] [i_3])));
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 21;i_9 += 1)
                {
                    {
                        arr_34 [i_1] [i_7] [i_8] [i_8] = (arr_1 [1]);
                        arr_35 [i_7] [i_9] = (((arr_6 [i_9] [i_1] [i_1]) ? 33 : (((arr_27 [i_9]) ? var_7 : (arr_12 [i_1])))));
                        arr_36 [i_1] [i_1] [i_8] [i_7] = (arr_31 [i_1] [i_7]);
                    }
                }
            }
        }
        var_16 = ((!((!(((var_5 ? var_9 : (arr_15 [i_1] [i_1] [i_1]))))))));
        arr_37 [i_1] = arr_32 [i_1];

        /* vectorizable */
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            var_17 = (arr_4 [i_1]);

            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    var_18 = (arr_0 [i_1]);
                    arr_48 [i_1] [i_10] [i_1] [i_12] = (arr_3 [i_1]);
                    arr_49 [1] [1] [i_11] [i_12] = var_8;
                }
                arr_50 [i_11] [i_1] [i_1] = (((arr_8 [i_11] [i_10] [i_1]) ? (arr_8 [i_1] [i_1] [i_11]) : (arr_8 [i_1] [i_1] [0])));
            }
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                arr_54 [i_1] [i_10] = (!var_7);
                var_19 = 580239465;
                arr_55 [i_1] [i_10] [i_13] = var_5;
                arr_56 [i_1] = (var_7 << (((arr_7 [i_1] [i_1] [i_13]) - 2126511160)));
            }
            arr_57 [i_10] [i_10] [i_10] = ((!(arr_14 [i_10] [i_10])));
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 20;i_14 += 1)
            {
                for (int i_15 = 4; i_15 < 19;i_15 += 1)
                {
                    {

                        for (int i_16 = 1; i_16 < 19;i_16 += 1)
                        {
                            arr_66 [i_1] [i_1] [i_1] [i_15] [i_16] = (22880 + var_4);
                            var_20 = (((arr_46 [13] [i_10] [i_14 + 1] [i_15 + 3]) ? (arr_38 [i_16] [i_10]) : (arr_52 [i_14 + 1] [i_14] [i_14 - 1])));
                        }
                        for (int i_17 = 4; i_17 < 20;i_17 += 1)
                        {
                            var_21 = ((8795606599000272049 ? -118 : (~6)));
                            arr_69 [i_1] [i_10] [i_14] [i_1] [i_14] [i_1] [i_1] = ((~1) ? 185 : -1);
                        }
                        arr_70 [i_15 - 3] [i_14] [i_10] [i_1] = (-(arr_13 [i_14 + 2] [i_14 - 1] [i_14 + 1]));
                    }
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 17;i_18 += 1)
    {
        arr_75 [1] = (arr_46 [i_18] [i_18] [i_18] [i_18]);
        var_22 = (((min((arr_8 [5] [i_18] [i_18]), 53))) ? (((((arr_59 [i_18] [i_18] [i_18]) ? var_11 : var_4)))) : (max(25425, ((-1 ? var_2 : var_9)))));
        arr_76 [i_18] = (arr_51 [21] [i_18]);
    }
    #pragma endscop
}
