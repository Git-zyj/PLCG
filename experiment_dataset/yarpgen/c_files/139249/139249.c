/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((((min((var_8 | 1), var_15))) ? (!-2048) : var_9));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (max(((-((min((arr_2 [i_0]), 59))))), var_5));
        var_19 = ((((((~4111263661) ? (((arr_2 [i_0]) ? -4697662323424678412 : var_16)) : (arr_1 [i_0 - 1] [1])))) ? (arr_1 [i_0 + 1] [i_0 - 1]) : (arr_1 [11] [i_0 - 3])));
        var_20 = 191;
        var_21 ^= (((((var_10 ? (arr_2 [i_0 + 1]) : (arr_2 [15])))) ? var_8 : (arr_1 [1] [i_0 + 1])));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_22 *= (min((max((arr_5 [i_1]), (arr_7 [i_1 - 2]))), (arr_7 [11])));
        var_23 = (~(0 | 52));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_24 += (arr_6 [i_2 + 1]);
                    arr_16 [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_2] = (i_2 % 2 == 0) ? (((((arr_11 [i_2 + 2]) << (((arr_0 [i_2]) - 2016906034)))))) : (((((arr_11 [i_2 + 2]) << (((((((arr_0 [i_2]) - 2016906034)) + 874524919)) - 18))))));
                }
            }
        }
        arr_17 [i_2] = ((18446744073709551615 & (arr_13 [i_2 + 1] [i_2 + 1] [i_2 + 2])));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_25 = (!183);
            var_26 -= var_16;
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            arr_25 [i_2 + 1] [i_2 + 2] [i_2] = (arr_23 [i_2 + 2] [i_2 - 1] [i_6]);
            arr_26 [i_2 - 1] [i_2] [i_6] = var_13;
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            arr_29 [i_2] [i_7] [i_2] = 1;
            arr_30 [i_2] = (arr_8 [i_7] [i_2 + 2]);
            var_27 = (~var_16);
        }
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 16;i_8 += 1)
    {
        var_28 = (arr_33 [i_8 + 1] [i_8 + 2]);
        var_29 = (arr_31 [i_8 - 1]);
    }

    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        var_30 = (arr_37 [i_11 + 1]);
                        var_31 = (((((511 ? 1 : 0))) ? -var_17 : ((((arr_42 [i_12] [5] [i_10] [i_9]) < (arr_38 [i_9] [3]))))));
                        var_32 = var_17;
                        var_33 = 1;
                    }
                }
            }
        }
        var_34 ^= 10;
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {

        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {

            /* vectorizable */
            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                var_35 *= (!var_4);
                var_36 = (arr_41 [i_13] [i_14] [i_15] [i_14]);
            }
            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                var_37 = (arr_19 [i_13] [i_14] [i_16]);
                var_38 ^= ((((min((((!(arr_14 [8] [i_16] [8])))), 23668))) ? ((((!(arr_52 [i_13] [i_14] [i_14] [i_16]))))) : (max(110, 3504556475739189982))));
                var_39 = (((((min(var_8, (arr_42 [i_13] [i_14] [i_14] [9]))))) <= -3504556475739189978));
            }

            for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
            {
                var_40 = 0;
                arr_57 [i_14] [1] [i_14] [i_14] = var_10;

                for (int i_18 = 0; i_18 < 11;i_18 += 1)
                {
                    var_41 &= (!var_15);
                    var_42 *= (min((arr_53 [i_13] [1] [i_17] [5]), -20465));
                }
                for (int i_19 = 1; i_19 < 10;i_19 += 1)
                {
                    var_43 = (arr_31 [i_14]);
                    var_44 *= (((!(arr_1 [i_13] [i_17]))));
                    var_45 = (arr_32 [i_14]);
                }
            }
            for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
            {
                var_46 = ((((max((arr_23 [i_13] [5] [i_20]), (arr_1 [i_13] [i_14])))) ? (((!(arr_12 [i_14] [i_14])))) : (((var_2 - var_11) ? var_11 : (var_10 + var_8)))));
                var_47 *= (max((((arr_42 [i_13] [i_14] [4] [i_20]) - (arr_42 [i_20] [i_20] [i_14] [i_13]))), -447647659));
            }
            arr_64 [i_14] [i_14] [i_14] = (min((((var_17 && (arr_44 [i_13] [i_13] [i_13] [i_13])))), (arr_43 [i_13] [i_13] [i_14] [i_14] [16])));
            var_48 = (arr_14 [i_13] [i_14] [i_14]);
            var_49 = ((((max(var_1, (arr_60 [i_14])))) ? (((arr_44 [i_13] [i_14] [i_14] [i_13]) % (arr_44 [i_14] [1] [i_13] [i_13]))) : (var_5 / var_11)));
        }
        var_50 = var_5;
        arr_65 [i_13] [i_13] = (max(var_16, (!65529)));
    }
    var_51 = var_13;
    var_52 = var_8;
    #pragma endscop
}
