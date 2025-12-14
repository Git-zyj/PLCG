/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_16 = (max(var_16, 1));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_17 = min(var_3, var_5);
            var_18 = (max(var_18, ((((((~(arr_2 [i_0] [i_1])))) ? (((arr_1 [i_1] [i_0 - 1]) / 28)) : ((-(arr_3 [i_1] [i_0 + 1]))))))));
            var_19 = (((((arr_0 [i_1]) != (((var_9 ? (arr_2 [15] [i_0]) : var_4))))) && var_15));
        }
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            var_20 = (max(var_20, (((!(((var_8 ? (1 > 14433307695560144154) : var_4))))))));
            arr_8 [i_0] = var_8;
            var_21 = (max(var_21, 65532));
        }
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 23;i_5 += 1)
                {
                    {
                        var_22 = (min(var_22, (((-((max((arr_11 [i_4 + 2] [i_3] [i_4 - 1]), var_9))))))));
                        var_23 += ((~(max(-1675653485, 24762))));
                    }
                }
            }
        }
        arr_17 [i_0] [i_0] = 14;
    }
    for (int i_6 = 2; i_6 < 17;i_6 += 1)
    {
        var_24 = (max(var_24, ((min(-17010, (arr_1 [i_6] [i_6 - 2]))))));
        var_25 -= (+((((arr_14 [i_6] [i_6 - 2] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]) == var_8))));
        var_26 -= ((!(((-(arr_19 [i_6 + 1]))))));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            var_27 = var_8;
            var_28 = (!65535);
            arr_22 [i_7] [i_7] |= var_7;
            arr_23 [i_6 - 2] [i_6 - 2] [14] = (((arr_20 [i_6] [i_6 + 1]) < 28));
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 14;i_9 += 1)
                {
                    {
                        var_29 = (max(var_29, (((((((arr_13 [i_6] [i_7] [i_8] [i_9 + 4]) - 17036))) ? ((var_5 ? 0 : var_15)) : 251)))));

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_30 = var_11;
                            var_31 = (max(var_31, (var_7 & 59)));
                        }
                        for (int i_11 = 1; i_11 < 15;i_11 += 1)
                        {
                            arr_33 [i_11] [i_7] [i_9] [i_9] [i_7] [i_7] [1] = (((arr_1 [i_9] [i_8 - 1]) - 0));
                            var_32 = (min(var_32, ((((var_15 ? (arr_2 [i_6 - 1] [i_6]) : var_9))))));
                            arr_34 [i_9] [i_11] [1] [i_11] [i_11] = ((arr_25 [i_6] [i_6] [i_8 + 1] [i_9]) & 18446744073709551609);
                            var_33 = ((-var_13 ? (arr_14 [i_11 - 1] [11] [i_8] [i_7] [i_6] [i_6]) : (((arr_16 [i_8]) ? 0 : (arr_13 [i_6 + 1] [i_11] [i_11] [i_9])))));
                        }
                    }
                }
            }
        }
        for (int i_12 = 2; i_12 < 17;i_12 += 1)
        {

            for (int i_13 = 3; i_13 < 17;i_13 += 1)
            {
                var_34 += (1 || 35400);
                var_35 = ((max(17032, 4223901650)));
            }
            var_36 |= 2205345101;
        }
    }
    for (int i_14 = 2; i_14 < 17;i_14 += 1)
    {

        for (int i_15 = 0; i_15 < 19;i_15 += 1)
        {
            arr_45 [i_14] [i_14] = ((((9223372036854775807 ? (arr_15 [i_14] [i_14 + 2] [i_14 - 1] [i_15]) : var_2))) ? ((((!(arr_40 [i_15]))))) : ((18446744073709551608 ? ((min(4223901649, 71065634))) : (arr_42 [i_14]))));
            var_37 = ((((((min(var_2, var_12))))) <= ((((((arr_14 [i_14] [i_15] [i_15] [i_14] [i_14] [i_14]) ? 8176 : var_12))) * ((9223372036854775807 >> (((arr_5 [9]) - 14255816754631452486))))))));
            var_38 *= ((-(arr_6 [i_14])));
            var_39 = (max(var_39, (arr_0 [i_15])));
        }
        var_40 = (min(var_40, ((min((min((((arr_7 [i_14] [i_14] [i_14]) ? -3515880166612831275 : 11208489438744166210)), var_5)), (arr_0 [i_14 + 2]))))));
    }
    /* LoopNest 2 */
    for (int i_16 = 1; i_16 < 13;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 14;i_17 += 1)
        {
            {
                arr_51 [i_16] [i_16 - 1] [i_16] = ((!((4223901662 || (arr_14 [i_17] [15] [i_17] [i_17] [i_16 - 1] [i_16 + 1])))));
                var_41 *= ((((((1 * 4206631383225126679) ? (((arr_3 [i_16] [i_17]) ? var_15 : var_15)) : (arr_35 [i_17])))) ? (((arr_14 [i_16 - 1] [i_16] [i_16] [i_16] [i_16] [16]) ? ((max(var_6, 4223901649))) : var_3)) : ((max(var_4, ((var_6 ? (arr_43 [i_17]) : 29425)))))));
            }
        }
    }
    #pragma endscop
}
