/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (max(var_16, var_6));
                var_17 *= 127;
                var_18 ^= (((var_11 | 24438) ? (var_12 > -5827) : -5828));
            }
        }
    }
    var_19 = (max(var_19, var_7));
    var_20 = var_6;

    /* vectorizable */
    for (int i_2 = 1; i_2 < 7;i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] [i_2] = -109;
        var_21 = (((arr_4 [i_2 - 1]) ? (arr_3 [i_2 + 2] [i_2 + 3]) : 1135269830));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 7;i_3 += 1) /* same iter space */
    {
        var_22 = (max(var_22, var_9));
        arr_11 [i_3] = ((0 ? (arr_10 [i_3 + 1]) : 248));

        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
        {
            var_23 = (((!var_11) / 16714));

            for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
            {
                var_24 *= (((arr_3 [i_3 + 1] [i_3 + 3]) > (arr_16 [i_3 + 3] [i_3 + 3] [i_3 + 1] [i_5])));
                arr_17 [i_3] [i_4] [i_5] = (((((192 ? var_3 : (arr_4 [i_3])))) ? (((0 >> (-27585 + 27614)))) : ((var_9 ? 15302 : (arr_8 [i_3] [i_3])))));
            }
            for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    var_25 = (((arr_10 [i_6]) + (arr_10 [i_3 - 1])));
                    arr_23 [i_3] [i_4] [i_4] [i_4] [i_3] [i_4] = ((53756 ? 30034 : 250));
                    var_26 = (min(var_26, ((((arr_20 [i_3 + 2] [i_3] [i_3 - 1] [i_6] [i_6] [i_7 + 1]) ^ 251)))));
                    var_27 += var_9;
                    arr_24 [i_3] [i_3] [i_7] = ((195 << (14418413780447527976 - 14418413780447527968)));
                }
                var_28 += ((85 ? 234 : 65535));
            }
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_9 = 3; i_9 < 9;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        {
                            arr_34 [i_3] [i_10] [3] [i_9] [i_8] [i_3] = (((arr_30 [i_3] [i_8] [i_9] [i_3 + 3] [i_8] [i_9 - 2]) ? -242 : ((-2 ? var_2 : (arr_20 [i_9] [i_10] [i_10] [i_9] [i_8] [i_3])))));
                            arr_35 [i_3] [i_3] [i_9] [i_10] [i_3] = (((19554 + (arr_30 [i_3 + 2] [i_8] [i_8] [i_10] [i_10] [i_10]))) * ((19 >> (52432 - 52424))));
                            arr_36 [i_11] [i_3] [i_3] [i_3] [i_3] = (251 ^ 4037637059405431592);
                            var_29 += (arr_18 [i_10] [2]);
                            arr_37 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = var_13;
                        }
                    }
                }
            }
            var_30 = ((-48 & (arr_32 [i_3] [i_3 + 1] [i_8])));
            arr_38 [i_3] [i_3] [i_3] = (((arr_6 [i_8]) ? (arr_1 [i_3 - 1] [i_3 + 1]) : (arr_1 [16] [i_8])));
        }
        for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
        {
            arr_42 [6] &= arr_27 [i_3] [i_3];
            var_31 = (min(var_31, (((((((arr_22 [i_3] [i_3]) ? (arr_32 [i_12] [i_3] [i_3]) : (arr_21 [i_3] [3] [i_12] [i_12])))) ? var_14 : (~-5815))))));
        }
        var_32 = (max(var_32, (var_13 == var_4)));
    }
    for (int i_13 = 1; i_13 < 7;i_13 += 1) /* same iter space */
    {
        arr_45 [i_13] = ((var_5 ? ((var_15 ? var_1 : (arr_29 [i_13 + 2]))) : (((arr_13 [4] [4]) * 1))));

        for (int i_14 = 0; i_14 < 10;i_14 += 1)
        {
            arr_48 [i_14] [i_13] = (((-1167493886 | 21) | ((min(var_9, var_4)))));
            var_33 = 11;
            var_34 = (min(var_34, ((((((5 ? 17515 : 108))) ? -1 : var_1)))));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 0;i_15 += 1)
        {
            arr_51 [i_15] = ((13 ? (arr_21 [5] [5] [i_13 + 2] [i_13]) : var_14));
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 6;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 10;i_18 += 1)
                    {
                        {
                            arr_59 [i_15] [i_17] [8] [i_16] [i_15] [i_15] = ((var_2 ? (arr_33 [i_13 + 2] [i_15 + 1] [i_13 + 2] [i_16] [i_17 - 2] [i_18] [i_18]) : (arr_33 [i_13 + 1] [i_15 + 1] [i_15] [i_15] [i_17] [i_18] [i_18])));
                            arr_60 [i_13 - 1] [i_15] [i_13] [i_13] = ((((((arr_55 [i_16] [i_15] [i_16] [i_16]) == var_6))) > 223));
                            var_35 = (4697568744986473851 ? 4 : var_9);
                        }
                    }
                }
            }
        }
        for (int i_19 = 0; i_19 < 10;i_19 += 1)
        {
            var_36 = (min((max(((min((arr_47 [i_13] [i_19]), var_11))), (min(0, 1)))), (((((((arr_29 [2]) ? 241 : var_3))) ? ((max((arr_54 [i_13] [i_13] [i_19]), (arr_56 [i_13] [i_13] [6] [i_13])))) : -11128)))));
            arr_65 [i_13] [i_13] |= (min((((var_11 ? var_6 : var_3))), (((((11127 ? (arr_25 [i_19]) : 172))) ? (3006 + var_0) : ((18446744073709551615 ? var_14 : var_5))))));
        }
        var_37 = ((2885164278 ? 255 : 1));
        arr_66 [i_13] [i_13] &= (max(((var_7 >> ((((max(var_2, var_1))) - 120)))), ((~((77 << (((arr_30 [i_13] [i_13] [i_13] [i_13 + 3] [i_13] [i_13 - 1]) + 2521))))))));
    }
    #pragma endscop
}
