/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 *= -var_14;
                arr_5 [i_0] [i_1] [i_0] = arr_4 [i_0 - 1] [i_0];
                var_17 = (max(var_17, 568890415));
                var_18 ^= var_1;
                arr_6 [i_0] [i_0] [i_0] = (((((((((!(arr_3 [i_0] [9] [i_0]))))) + 18446744073709551615))) ? (min(-18446744073709551598, (var_5 < var_0))) : (arr_2 [i_0 - 1])));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        var_19 *= var_4;
        arr_10 [7] = (99 >> (-1938 + 1964));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            arr_18 [3] = (((((max((arr_8 [i_3] [i_4]), 9209159345548790911)))) & (min(41878, ((var_15 ? (arr_11 [i_3] [i_4]) : 568890411))))));
            arr_19 [0] = ((0 - (max((arr_0 [i_4]), (arr_0 [i_3])))));
            var_20 ^= (((((arr_14 [12] [i_4]) ? -1978188389 : (384056714 / 31891))) < var_8));
        }

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_21 = ((-(arr_13 [i_3])));
            var_22 = (max(var_22, (arr_13 [3])));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            arr_24 [i_6] = (((arr_21 [i_3] [i_6]) & -30));
            var_23 = (arr_12 [i_3] [i_6]);
            arr_25 [i_3] [i_3] [i_3] = var_11;
        }
        var_24 *= (max((((arr_21 [i_3] [i_3]) ? (arr_7 [i_3] [i_3]) : -1705018317)), (arr_12 [i_3] [i_3])));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    arr_31 [i_7] [3] [0] [i_7] = ((var_1 ? (((((max((arr_9 [i_3] [5]), var_8)) > (arr_29 [i_7]))))) : (((((var_12 ? (arr_27 [i_3] [i_7]) : (arr_28 [i_3] [i_7])))) ? (arr_28 [i_3] [i_7]) : (max(-1919, 0))))));
                    arr_32 [i_8] [i_7] [i_7] [i_3] = -568890416;

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                    {
                        arr_35 [i_7] [i_8] = (((arr_26 [i_3]) ? var_14 : (arr_26 [12])));
                        var_25 = (max(var_25, (((9237584728160760694 && (822302993 || var_0))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                    {
                        var_26 ^= ((-var_0 / (arr_34 [i_10] [i_7] [7] [i_7] [11])));
                        arr_39 [i_10] [i_7] [i_10] [i_10] = ((((((arr_2 [i_3]) ? 37 : var_5))) ? (arr_21 [i_7] [i_7]) : var_8));
                        arr_40 [i_3] [i_8] [i_8] [i_8] &= 10;
                        var_27 = (var_5 ? ((var_0 ? var_0 : var_1)) : (9237584728160760723 > var_0));
                        var_28 = (max(var_28, (arr_38 [i_3] [i_3] [i_8] [i_10] [i_10])));
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 22;i_13 += 1)
            {
                {
                    arr_48 [15] [i_12] [i_12] [i_11] = ((((~(max(var_3, (arr_42 [i_11])))))) ? (((arr_43 [i_12]) ? 2571306388755383191 : (((arr_45 [i_12] [i_12] [i_12] [i_12]) ? (arr_45 [i_12] [i_12] [0] [20]) : (arr_45 [i_12] [8] [i_13] [i_13 - 3]))))) : 368560758973353034);
                    arr_49 [i_12] [i_12] = 14766450097070875672;
                }
            }
        }
        arr_50 [i_11] [16] = ((!(arr_44 [i_11] [i_11])));
        arr_51 [24] &= ((((((+((-1942 ? (arr_45 [6] [i_11] [i_11] [6]) : var_8)))) + 9223372036854775807)) << ((((((arr_45 [18] [i_11] [i_11] [i_11]) && ((min((arr_41 [i_11]), (arr_41 [i_11]))))))) - 1))));
    }
    var_29 = var_4;

    for (int i_14 = 1; i_14 < 11;i_14 += 1)
    {
        /* LoopNest 3 */
        for (int i_15 = 2; i_15 < 12;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 13;i_17 += 1)
                {
                    {
                        var_30 = (min(var_30, (((((65527 ? (25051 & var_7) : var_15)) ^ (((~((25043 >> (-4 + 8)))))))))));
                        arr_62 [i_15] [i_15] [i_15] = ((((max(((((arr_42 [17]) == var_2))), (arr_47 [i_15] [i_15 + 1] [i_14 - 1] [i_14])))) ? 40490 : (((arr_1 [i_14 + 2] [13]) ? (arr_14 [i_16] [i_16]) : -34))));
                    }
                }
            }
        }
        arr_63 [8] [i_14 - 1] = ((var_8 < (((!(arr_22 [i_14 + 1]))))));
    }
    var_31 = var_6;
    #pragma endscop
}
