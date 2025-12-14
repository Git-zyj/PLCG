/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_10 = (max(var_10, ((((-32704 < (!11073)))))));
                    var_11 = (!var_2);
                    arr_6 [1] [1] [1] [i_2] = (arr_3 [i_0]);
                    var_12 = 169;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                var_13 = ((var_6 <= ((var_8 << ((((var_6 << (3817201315 - 3817201312))) - 342))))));
                var_14 = (((arr_4 [i_3] [6] [2]) ? (arr_12 [i_3] [i_4]) : (((!var_6) << (var_5 && 84)))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_22 [i_6] = var_4;
                                var_15 = var_1;
                            }
                        }
                    }
                }
                arr_23 [i_3] = (((-1806286962 != (arr_16 [i_4] [i_4] [i_4] [16] [i_3] [i_3]))));
            }
        }
    }
    var_16 = var_0;

    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        var_17 ^= (arr_2 [i_8]);
        var_18 = (--var_3);
        var_19 = -27584;
        arr_27 [1] [i_8] = max(22846, (arr_16 [i_8] [i_8] [i_8] [22] [i_8] [i_8]));
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        arr_30 [11] = (((((~((max(172, var_0)))))) ? (arr_28 [i_9]) : (((arr_2 [i_9]) ? var_8 : (arr_2 [i_9])))));
        arr_31 [i_9] = (arr_28 [i_9]);
        arr_32 [i_9] [i_9] = (min(((-((max(var_2, (arr_4 [i_9] [i_9] [i_9])))))), (min(((186 ? (arr_5 [22] [i_9]) : var_7)), (max(var_4, var_6))))));
    }
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        arr_36 [i_10] |= (arr_4 [i_10] [i_10] [i_10]);
        var_20 = ((-(((var_7 ? (arr_33 [i_10]) : 171577714)))));

        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                arr_44 [i_10] [i_10] [i_10] [i_10] = (((var_7 != 81) <= ((((arr_16 [i_10] [20] [i_11] [i_12] [i_12] [i_11]) != (arr_14 [22] [i_11] [i_10]))))));

                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    arr_47 [i_10] [i_10] [i_10] [i_10] [i_10] = (arr_24 [i_10]);
                    arr_48 [i_10] [i_11] [i_12] [i_10] = (((((max(var_4, var_1)) + ((((arr_15 [i_10] [i_11] [i_12]) != var_5)))))) ? ((((~477765996) > var_9))) : var_6);
                }
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    var_21 = (((~(!var_6))));
                    arr_52 [i_10] [i_11] [i_12] [i_14] [i_12] = (((((arr_18 [i_14] [i_12] [21] [7]) << (((arr_18 [i_11] [i_11] [i_12] [i_14]) - 244)))) + (((arr_18 [i_10] [i_11] [i_12] [i_14]) ? (arr_18 [i_10] [i_11] [i_11] [i_14]) : (arr_18 [i_10] [i_10] [i_10] [i_10])))));
                }
                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    arr_56 [i_10] = 844931089;
                    var_22 ^= (((((var_1 == (arr_9 [i_11])))) | (arr_40 [i_10] [i_11])));
                }
                for (int i_16 = 0; i_16 < 13;i_16 += 1)
                {
                    var_23 = ((!(arr_50 [i_10])));

                    for (int i_17 = 0; i_17 < 13;i_17 += 1)
                    {
                        var_24 = 45;
                        var_25 ^= (arr_1 [i_11]);
                    }
                    var_26 ^= (~6);
                }

                for (int i_18 = 0; i_18 < 13;i_18 += 1)
                {
                    var_27 = 1392465317;
                    arr_63 [i_18] [i_11] [i_11] = 3817201310;
                    var_28 = ((!((((((arr_24 [i_10]) + 2147483647)) >> (((arr_57 [i_10]) - 686631935)))))));
                }
                var_29 = (~169);
            }
            var_30 = (max(var_30, (~var_4)));
        }
    }
    #pragma endscop
}
