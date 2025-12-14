/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_19 = var_1;
            arr_5 [i_0] [i_1] = (-1123600994 && var_4);
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_9 [i_0] [i_0] [i_0] = ((((min(var_1, (((arr_4 [i_0]) + -1123600998))))) ? -26 : (((((arr_4 [i_2]) ? var_18 : 9187343239835811840)) - (1123600994 / 1)))));
            arr_10 [i_0] = (arr_4 [i_2]);
            arr_11 [i_0] = (max(120, -32766));
        }
        for (int i_3 = 4; i_3 < 10;i_3 += 1)
        {
            arr_14 [i_0] [0] = ((((min((arr_1 [i_0]), 2))) + (min((max(var_1, var_11)), (max((arr_4 [i_0]), (arr_2 [i_0] [i_0] [i_3])))))));

            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_20 = (arr_3 [i_0] [i_3]);
                    var_21 = arr_4 [i_5];

                    for (int i_6 = 4; i_6 < 12;i_6 += 1)
                    {
                        arr_23 [i_0] [i_0] [i_4] [1] [i_6] = ((((arr_1 [i_0]) ? var_14 : ((-(arr_13 [i_4] [i_5]))))));
                        var_22 -= (max((arr_3 [i_3] [5]), (arr_1 [i_4])));
                        var_23 = (((((((arr_13 [i_0] [i_6]) && (arr_19 [i_0] [i_3] [i_0] [i_3]))) ? (min((arr_20 [i_0] [i_3] [i_5] [i_5]), var_17)) : (arr_6 [i_0] [i_3] [i_0]))) * (((max(10, (arr_22 [i_0] [i_3] [i_6 - 1] [i_5] [i_6 - 1] [i_6 + 2])))))));
                    }
                }
                for (int i_7 = 3; i_7 < 12;i_7 += 1) /* same iter space */
                {
                    arr_26 [i_0] = (1 ? 253 : 8);
                    var_24 = (((arr_7 [i_0]) + var_10));

                    for (int i_8 = 3; i_8 < 11;i_8 += 1)
                    {
                        arr_29 [i_0] [i_3 - 2] [i_4] = var_1;
                        arr_30 [i_0] [i_3] [i_4] [i_0] [i_8] = -3;
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_25 = (arr_18 [i_0]);
                        arr_35 [i_0] = (((((arr_22 [i_0] [i_3 + 4] [i_3 - 4] [9] [i_3 - 3] [i_7 + 2]) - var_14)) | -1123600994));
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_26 = ((((((arr_21 [i_0] [i_0]) / (arr_21 [i_3] [i_0])))) - ((-111 - (arr_13 [i_0] [i_4])))));
                        var_27 *= ((-var_3 ? (arr_4 [i_10]) : (((((min(177885703605362843, (arr_20 [i_0] [i_4] [i_7] [i_10])))) && (arr_31 [i_4] [i_7 + 1] [i_10] [i_10] [i_10]))))));
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        var_28 = ((((max((min(var_17, var_10)), (arr_17 [i_0] [i_4] [i_7 - 1] [i_11])))) ? (arr_7 [i_0]) : (max((arr_37 [i_7 + 1] [i_3 + 1]), (!var_4)))));
                        var_29 = var_16;
                    }
                    arr_43 [i_0] [i_3 - 1] [i_4] [i_7 + 2] = ((var_14 && ((((6171 ^ 0) + ((~(arr_34 [i_0] [i_3 + 3] [i_4] [11] [i_7 + 2] [i_0]))))))));
                }
                for (int i_12 = 3; i_12 < 12;i_12 += 1) /* same iter space */
                {
                    var_30 = (arr_4 [i_3]);
                    arr_48 [i_0] [7] [i_3] [i_0] [i_3] [i_0] = (arr_40 [i_0] [i_3 + 4] [7] [i_4] [i_12] [i_12 + 1]);
                }
                var_31 = (max(var_31, ((max((((var_4 & (((!(arr_32 [i_3] [i_0] [i_3] [i_3] [i_4]))))))), (((((-91 ? var_16 : var_8))) ? ((((arr_8 [i_3]) ? var_16 : (arr_6 [i_0] [i_3] [i_4])))) : ((72 ? 18268858370104188773 : 79)))))))));
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                arr_52 [i_0] [1] [i_3 - 4] [i_0] = ((((max(-886256156, (min((arr_36 [2] [i_3 - 3]), 30))))) ? ((max((var_12 || var_17), ((240 ? 15 : 242))))) : ((max((arr_50 [i_3] [i_3] [i_13]), (arr_3 [i_0] [i_13]))))));

                /* vectorizable */
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    var_32 = (((((arr_15 [i_0] [i_3] [i_0]) & (arr_20 [i_0] [i_3 + 3] [i_3 - 3] [i_3]))) > var_15));
                    arr_55 [i_0] [i_0] = (arr_34 [i_0] [i_0] [i_3 + 4] [i_13] [i_13] [i_0]);
                    arr_56 [i_0] [i_3] [i_13] [i_14] = -111;
                }
                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    arr_60 [i_0] [11] [i_0] [3] = (min(((-(arr_31 [i_0] [i_3 + 4] [i_13] [i_3 + 4] [i_15]))), (((arr_40 [i_0] [i_3 + 1] [i_0] [i_0] [6] [i_15]) ^ var_17))));
                    var_33 ^= (((max(13, (min(var_13, (arr_31 [i_3] [i_3] [i_13] [i_15] [i_3]))))) & 2027861415975943199));
                }
            }
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                var_34 = ((var_11 ^ (arr_19 [i_3 - 1] [i_3] [i_0] [i_0])));
                var_35 *= -114;
            }
            var_36 = (((arr_57 [i_0] [i_3] [i_0] [i_3]) >= ((max(((~(arr_33 [i_0] [i_0] [i_0] [i_3 - 1] [i_3]))), (arr_44 [i_0] [i_0] [i_0] [i_3 - 4]))))));
            var_37 = (arr_39 [i_0] [i_0] [i_3 + 3] [i_0] [i_3 - 4] [i_3 - 3]);
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 14;i_17 += 1)
        {
            var_38 = (arr_64 [i_0] [i_17]);
            arr_65 [i_0] [5] [i_0] = (arr_40 [i_0] [i_17] [i_17] [i_17] [i_17] [i_17]);
            var_39 = ((var_8 ? 18268858370104188764 : var_10));
            var_40 -= var_9;
        }
        var_41 = (((var_8 - (((min(15, 248)))))));
    }
    var_42 = var_8;
    var_43 ^= ((var_18 ? (max((60911 << var_0), (max(var_18, var_11)))) : (~var_16)));
    #pragma endscop
}
