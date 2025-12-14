/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_18 = (((arr_0 [i_0 - 1] [i_0 + 4]) % (arr_1 [i_0 - 1])));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_19 = (~-23349);

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                var_20 *= (!(arr_2 [i_0 - 1]));
                var_21 = ((-1467147403 <= (!47825)));
            }

            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                var_22 = (min(var_22, var_3));
                var_23 = (((((var_10 ? 1897031106 : 1467147403))) ? (arr_6 [i_3] [i_1] [1]) : (((var_6 <= (arr_0 [i_0] [i_0]))))));
            }
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_24 = (arr_1 [i_0 - 1]);
                var_25 = ((!(((var_0 >> (1467147425 - 1467147411))))));
                var_26 = (((arr_3 [i_0 - 1]) ? (arr_12 [i_0 + 1] [1] [i_4] [i_0 + 4]) : (((arr_12 [i_0 + 4] [i_1] [i_1] [i_0 + 4]) >> (((arr_11 [i_0 + 4] [i_1] [i_4]) + 29744))))));
            }
        }
        for (int i_5 = 4; i_5 < 14;i_5 += 1)
        {
            arr_17 [i_5 - 2] [i_0 + 4] = ((~(arr_13 [i_0 + 3] [i_5] [i_0 + 4] [i_5])));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        {
                            arr_25 [i_8] [i_7 - 3] [i_6] [i_5 + 2] [i_8] [i_8] = (((arr_11 [i_0 + 1] [i_8] [i_6]) ? (arr_11 [i_0 + 1] [i_8] [i_0 + 2]) : (arr_11 [i_0 + 3] [i_8] [i_0 + 2])));
                            arr_26 [i_0 + 3] [i_8] [i_6] [i_7] [i_8 + 1] = (((var_2 % (-32767 - 1))));
                            var_27 = (arr_6 [i_0] [i_8] [i_8 - 1]);
                            var_28 = (max(var_28, var_3));
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            arr_30 [i_0 - 1] [i_9] [i_9] = ((((arr_15 [i_0]) ? -32766 : 1)));
            arr_31 [i_0] [i_0 + 3] = var_8;
        }
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 16;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 16;i_12 += 1)
                {
                    {
                        var_29 *= ((~(arr_28 [1] [i_11 - 1] [i_12])));
                        arr_40 [i_0] [i_0 + 3] [i_11] [i_0 + 4] = (arr_0 [i_0 + 4] [i_11 + 1]);
                    }
                }
            }
            var_30 = ((var_3 == (arr_37 [12])));
            var_31 = (~(arr_18 [i_0 + 1] [i_0 + 2] [i_10] [i_10]));
            arr_41 [i_10] = ((-(arr_5 [i_0 + 2] [i_0 + 4] [i_0 + 1] [i_0])));
        }
        var_32 = (((var_15 * 13) ? var_2 : (arr_39 [14])));
    }
    for (int i_13 = 4; i_13 < 22;i_13 += 1)
    {
        arr_45 [i_13 + 2] [i_13 - 3] = (max((((((arr_42 [i_13 - 3]) ? (arr_43 [i_13 - 4] [i_13]) : var_16)) - (((7 - (arr_43 [i_13 - 1] [23])))))), (((var_6 / (((arr_43 [i_13] [i_13]) << (-1467147404 + 1467147404))))))));
        arr_46 [i_13] &= ((-(((arr_42 [i_13 - 4]) * (arr_42 [i_13 - 4])))));
        /* LoopNest 2 */
        for (int i_14 = 2; i_14 < 22;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                {
                    var_33 ^= ((((max(((var_13 ? 72 : (arr_51 [i_13 - 1] [i_14] [i_14]))), ((max((arr_42 [i_13 + 2]), -123)))))) * (min((((!(arr_48 [i_13])))), ((1 ? 7958268574881019163 : (arr_50 [i_13 - 3])))))));
                    var_34 = min(((!(((var_2 ? var_15 : (arr_51 [i_13] [i_14] [i_14])))))), (((-1467147404 < (arr_49 [i_13 + 2] [i_14] [i_15])))));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 24;i_17 += 1)
                        {
                            {
                                var_35 = 32256;
                                var_36 = (max(var_36, (((var_2 ? (min((max((arr_44 [i_14] [i_14]), (arr_50 [18]))), (arr_44 [i_13] [i_13 - 2]))) : (arr_44 [i_13] [i_13]))))));
                                arr_58 [i_13 + 1] [i_14] [i_15] [i_16] [i_17] [i_14] = ((~((((max(var_16, (-32767 - 1)))) ? (max(var_0, (arr_44 [i_17] [i_13 - 1]))) : ((((!(arr_49 [20] [20] [23])))))))));
                            }
                        }
                    }
                    arr_59 [i_13] [i_13] = var_5;
                }
            }
        }
    }
    var_37 = ((~(var_12 != var_9)));
    #pragma endscop
}
