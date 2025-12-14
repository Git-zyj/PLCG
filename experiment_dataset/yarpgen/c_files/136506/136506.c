/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_12 - var_1);
    var_18 = var_6;
    var_19 = (min(var_15, (((var_7 ? var_9 : -11)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = ((((((arr_0 [i_0] [i_0]) ? var_6 : (arr_0 [i_0] [6])))) ? (arr_1 [i_0]) : ((((arr_0 [i_0] [i_0]) ? 7 : 3)))));
        var_21 &= (arr_1 [14]);

        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_22 = ((3 << (2406217513 - 2406217504)));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            arr_12 [i_2] [i_2] [i_4] [i_2] [i_2] [i_2] |= (arr_11 [i_0] [i_0] [i_0] [i_0] [i_2]);
                            var_23 = ((((((arr_2 [i_0]) ? var_14 : 102))) ? (arr_3 [i_0]) : ((55 / (arr_2 [i_0])))));
                        }
                    }
                }
            }
            var_24 = ((-4294967288 ? (arr_1 [i_0]) : (arr_7 [i_0] [i_0] [i_0])));
            var_25 = (((arr_1 [i_0]) ? (arr_1 [i_0]) : 15));
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_26 = (max(var_26, 6));
                            var_27 -= (((arr_5 [i_0] [i_7] [i_7]) ? (arr_5 [i_0] [i_5] [i_5]) : (arr_5 [10] [i_5] [2])));
                        }
                    }
                }
            }
            var_28 = ((-10 ? ((var_1 | (arr_3 [i_0]))) : (arr_7 [i_0] [i_0] [i_0])));
            var_29 = ((-15 | ((((arr_21 [i_5] [i_5] [i_0]) && -8)))));
            var_30 = (((arr_10 [i_5] [i_5] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_10 [i_5] [i_5] [i_5] [i_5] [i_0] [0] [15]) : (arr_10 [i_0] [1] [i_5] [i_0] [i_5] [20] [i_5])));
            var_31 = -126;
        }
        for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
        {
            var_32 -= (((arr_21 [i_9] [i_0] [i_0]) * 3));
            arr_29 [13] [13] [i_0] = (((arr_17 [i_0] [i_9] [i_9] [i_9]) < -3));
        }
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        var_33 = -7329422250554761144;

        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        {
                            var_34 = var_8;
                            var_35 = (max(var_35, (arr_20 [i_10] [i_13] [i_12] [i_13] [i_14])));
                            var_36 = (-102 ? -98 : 12);
                            arr_45 [i_12] [i_13] [i_12] [i_11] [i_12] = arr_43 [i_10];
                            var_37 -= var_3;
                        }
                    }
                }
            }
            arr_46 [i_11] [i_10] [i_10] = (243 && 0);
            var_38 = ((-(arr_5 [i_10] [i_10] [i_11])));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 12;i_15 += 1)
        {
            arr_49 [i_15] = (-var_12 ? 106 : 0);
            var_39 = ((!(arr_1 [i_15])));
        }
        for (int i_16 = 0; i_16 < 12;i_16 += 1)
        {
            var_40 = var_4;
            var_41 = (((arr_47 [i_10] [5]) ? -1 : ((((min(var_6, (arr_28 [i_16])))) ? -10 : (arr_33 [i_10])))));
            var_42 ^= (max(7, -4294967274));
        }
        var_43 = -11;
    }
    for (int i_17 = 0; i_17 < 23;i_17 += 1)
    {
        arr_56 [i_17] = (((arr_52 [i_17]) ? ((((arr_52 [i_17]) % (arr_53 [i_17])))) : -5346979837903564423));
        var_44 &= ((((((arr_53 [i_17]) ? (((arr_53 [i_17]) ? 252 : 10)) : (arr_54 [i_17])))) ? (((arr_52 [i_17]) ? 3962386574 : (((arr_52 [i_17]) - (arr_52 [i_17]))))) : 1));
    }
    #pragma endscop
}
