/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((((min(((18446744073709551615 ? 255 : var_6)), var_12))) ? var_5 : var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = ((((((((var_9 ? var_6 : (arr_4 [i_1])))) ? var_3 : ((-(arr_5 [i_1] [i_0 - 2])))))) ? ((var_3 ? (arr_4 [i_0 + 1]) : var_2)) : var_10));
                var_15 = ((((((arr_3 [i_0 - 2] [i_1 + 2]) ? var_6 : 251))) ? 255 : ((127 ? ((max((arr_2 [i_1 + 3]), 128))) : 251))));
                arr_6 [i_0 + 3] = (arr_2 [i_0 + 3]);
            }
        }
    }
    var_16 &= (max((max((max(var_2, var_8)), var_0)), var_7));
    var_17 = ((var_8 < (((max(var_4, var_8))))));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            arr_12 [i_2] [i_3] = ((var_2 || (arr_7 [i_2] [i_2])));

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                arr_15 [i_2] = (arr_7 [i_2] [i_2]);
                arr_16 [i_4] [i_2] [i_2] = (((arr_14 [i_2]) ? ((((var_11 && (arr_13 [i_2] [i_4]))))) : ((-1146754810615867917 ? 1 : 982980056))));
                var_18 = var_3;
            }
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                arr_20 [i_2] [i_3] = ((var_12 ? (((240 + (arr_7 [i_2] [i_5])))) : (arr_11 [i_2] [i_3])));
                var_19 = (((((-(arr_7 [i_2] [i_3])))) ? ((var_8 ? (arr_13 [i_2] [i_3]) : var_7)) : var_10));
                var_20 = var_6;

                for (int i_6 = 2; i_6 < 18;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        arr_26 [i_2] [i_2] [i_5] [i_6] [i_7] = (((arr_14 [i_2]) % (((arr_19 [i_2] [i_2] [i_5]) ? var_4 : (arr_8 [i_3] [i_3])))));
                        var_21 = (arr_9 [i_5]);
                    }
                    for (int i_8 = 2; i_8 < 17;i_8 += 1) /* same iter space */
                    {
                        var_22 = (((arr_10 [i_2] [i_2] [i_2]) && (((var_7 & (arr_8 [i_5] [i_5]))))));
                        var_23 = (((arr_22 [i_2] [i_2] [i_2] [i_2] [i_2]) | (((arr_27 [i_2] [i_2] [i_2] [i_2] [i_2]) ? var_6 : (arr_18 [i_2] [i_3] [i_5] [i_6 + 1])))));
                    }
                    for (int i_9 = 2; i_9 < 17;i_9 += 1) /* same iter space */
                    {
                        var_24 = (arr_9 [i_9]);
                        arr_32 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (arr_30 [i_2] [i_3]);
                    }

                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_25 = var_0;
                        var_26 = ((((arr_21 [i_10] [i_6 - 1] [i_5] [i_2]) ? (arr_9 [i_3]) : var_11)));
                        var_27 = var_11;
                        var_28 *= (arr_7 [i_3] [i_5]);
                    }
                    var_29 = ((!((((arr_10 [i_3] [i_2] [i_5]) ? var_6 : (arr_10 [i_2] [i_2] [i_6 + 2]))))));
                    var_30 = (((229 * var_3) ? var_9 : (arr_9 [i_6])));
                }
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {

                    for (int i_12 = 1; i_12 < 18;i_12 += 1)
                    {
                        var_31 = (((((var_7 ? (arr_8 [i_2] [i_5]) : (-127 - 1)))) ? (arr_28 [i_2] [i_3] [i_5] [i_2] [i_11] [i_12]) : (arr_29 [i_12] [i_12] [i_12 - 1] [i_12 - 1] [i_12])));
                        var_32 = var_1;
                        arr_41 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((((var_4 == (arr_39 [i_2] [i_3] [i_5] [i_11]))) ? var_4 : ((var_7 ? (arr_30 [i_2] [i_5]) : -1))));
                    }
                    arr_42 [i_2] [i_3] [i_2] [i_11] [i_2] [i_5] = (((arr_11 [i_2] [i_2]) >> (var_1 - 1267319691)));
                }
            }
            for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
            {
                var_33 = (arr_30 [i_3] [i_13]);
                arr_45 [i_2] [i_2] [i_13] = (arr_40 [i_2] [i_3] [i_2] [i_2]);
            }
            for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
            {
                var_34 -= (arr_22 [i_2] [i_3] [i_14] [i_14] [i_2]);
                arr_48 [i_2] = (arr_44 [i_2] [i_3] [i_14] [i_14]);
            }
            var_35 = var_8;
            var_36 = (max(var_36, ((((arr_28 [i_2] [i_2] [i_3] [2] [i_3] [i_3]) ? (arr_28 [i_2] [i_2] [i_2] [6] [i_3] [i_2]) : (arr_28 [i_3] [i_3] [i_3] [1] [i_3] [i_3]))))));
        }

        for (int i_15 = 0; i_15 < 20;i_15 += 1)
        {
            arr_52 [i_2] = ((((((arr_7 [i_2] [i_2]) ? var_5 : (arr_37 [i_2] [i_15] [i_2] [i_15] [i_2] [i_15])))) ? (arr_7 [i_2] [i_2]) : ((~(arr_9 [i_15])))));
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 20;i_17 += 1)
                {
                    {
                        var_37 = (arr_23 [i_2] [i_2] [i_2]);
                        var_38 = var_7;
                    }
                }
            }
            arr_61 [i_2] [12] [i_15] |= var_8;
        }
        for (int i_18 = 0; i_18 < 20;i_18 += 1)
        {
            var_39 = ((~(arr_34 [i_2] [i_2] [i_2])));
            var_40 = (min(var_40, (arr_36 [i_2])));
            arr_64 [i_2] [i_2] = ((var_0 ^ (((var_2 >= (arr_55 [i_2] [i_2] [i_2]))))));
            arr_65 [i_2] = (arr_59 [i_2] [i_2] [i_18] [i_18] [i_18] [i_2]);
        }
        var_41 = var_7;
        arr_66 [i_2] = (arr_56 [i_2] [i_2] [i_2] [i_2]);
    }
    #pragma endscop
}
