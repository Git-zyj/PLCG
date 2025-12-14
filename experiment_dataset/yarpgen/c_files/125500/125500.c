/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((~(arr_1 [i_0])))) ? (min((arr_0 [i_0]), var_13)) : (((arr_0 [i_0]) / var_11)));
        var_19 -= (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((arr_4 [i_1] [i_1]) || (~var_10));
        var_20 = ((!((!(arr_3 [i_1])))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_21 = (arr_4 [i_2] [i_2]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    {

                        for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_4] [i_4] [i_4] = ((((((arr_13 [i_3] [i_3]) ? var_3 : var_1))) ? var_7 : (((arr_11 [i_2] [i_2] [i_2]) ? (arr_18 [i_6] [i_5] [i_4] [i_4] [i_2] [i_2]) : 94))));
                            var_22 = (((arr_18 [i_3] [i_3] [i_4] [i_3] [i_3] [i_4 + 1]) ? (arr_14 [i_3] [i_3] [i_3] [i_3]) : (arr_14 [i_4] [i_4] [i_4] [i_4 - 1])));
                        }
                        for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            var_23 = (min(var_23, var_15));
                            var_24 = ((arr_16 [i_7] [i_7 + 2] [i_7 - 1] [i_4] [i_7 - 1]) ? (arr_16 [i_7] [i_7 - 1] [i_7 + 2] [i_4] [i_7 - 1]) : (arr_16 [i_7] [i_7 + 1] [i_7 + 2] [i_4] [i_7]));
                        }
                        var_25 = ((var_11 ? 18351695540818834058 : (arr_20 [i_3] [i_3] [i_4] [i_4 + 3] [i_4 + 1])));
                        var_26 = var_9;
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {

        /* vectorizable */
        for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
        {
            arr_28 [i_9] = 3033564694;
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_27 = var_5;
                            var_28 = (min(var_28, (arr_0 [i_12 - 1])));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                for (int i_14 = 4; i_14 < 7;i_14 += 1)
                {
                    {
                        var_29 = (((arr_25 [i_14 - 1] [i_14 + 3] [i_14 - 3]) ? (arr_35 [i_8] [i_8] [i_8]) : (arr_0 [i_8])));
                        arr_43 [i_8] [i_13] [i_8] = ((48274 >= (arr_20 [i_14] [i_13] [i_9] [i_8] [i_8])));
                        var_30 += var_16;
                        var_31 = 24;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
        {

            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                var_32 = (var_16 > (arr_21 [i_8] [i_15] [i_16] [i_15] [i_16]));
                var_33 = 65512;
            }

            for (int i_17 = 0; i_17 < 11;i_17 += 1)
            {
                var_34 = ((3033564694 ? (var_10 * var_14) : (arr_16 [i_8] [i_15] [i_17] [12] [12])));
                var_35 = (max(var_35, ((((arr_42 [i_8] [i_8] [i_8] [i_8] [i_8]) ? var_16 : -9917)))));
                var_36 = ((((((arr_12 [12] [i_15] [12]) + var_11))) ? ((65529 ? (arr_29 [i_15] [i_8]) : (arr_8 [i_17]))) : (arr_16 [i_8] [14] [i_15] [14] [i_8])));
                var_37 = (max(var_37, ((((arr_29 [i_17] [i_8]) ^ -var_10)))));
            }
            for (int i_18 = 0; i_18 < 11;i_18 += 1) /* same iter space */
            {

                for (int i_19 = 0; i_19 < 11;i_19 += 1)
                {
                    arr_57 [i_8] = (arr_7 [i_8]);
                    arr_58 [i_8] [i_15] [i_8] = ((~((10531961218745135290 ? (arr_45 [i_18] [i_15]) : (arr_4 [i_15] [i_8])))));
                }
                var_38 = 4003547484;
            }
            for (int i_20 = 0; i_20 < 11;i_20 += 1) /* same iter space */
            {
                var_39 = (min(var_39, var_17));
                var_40 += var_2;
                arr_63 [i_8] = (((arr_51 [i_20]) ? (arr_51 [i_8]) : (arr_51 [i_20])));
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 11;i_22 += 1)
                    {
                        {
                            arr_70 [i_8] [i_15] [i_8] [i_21] [i_22] &= (arr_25 [i_8] [i_8] [i_15]);
                            var_41 = (arr_40 [i_8] [i_15] [i_15] [i_8]);
                        }
                    }
                }
            }
        }
        var_42 = (+((((((arr_35 [i_8] [i_8] [i_8]) ? (arr_21 [i_8] [i_8] [i_8] [i_8] [i_8]) : (arr_35 [i_8] [i_8] [i_8])))) ? (arr_31 [i_8] [i_8] [i_8] [i_8]) : var_0)));
        var_43 = 854493133;
    }
    var_44 = (min(var_44, 7914782854964416339));
    var_45 ^= var_13;
    #pragma endscop
}
