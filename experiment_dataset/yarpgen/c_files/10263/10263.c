/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_9, ((~(1219791477 / var_18)))));
    var_21 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_22 &= (450823163753799047 / -2899851991885291759);
                arr_7 [i_0] [i_0] [i_1] = var_9;
                var_23 = var_17;
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        var_24 = (max((!-var_11), (((arr_9 [i_2]) >> (((arr_9 [i_2]) - 12108))))));

        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            arr_12 [i_2] [i_3] [i_3] = (!8800016495412595296);
            var_25 = ((!((((arr_8 [i_3 + 1]) ? ((var_18 ? (arr_9 [i_3]) : var_7)) : var_4)))));
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {

                    for (int i_7 = 2; i_7 < 24;i_7 += 1)
                    {
                        arr_25 [3] [i_5] [i_5] = (((((!var_15) > var_18)) && 32345));
                        arr_26 [i_5] [18] = arr_23 [i_6] [i_6] [i_5] [24] [21] [i_2] [i_2];
                    }
                    for (int i_8 = 2; i_8 < 24;i_8 += 1)
                    {
                        var_26 = ((((((min(var_14, var_11)) + var_15))) < var_2));
                        arr_29 [i_2] [i_2] [i_5] = (!-450823163753799048);
                        arr_30 [i_2] [i_2] [14] [i_5] [i_5] [i_8] [i_8] = (((0 ? 14680064 : 14210)) / ((((((arr_11 [i_2] [i_4] [i_2]) / var_0))) ? (min((arr_16 [i_4] [i_5] [i_5]), (arr_13 [i_4]))) : (max((arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]), var_5)))));
                    }
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        var_27 = var_17;
                        arr_33 [i_2] [i_2] [i_2] [i_2] [i_2] [i_5] [i_2] = (min(var_19, -450823163753799047));
                        arr_34 [i_9] [i_5] [i_5] [i_5] [i_2] = (((((((((var_17 < (arr_31 [i_4] [i_4] [i_4]))))) * (var_11 / var_8)))) ? var_12 : (arr_28 [i_6 + 1] [4] [i_6] [i_6 + 1])));
                        arr_35 [i_5] [i_6] [i_5] [i_2] [i_5] = ((var_8 && (arr_14 [i_2] [i_2])));
                    }
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        arr_39 [i_2] [i_2] [i_4] [i_5] [i_5] [i_10] = var_18;
                        arr_40 [i_6] [i_5] = (!var_0);
                    }

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        var_28 = var_1;
                        var_29 = var_8;
                        arr_44 [5] [i_5] [i_5] [i_6] [i_11] [i_5] = ((var_6 >> (var_4 + 3411)));
                    }
                    var_30 = ((var_18 > (min(var_2, (arr_24 [i_5] [i_6] [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1])))));
                    arr_45 [i_5] [i_5] = (arr_14 [3] [i_6 + 1]);
                }
                arr_46 [23] [i_4] [i_5] = (((((~(arr_43 [14] [8] [i_4] [i_2] [i_2] [i_2] [i_2])))) + var_11));
                arr_47 [i_2] [i_5] [i_5] = ((var_9 < (min((arr_18 [i_5]), var_6))));
                arr_48 [i_5] [i_5] [i_5] = (min(var_11, (((!((min(var_8, var_11))))))));
            }
            for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
            {
                arr_53 [i_12] = ((((min((~4194296), (arr_50 [i_2] [i_4])))) ? (((((arr_14 [i_2] [i_12]) > var_11)))) : -var_6));
                var_31 = (min(var_31, (var_13 / var_5)));
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        {
                            arr_60 [i_2] [i_4] [18] [i_12] [i_13] [i_14] [5] = (arr_32 [i_2] [i_4] [12] [6] [i_2]);
                            var_32 += var_12;
                        }
                    }
                }
            }
            for (int i_15 = 0; i_15 < 25;i_15 += 1) /* same iter space */
            {
                var_33 = (((((((arr_20 [i_15]) >> (var_19 - 207))) < (arr_23 [i_2] [i_2] [i_15] [7] [i_15] [i_2] [i_4]))) ? (((arr_21 [i_15]) ? ((15 ? 1 : 1)) : (((max(var_4, var_5)))))) : ((((var_13 >= (arr_38 [i_15] [i_4] [i_15])))))));
                var_34 ^= ((((var_1 > (((arr_42 [i_2] [i_4] [i_15] [i_15] [i_2]) >> (((arr_50 [i_2] [i_2]) - 2228)))))) ? ((((((-450823163753799061 ? 1091648029 : 1854605427))) ? ((-(arr_11 [15] [20] [i_2]))) : (var_3 && var_14)))) : (arr_54 [i_15] [i_4] [i_2] [11] [i_2] [i_2])));
            }
            arr_63 [i_2] = (((((var_7 && var_1) && (arr_31 [i_4] [i_4] [i_4]))) && (((arr_42 [i_4] [i_2] [22] [i_2] [i_4]) < (~var_9)))));
            var_35 = (arr_43 [i_2] [i_2] [i_2] [i_2] [i_4] [i_4] [i_2]);
            arr_64 [18] [i_4] = ((((min(var_10, var_3))) ? (min(3652601022, 9223372036854775807)) : (arr_59 [i_2] [i_2] [i_2] [i_4] [16] [i_4] [16])));
            arr_65 [i_2] [i_2] = -var_18;
        }
        arr_66 [i_2] = (((-9 && 15) / var_6));
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 25;i_16 += 1) /* same iter space */
    {
        arr_69 [i_16] = var_1;
        var_36 = var_14;
    }
    #pragma endscop
}
