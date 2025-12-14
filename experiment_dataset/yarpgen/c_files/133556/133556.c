/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(((min(var_1, var_8))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_16 = (1344874248 & -950696755);
        var_17 = var_2;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_18 = (((arr_2 [i_1] [15]) ? (arr_1 [i_1] [i_1]) : ((var_7 ? var_4 : (arr_1 [i_1] [i_1])))));
        var_19 = ((!(arr_3 [i_1])));

        for (int i_2 = 4; i_2 < 14;i_2 += 1) /* same iter space */
        {
            arr_6 [i_2 + 3] [14] = (((arr_5 [i_1] [i_1]) ? 2950093047 : 3498141875199755916));
            arr_7 [i_1] [i_2] [i_2 - 3] = ((((((arr_1 [i_1] [i_2 - 4]) << (var_8 - 54663)))) ? (arr_2 [i_2 + 3] [i_1]) : var_5));
        }
        for (int i_3 = 4; i_3 < 14;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 4; i_4 < 15;i_4 += 1)
            {
                arr_12 [8] [i_3 - 4] [i_1] = (((((var_8 ? var_9 : (arr_9 [i_4] [i_3] [i_1])))) && (arr_2 [i_1] [i_1])));
                var_20 ^= 2950093049;
            }
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                arr_16 [i_1] [i_1] = ((((134 ? 8292001202298925751 : (-9223372036854775807 - 1)))) ? var_12 : (~-950696755));
                arr_17 [i_1] [15] [i_1] [i_1] = 23853;
            }
            var_21 = (max(var_21, ((((arr_1 [i_1] [i_1]) ? 0 : 15644)))));
            arr_18 [i_3 - 2] = 4036345256975481032;
            arr_19 [i_1] [i_1] [i_1] = (!113);

            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                arr_24 [i_1] [i_6] [i_6] = ((+(((arr_22 [i_1] [14] [i_1] [i_1]) >> (((arr_3 [15]) - 1470177559))))));
                arr_25 [i_3] [i_3] [i_3] [i_3 - 2] = (((arr_4 [i_3 - 2] [i_3]) ? 113 : ((((arr_22 [i_1] [i_1] [i_6] [7]) > (arr_13 [i_1] [i_1] [i_1]))))));
                arr_26 [i_6] [1] [i_1] = var_13;
            }
            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                var_22 = ((!(arr_5 [i_3 - 2] [i_7 - 1])));
                var_23 = (209 % (var_5 & 20));
            }
        }
        for (int i_8 = 4; i_8 < 14;i_8 += 1) /* same iter space */
        {
            var_24 = arr_13 [i_8] [i_8] [i_1];
            var_25 = (-760331388 >= 846827177);

            for (int i_9 = 2; i_9 < 14;i_9 += 1)
            {
                arr_34 [i_9] [i_8] [i_8 + 2] [i_1] = arr_21 [i_9 + 2] [i_8] [15] [15];
                arr_35 [i_1] [i_1] [i_8] [i_9] = ((~(arr_0 [i_8 + 3])));
                arr_36 [i_9] = ((var_14 ? (arr_4 [i_8 - 2] [i_9 + 1]) : ((-1861992662 ? (arr_0 [i_1]) : -1))));
                arr_37 [16] = ((-(arr_32 [i_1] [i_1] [i_1])));
                var_26 &= ((((((arr_21 [i_9 - 2] [i_8] [i_1] [i_1]) ? var_12 : var_10))) / ((var_9 ? -8354487078401431593 : 17))));
            }
            for (int i_10 = 4; i_10 < 15;i_10 += 1)
            {

                for (int i_11 = 2; i_11 < 15;i_11 += 1)
                {
                    var_27 *= (((((!(arr_28 [i_1] [i_8 - 2] [i_10] [i_11])))) | 253));
                    var_28 = ((~(arr_42 [i_1] [i_11] [i_10 - 4] [i_11 + 2] [i_11 - 1])));
                }
                for (int i_12 = 2; i_12 < 14;i_12 += 1)
                {
                    arr_47 [i_1] [i_1] [12] [i_1] [i_1] = (((arr_0 [i_10 - 1]) >> (((((arr_10 [i_1]) ? (arr_4 [i_1] [i_1]) : 41667)) - 251))));
                    arr_48 [i_8] = (((arr_14 [i_8 + 2] [13] [i_10 - 2] [i_12 + 3]) * var_11));
                }
                var_29 = ((0 && ((((arr_20 [i_10] [11] [0] [i_1]) ? (arr_3 [i_1]) : 113)))));
                arr_49 [i_1] = (arr_1 [i_10 - 3] [i_8 - 1]);
                arr_50 [i_1] [i_8] [i_10] [i_10] = (arr_28 [i_10 - 1] [i_8] [i_1] [12]);
            }
            for (int i_13 = 1; i_13 < 15;i_13 += 1) /* same iter space */
            {
                var_30 ^= (~-var_3);
                arr_54 [i_13] [i_8] [i_8] [i_8] = (arr_1 [i_13 - 1] [i_8 + 3]);
                arr_55 [i_13] = (((arr_28 [i_13 + 1] [6] [6] [i_1]) - -1334));
                var_31 = var_8;
            }
            for (int i_14 = 1; i_14 < 15;i_14 += 1) /* same iter space */
            {
                arr_58 [i_14] [i_8] [i_8] = ((!(arr_1 [i_14 - 1] [i_1])));
                /* LoopNest 2 */
                for (int i_15 = 1; i_15 < 16;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        {
                            arr_65 [i_14] = ((!(arr_11 [i_1] [i_1] [i_1])));
                            arr_66 [i_15] [i_14] [i_1] = ((((!(arr_43 [i_16] [i_8 - 3]))) ? (((!(arr_42 [8] [15] [8] [8] [8])))) : (arr_56 [i_14 + 1] [i_8] [i_8 - 4])));
                        }
                    }
                }
                var_32 ^= (3957539280 | -691942432);
                arr_67 [i_8 - 2] [i_14] = ((107 >= (arr_32 [i_8] [i_8] [i_1])));
                var_33 = (((arr_4 [i_8 - 4] [i_14 + 1]) != (arr_57 [i_14])));
            }
            arr_68 [0] = 7;
        }
    }
    for (int i_17 = 0; i_17 < 12;i_17 += 1)
    {
        var_34 = ((max(((max(var_8, (arr_62 [i_17])))), (((arr_3 [i_17]) | var_7)))) ^ (((~(arr_9 [i_17] [i_17] [i_17])))));
        arr_71 [9] = (((((arr_61 [i_17] [i_17] [i_17]) > (arr_51 [i_17] [i_17]))) ? (arr_29 [i_17] [i_17] [i_17]) : (max((arr_5 [i_17] [i_17]), (max(var_8, (arr_53 [i_17] [i_17] [i_17] [i_17])))))));
        arr_72 [i_17] = var_9;
    }
    var_35 = var_5;
    var_36 = var_12;
    var_37 = var_11;
    #pragma endscop
}
