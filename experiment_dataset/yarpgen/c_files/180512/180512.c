/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_11 = var_4;
        var_12 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_5 [i_1] = (((arr_4 [i_1] [i_1]) ? ((max(94, 3600670303))) : (((arr_3 [i_1]) | var_4))));
        var_13 &= ((((arr_3 [i_1]) ? (max(var_6, 161)) : var_4)));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                var_14 += ((((arr_13 [7] [i_3] [i_3]) | -var_7)));
                var_15 = (arr_2 [4] [1]);
                var_16 = (max((((arr_4 [i_3 - 1] [8]) ? (arr_9 [i_2] [i_3 + 1] [i_4 - 1]) : (max(var_10, 1661712690)))), ((((((var_2 ? var_6 : (arr_7 [i_2] [i_4])))) || (arr_12 [i_4 - 1] [i_4 + 3] [i_4 + 2]))))));
                arr_15 [i_2] [0] = 116;
            }
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                var_17 *= (max(-9223372036854775805, (arr_2 [i_5] [i_5])));
                /* LoopNest 2 */
                for (int i_6 = 4; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_18 = arr_13 [i_3] [i_5] [2];
                            var_19 = (max(var_19, ((((arr_1 [i_5]) ? -69 : 95)))));
                            var_20 = (max(((-(arr_21 [i_2] [1]))), 1));
                        }
                    }
                }
            }
            var_21 = (max(((-var_2 + ((var_9 ? var_3 : 17511004247495177825)))), ((((var_4 / 187) ? var_6 : var_8)))));
            var_22 = (max(221, (((!(arr_1 [4]))))));
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            arr_29 [8] [8] = ((((((arr_27 [i_8] [i_2] [i_2]) - (arr_27 [i_8] [i_8] [i_2])))) ? ((max(var_0, 0))) : var_9));
            arr_30 [i_2] [0] = ((~((var_7 ? var_4 : (max(65535, 4294967283))))));
            arr_31 [6] [0] [0] = ((94 == (((var_7 * var_7) ? (arr_21 [i_2] [i_8]) : -var_4))));
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {

            for (int i_10 = 3; i_10 < 13;i_10 += 1) /* same iter space */
            {
                var_23 ^= ((2607600425 ? 161 : 69));
                arr_36 [6] [i_10] = ((((((arr_1 [i_10]) ? (arr_1 [i_10]) : var_9))) ? -var_6 : (((((arr_1 [i_10]) > (arr_1 [i_10])))))));
            }
            /* vectorizable */
            for (int i_11 = 3; i_11 < 13;i_11 += 1) /* same iter space */
            {
                arr_39 [i_2] [14] [14] = ((111 | (arr_12 [i_11 + 2] [i_11 + 2] [i_11 - 3])));
                var_24 &= (var_10 + var_8);
            }
            arr_40 [i_9] [1] [7] |= ((~(((((var_5 ? var_6 : var_3))) ? (arr_14 [i_2]) : (max(935739826214373803, 1518500810))))));
        }
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            arr_44 [i_2] = (max((var_1 | var_6), ((var_9 ? ((var_3 + (arr_19 [i_2] [i_2] [i_2] [i_12] [1] [i_12]))) : 4095))));

            /* vectorizable */
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                arr_49 [i_13] [i_13] [i_12] [10] |= (arr_47 [i_2] [7] [i_12] [i_12]);
                var_25 = (max(var_25, var_7));
                var_26 = (max(var_26, ((((arr_43 [i_13] [i_2]) ? 7 : ((var_10 ? 65472 : 17511004247495177825)))))));
                var_27 = (arr_42 [i_2] [i_2] [i_13]);
            }
            var_28 = (max(var_28, ((((arr_8 [i_2] [i_12]) ? (~var_6) : var_10)))));
            arr_50 [13] [12] |= (max(var_8, var_1));
        }
        var_29 = (max(var_29, ((((arr_25 [i_2]) ^ (arr_11 [i_2] [7]))))));
        var_30 = (min(var_30, (arr_42 [12] [i_2] [i_2])));
        arr_51 [i_2] [8] |= (max((max((((var_2 ? (arr_12 [1] [3] [12]) : var_7))), -15)), ((((arr_12 [i_2] [5] [i_2]) && var_8)))));
    }
    var_31 &= ((61 ? -var_2 : var_3));
    var_32 = (((((((var_7 / var_3) <= ((var_10 ? var_4 : var_3)))))) != ((var_5 ? var_8 : (var_5 - var_2)))));
    var_33 = var_2;
    #pragma endscop
}
