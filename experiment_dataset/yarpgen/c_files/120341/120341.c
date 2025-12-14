/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = var_13;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_18 = 7;
            var_19 = (arr_3 [i_1] [i_0]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        var_20 = 35;
                        arr_12 [i_0] [i_1] [i_3] [i_3] = (max(0, (arr_9 [i_0] [i_1])));
                        arr_13 [i_0] [i_0] [i_3] [i_0] = (max(((-51 ? (arr_10 [i_1] [i_3] [i_3] [i_3 + 1] [i_3] [i_3]) : 18446744073709551603)), 7700078639449911641));
                    }
                }
            }
        }
        var_21 ^= (arr_5 [i_0] [i_0] [i_0] [i_0]);
    }
    var_22 = (max(var_17, ((var_7 ? (min(7342947499266322613, 65529)) : var_6))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    var_23 = -124;
                    arr_22 [i_4] [i_4] [i_5] [i_6] = (((((arr_21 [i_4] [i_5] [i_6]) & var_6)) ^ (arr_20 [i_4] [i_5])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            {
                var_24 = ((+((var_5 << (((((arr_23 [i_8]) ? var_7 : (arr_27 [i_7]))) - 6687519336448916433))))));
                var_25 *= var_12;

                /* vectorizable */
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    arr_31 [i_8] = (!var_11);
                    var_26 = 295530270;
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                arr_37 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((2559081334 / ((11166130215338873044 / (arr_36 [i_7] [i_9] [i_9] [i_10] [i_11] [i_9])))));
                                arr_38 [i_11] [i_8] [i_8] [i_7] = (((arr_30 [i_7] [i_8] [i_9]) ? (arr_30 [i_8] [i_10 + 1] [i_11]) : (arr_26 [i_10] [i_10])));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_12 = 4; i_12 < 8;i_12 += 1)
    {
        var_27 = (max(((~(max(var_12, 65535)))), (((arr_26 [i_12] [i_12]) - (min(var_9, 4746752238000317810))))));
        /* LoopNest 3 */
        for (int i_13 = 3; i_13 < 10;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 8;i_15 += 1)
                {
                    {
                        var_28 = -2809099701093014225;

                        for (int i_16 = 0; i_16 < 11;i_16 += 1)
                        {
                            arr_50 [i_15] [i_13] [i_14] [i_15] = (arr_0 [i_13]);
                            var_29 |= ((~((-(arr_10 [i_15] [i_12] [i_13] [i_13 - 3] [i_12] [i_12 - 2])))));
                        }
                        for (int i_17 = 0; i_17 < 11;i_17 += 1)
                        {
                            var_30 = 45882;
                            var_31 = (((arr_16 [i_15 + 1] [i_15 + 3]) ? (min((arr_16 [i_15 + 1] [i_15 + 1]), 1735885962)) : ((max((arr_16 [i_15 + 2] [i_15 + 3]), (arr_16 [i_15 - 1] [i_15 + 2]))))));
                        }
                        var_32 ^= 1;
                    }
                }
            }
        }
        arr_54 [i_12] = (arr_47 [i_12] [i_12] [i_12] [i_12]);
        var_33 -= 1;
    }
    for (int i_18 = 0; i_18 < 18;i_18 += 1)
    {
        var_34 *= (max(((-(arr_30 [i_18] [i_18] [i_18]))), -61));
        var_35 = (((((min(1, (arr_15 [i_18])))) ? (arr_55 [i_18] [i_18]) : (~var_2))));
    }
    for (int i_19 = 0; i_19 < 1;i_19 += 1)
    {
        /* LoopNest 3 */
        for (int i_20 = 0; i_20 < 25;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 25;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 25;i_22 += 1)
                {
                    {
                        var_36 = (min(((var_4 ? (arr_69 [i_19] [i_20] [i_19] [i_22] [i_19]) : 8534699618399464921)), (((~(~3511187731))))));
                        arr_71 [i_19] = var_12;
                        arr_72 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] = (((((((arr_68 [i_22]) < (arr_65 [i_20]))))) <= (max(((max(6999, var_16))), (min((arr_59 [i_19]), (arr_68 [i_19])))))));
                        var_37 = (((((arr_65 [i_19]) && (arr_65 [i_20]))) ? (max(2980754836359334187, 2809099701093014204)) : ((((!(arr_65 [i_19])))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_23 = 0; i_23 < 25;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 25;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 25;i_25 += 1)
                {
                    {
                        var_38 = ((+(((arr_76 [i_25] [i_24] [i_23] [i_19]) ? (arr_76 [i_19] [i_23] [i_25] [i_25]) : (arr_66 [i_19] [i_23] [i_24] [i_25])))));
                        var_39 += -7000;
                        var_40 ^= (!127);
                    }
                }
            }
        }
    }
    #pragma endscop
}
