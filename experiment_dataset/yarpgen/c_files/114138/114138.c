/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((min((max(var_7, (~var_0))), -544192891)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = -544192902;
        var_13 = (max(var_13, ((((arr_1 [i_0] [i_0]) - (arr_0 [i_0]))))));
        arr_3 [1] [i_0] = arr_0 [i_0];
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        var_14 = (min(var_14, (((((((arr_1 [i_1] [i_1 - 1]) / (arr_2 [i_1] [i_1 - 1])))) ? (((((-544192912 ? -544192902 : 5121255726187520926))))) : 8589934528)))));
        var_15 = (((arr_2 [i_1] [i_1]) ? ((-(arr_5 [i_1 - 1]))) : (((arr_5 [i_1 + 4]) ? (arr_5 [i_1 + 4]) : (arr_5 [i_1 + 4])))));
    }
    var_16 = (min(var_16, (~var_1)));

    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_17 ^= (((((((arr_0 [i_2]) + (arr_5 [i_2]))) - (arr_0 [i_2])))) ? 1811 : (-1 - 268435456));
        arr_9 [i_2] = (max((((!((min(1488244105, (arr_1 [i_2] [i_2]))))))), (((arr_0 [i_2]) | var_8))));
        arr_10 [i_2] = min((arr_5 [i_2]), (((arr_6 [i_2 - 1]) / (arr_6 [i_2 - 1]))));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_18 = (((min((((arr_1 [i_3] [i_4]) ? (arr_17 [13]) : 1811)), ((max(var_10, (arr_1 [i_3] [i_3]))))))) ? ((min((max(var_5, var_7)), var_2))) : (((arr_5 [i_4]) + (arr_0 [i_3]))));
            arr_18 [i_3] = (arr_0 [i_3]);
        }
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            var_19 = 268435447;
            var_20 = (arr_4 [i_5]);

            /* vectorizable */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                var_21 = ((((arr_1 [i_5] [i_5]) + (arr_1 [i_3] [i_5]))));
                var_22 = var_1;
                var_23 = 1;
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_24 = (arr_2 [i_3] [i_3]);
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 13;i_9 += 1)
                    {
                        {
                            arr_31 [12] [0] [i_7] [i_3] [12] &= ((~(arr_27 [i_5 - 1] [i_8 + 3] [i_9 - 2])));
                            arr_32 [i_3] [i_5 - 1] [i_3] [i_5 - 1] [i_3] = ((((8515072348696553194 ? 1 : 5922))) ? var_5 : 1);
                        }
                    }
                }
                var_25 = (min(var_25, (arr_14 [i_7])));
            }
            for (int i_10 = 1; i_10 < 11;i_10 += 1)
            {
                var_26 = (max(var_26, ((((arr_24 [1] [i_5 - 1] [4]) ^ (((((min((arr_20 [i_5] [i_10]), (arr_35 [i_5] [i_10]))))) & (max(4026531829, -810973638)))))))));
                arr_37 [i_3] [i_3] = (((-var_5 ^ (arr_12 [i_10]))));
                arr_38 [i_3] [i_3] [0] [i_10] = ((((((544192886 ? var_5 : (arr_14 [i_5]))) / (arr_2 [i_3] [i_5]))) * ((((max((arr_15 [i_5]), (arr_16 [i_3]))) / 810973644)))));
            }
        }
        for (int i_11 = 1; i_11 < 11;i_11 += 1)
        {
            /* LoopNest 3 */
            for (int i_12 = 1; i_12 < 12;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 12;i_14 += 1)
                    {
                        {
                            arr_49 [i_3] [i_12] [i_11] [i_3] = (((arr_42 [i_12 + 2] [i_3]) % -544192886));
                            var_27 = ((((min((arr_41 [i_12 + 2] [i_13 - 2] [i_14] [i_12 + 2]), var_4))) && 37032));
                        }
                    }
                }
            }
            arr_50 [i_3] [1] = (((((((max((arr_43 [i_3] [1] [i_11]), (arr_17 [i_11 - 1])))) ? (arr_20 [i_11 + 2] [i_11]) : ((-810973630 ? (arr_5 [9]) : (arr_29 [i_11 - 1] [i_3] [7] [i_3] [i_3])))))) / ((~((810973638 ? (arr_36 [i_3] [i_3] [i_3] [i_11]) : (arr_43 [i_11] [i_3] [i_3])))))));
            arr_51 [i_3] [i_3] = var_7;
        }
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {

            for (int i_16 = 1; i_16 < 11;i_16 += 1)
            {
                var_28 ^= 147;
                var_29 &= ((((arr_33 [i_3] [i_15] [i_15] [i_15]) || (arr_33 [i_3] [i_3] [i_3] [i_15]))));
                arr_59 [i_15] |= (((arr_39 [i_15]) & (((((arr_57 [i_3] [i_3] [i_3]) + (arr_0 [i_3])))))));
            }
            /* LoopNest 2 */
            for (int i_17 = 1; i_17 < 10;i_17 += 1)
            {
                for (int i_18 = 2; i_18 < 11;i_18 += 1)
                {
                    {
                        var_30 = (min(var_30, var_3));
                        arr_66 [i_3] = (((arr_45 [i_3] [i_3] [i_17 + 3] [i_17] [i_18] [i_18]) != (arr_62 [i_18 + 2])));
                        var_31 &= ((~((8515072348696553204 ? var_5 : (((arr_13 [i_18]) ? (arr_62 [i_3]) : 4251950399))))));
                        var_32 = (max((min((((!(arr_44 [11] [i_3] [i_3])))), (min(var_5, 8515072348696553196)))), ((min(((((arr_5 [i_3]) & 80))), (((arr_17 [i_3]) ? (arr_65 [i_18] [12] [12] [12]) : (arr_40 [i_3] [i_3]))))))));
                    }
                }
            }
            var_33 -= (max(((max((max((arr_23 [i_3] [i_3] [i_3]), (arr_65 [i_3] [i_3] [i_3] [i_3]))), (arr_56 [i_3] [i_15] [i_15])))), (max((arr_44 [i_3] [i_15] [i_15]), 16384))));
        }
        var_34 = (max(var_34, (arr_64 [i_3] [i_3] [1] [1] [i_3])));
    }
    #pragma endscop
}
