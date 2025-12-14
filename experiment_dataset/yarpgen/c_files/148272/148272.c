/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min(63, var_14))) ? ((66 ? (1 && var_15) : var_11)) : ((var_12 ? (~var_15) : 1))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (((arr_3 [i_0] [i_0]) ? var_9 : (arr_1 [i_0])));
        var_20 = ((193 ? 1 : 125));

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_21 -= (arr_0 [i_0]);
                arr_9 [i_0] = (((var_9 ? (arr_6 [i_2] [i_0]) : (arr_4 [i_2] [i_1] [i_0]))));
            }
            for (int i_3 = 4; i_3 < 8;i_3 += 1)
            {
                var_22 += (!31);

                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    var_23 = ((64495 ? 0 : (((arr_10 [i_0] [i_0]) ? (arr_4 [4] [i_3] [i_4]) : (arr_13 [i_1] [i_1])))));
                    var_24 -= ((-(arr_6 [i_0] [i_4 + 1])));
                    var_25 = -79;
                }
                var_26 = (32 / 177);
                arr_14 [i_0] = (!(arr_11 [i_3 + 1] [i_3 - 2] [i_3 - 4]));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_17 [i_0] [i_1] [i_1] [i_5] = ((-((55204 + (arr_5 [9] [i_1])))));
                arr_18 [i_0] = (arr_15 [i_0]);
                arr_19 [i_1] |= ((((arr_11 [i_5] [i_0] [i_0]) << (var_13 - 60))));
            }
            arr_20 [i_1] &= ((((((arr_7 [i_0] [i_0] [i_1] [i_1]) ? var_10 : 16))) ? (arr_1 [i_1]) : (arr_3 [i_1] [i_0])));
            arr_21 [i_0] [i_0] = (((202 | var_11) + ((((arr_0 [i_0]) == var_8)))));
            var_27 ^= (180 * var_9);
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            var_28 ^= ((37882 ? var_8 : (arr_8 [i_6] [i_6] [i_0] [i_0])));

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {

                for (int i_8 = 3; i_8 < 9;i_8 += 1)
                {
                    var_29 -= ((-8 ? var_10 : 8191));
                    var_30 = var_2;
                }
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {

                    for (int i_10 = 2; i_10 < 8;i_10 += 1)
                    {
                        arr_35 [i_0] [i_0] [i_6] [i_6] [i_0] [i_9] [i_0] = (~1);
                        var_31 ^= (arr_29 [i_10 - 2] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10 + 1]);
                        var_32 = var_10;
                    }
                    arr_36 [i_9] [i_0] [i_7] [i_6] [i_0] [i_0] = var_11;
                }
                for (int i_11 = 1; i_11 < 6;i_11 += 1)
                {
                    arr_40 [i_0] = (arr_10 [i_0] [i_0]);
                    arr_41 [i_6] [i_6] |= (var_0 + var_12);
                    arr_42 [i_0] [i_0] [i_0] [i_0] = ((-(~var_2)));
                }
                var_33 &= (((((131 ? (arr_3 [i_6] [i_6]) : (arr_15 [i_6])))) ? ((37882 | (arr_23 [i_7] [i_0]))) : ((var_5 ^ (arr_38 [i_0] [i_0] [i_7] [2] [i_7] [i_7])))));
                arr_43 [i_0] [i_0] [i_0] [1] = (arr_23 [i_0] [i_6]);
            }
            for (int i_12 = 3; i_12 < 9;i_12 += 1)
            {
                arr_48 [i_0] [i_0] = 125;
                var_34 ^= ((((((arr_28 [i_0] [5] [7]) % var_7))) ? 153 : (~1)));

                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {

                    for (int i_14 = 1; i_14 < 7;i_14 += 1)
                    {
                        var_35 += (((((arr_28 [i_13] [3] [i_0]) ? var_14 : var_1)) & (1 >> 1)));
                        arr_55 [i_0] [i_0] [i_12 - 2] [i_6] [i_0] = (((arr_7 [i_14 + 1] [i_14 + 2] [i_12 + 1] [i_0]) % (arr_7 [i_14 - 1] [i_14 + 3] [i_12 - 3] [i_0])));
                    }

                    for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                    {
                        arr_58 [i_0] [4] = (arr_33 [i_0] [i_13] [0] [i_12 + 1] [7] [i_15]);
                        arr_59 [i_6] [i_6] [i_6] &= (((arr_49 [i_0] [i_6] [1] [i_0] [i_15]) ? (arr_24 [i_12 - 1] [i_12 - 3] [i_12 - 2]) : (arr_11 [i_12 - 3] [i_12 - 3] [i_12 - 2])));
                    }
                    for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                    {
                        arr_62 [i_0] [i_6] [i_6] [i_6] [i_6] = var_4;
                        var_36 = (arr_29 [i_6] [i_12 - 3] [i_6] [i_6] [i_6] [i_6]);
                        arr_63 [i_12] [i_6] [i_0] [i_6] [i_13] = (((((123 ? 1 : var_9))) ? ((var_15 ? var_14 : (arr_37 [9] [i_6] [i_6] [1] [i_0] [i_6]))) : -var_11));
                        arr_64 [i_0] [i_6] [i_6] [i_6] [i_6] = (((arr_4 [i_12 + 1] [i_16] [i_16]) <= (arr_39 [i_12 + 1] [i_12 + 1])));
                        arr_65 [i_0] [i_0] [i_0] = 1;
                    }
                    for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
                    {
                        arr_68 [9] [9] [i_0] [i_17] = var_5;
                        var_37 = (arr_29 [i_0] [i_6] [i_6] [8] [i_12 + 1] [i_13]);
                        arr_69 [i_6] [i_6] [i_12] [8] [i_17] |= (((((1 ? var_16 : var_14))) ? var_3 : (!var_16)));
                        var_38 |= 1055;
                        var_39 = ((var_2 ? ((var_6 ? 1 : 41666)) : (1 >= 1)));
                    }
                }
                for (int i_18 = 1; i_18 < 1;i_18 += 1)
                {
                    var_40 += ((~(arr_7 [i_0] [i_6] [i_6] [i_6])));
                    arr_73 [i_0] [i_6] [1] [i_6] = var_0;
                }
                for (int i_19 = 0; i_19 < 10;i_19 += 1)
                {
                    var_41 += ((var_11 ? (arr_7 [1] [1] [6] [0]) : (31744 * var_0)));
                    var_42 = arr_45 [i_0] [i_6] [i_12] [i_19];
                    arr_76 [i_0] = ((arr_61 [i_12] [i_12 - 1] [i_12] [i_12 - 2] [2]) && (arr_61 [i_12] [i_12 - 1] [i_12] [i_12 - 2] [i_12 - 1]));
                    var_43 = (((arr_2 [i_19] [i_12]) ? (arr_27 [i_12 - 1] [i_12 + 1] [i_12 - 1] [i_12]) : (arr_33 [i_12 - 3] [9] [0] [i_12] [i_12 + 1] [i_12])));
                }
            }
            for (int i_20 = 0; i_20 < 10;i_20 += 1)
            {
                var_44 ^= (((arr_61 [i_0] [i_0] [2] [i_0] [i_0]) | (((arr_53 [i_6]) - var_14))));
                arr_79 [i_0] [i_0] [i_0] = var_14;
            }
            for (int i_21 = 0; i_21 < 0;i_21 += 1)
            {
                var_45 += var_17;
                var_46 = -var_12;
            }
        }
        var_47 = var_15;
    }
    /* vectorizable */
    for (int i_22 = 2; i_22 < 9;i_22 += 1)
    {
        arr_85 [i_22] = ((var_6 ? (arr_22 [i_22 - 1]) : 1));
        var_48 = (arr_46 [6] [i_22] [1]);
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 25;i_23 += 1)
    {
        var_49 = ((50626 ^ (arr_86 [i_23])));
        arr_88 [0] = (arr_87 [i_23] [i_23]);

        for (int i_24 = 2; i_24 < 24;i_24 += 1)
        {
            var_50 = (((((arr_90 [i_24 - 1]) << (((arr_87 [i_23] [i_24]) - 70)))) >> (((50 | var_16) - 40))));
            var_51 *= (arr_90 [i_24 - 2]);
            var_52 -= ((!(arr_89 [i_24 + 1] [i_24] [i_24 + 1])));
            /* LoopNest 2 */
            for (int i_25 = 0; i_25 < 25;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 1;i_26 += 1)
                {
                    {
                        var_53 = ((210 ? 1 : 1));
                        var_54 *= (arr_92 [i_24 + 1] [i_24 - 1]);
                    }
                }
            }
        }
    }
    var_55 ^= ((~((var_12 ? ((var_6 << (var_15 - 48))) : var_9))));
    var_56 &= var_11;
    #pragma endscop
}
