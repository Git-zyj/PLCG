/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_14, (max(((var_11 ? var_0 : -8760566296632185823)), var_6))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (max(var_12, ((((~(arr_2 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [11] = (min((max(2063420908688913487, 8760566296632185822)), ((((max((arr_7 [i_0] [i_1] [i_2] [i_2]), (arr_2 [i_2] [i_0])))) ? var_7 : (max(var_2, 8760566296632185822))))));
                    var_18 = (((((~(arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1])))) ? ((min((arr_7 [i_1] [i_1] [i_1 - 1] [i_1 + 1]), (arr_7 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1])))) : (484225567 / 9093862616143775690)));
                    arr_9 [i_0] [i_0] [i_0] |= (max((~var_9), (((var_6 - (arr_5 [i_1 - 2]))))));
                }
            }
        }
        var_19 = (~var_12);
        var_20 = 7778402307208770309;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_21 = (7338066292920515418 ? (((arr_11 [i_3]) - var_15)) : var_13);
        var_22 = (!var_8);
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 19;i_7 += 1)
                {
                    {
                        var_23 |= (!5951473659190006884);
                        var_24 = ((-(max(var_16, (max(var_13, var_11))))));
                        var_25 = (max(var_25, (((-(var_13 != var_13))))));
                    }
                }
            }
        }
        var_26 = (min(((((arr_16 [i_4]) ? (arr_16 [i_4]) : var_16))), (((arr_16 [i_4]) ^ var_13))));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            arr_27 [8] = (((((var_11 ? 22773 : 8878731243719220886))) ? (var_14 <= -9160659572669409580) : (arr_17 [i_8])));
            var_27 = (arr_23 [i_4]);

            for (int i_9 = 2; i_9 < 19;i_9 += 1)
            {
                var_28 = (((arr_31 [i_9 + 1] [i_9 + 2] [i_9 - 1] [i_9]) <= var_11));
                arr_32 [i_4] [i_8] [i_9] = (((arr_18 [i_4] [i_4] [i_9 - 1]) ? var_13 : (arr_18 [i_9 - 1] [i_9 + 1] [i_9])));
                var_29 = (min(var_29, ((((arr_22 [i_4]) - var_5)))));

                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    arr_36 [i_10] = (((arr_29 [i_8] [i_8] [i_9]) != ((var_12 ? (arr_23 [i_4]) : (arr_25 [i_4] [i_8] [i_8])))));
                    var_30 += var_2;
                    var_31 = var_7;
                    var_32 = ((~3713600664473073238) - (arr_33 [i_9 + 1] [i_9] [i_9 + 3] [i_9 + 2]));
                    var_33 = (arr_25 [i_9 - 1] [11] [i_9 + 3]);
                }
                for (int i_11 = 4; i_11 < 20;i_11 += 1)
                {
                    var_34 = (min(var_34, (((arr_35 [i_4] [i_8] [i_9 - 2] [i_11 + 1]) ? (arr_35 [i_8] [i_8] [i_9 - 1] [i_11 + 2]) : (arr_35 [i_4] [i_4] [i_9 + 1] [i_11 - 3])))));
                    var_35 = var_6;
                }
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    arr_43 [i_4] [i_8] [i_8] [i_4] [i_12] [i_12] = -var_11;
                    var_36 = ((arr_29 [i_9] [i_9 + 1] [i_9]) <= (arr_29 [i_8] [i_9 - 1] [i_9]));
                    arr_44 [i_4] [i_8] [i_9] [i_12] [i_4] = ((~(~var_2)));
                    var_37 += (arr_31 [6] [i_9 + 2] [i_9 + 3] [i_9 - 2]);
                }
                arr_45 [i_4] = ((~(arr_14 [i_4])));
            }
        }
        var_38 = (max(var_38, (((~(max((min(var_1, (arr_37 [21] [i_4] [i_4]))), var_6)))))));
    }
    for (int i_13 = 0; i_13 < 20;i_13 += 1)
    {
        arr_49 [i_13] = (max((((!((min((arr_26 [i_13]), 3033690064161327173)))))), (~var_8)));
        arr_50 [i_13] [i_13] = ((max((arr_46 [i_13]), (arr_46 [i_13]))));
        var_39 += var_2;
    }
    var_40 = ((!((max(var_16, (max(-112, var_2)))))));
    #pragma endscop
}
