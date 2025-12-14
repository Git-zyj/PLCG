/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((~((var_14 % ((-1440368630 ? var_12 : 6057))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [5] = (~var_7);
        var_18 = (min(var_18, -111));
        arr_3 [i_0] = (((((arr_1 [i_0]) ? (((max((arr_1 [i_0]), 4)))) : var_1)) * (((max(106, (arr_1 [i_0])))))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_19 = var_0;
            arr_6 [i_0] [i_1] = (3015366428 - 127);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_20 = ((((max(-1440368625, -89))) <= ((1 ? (((arr_8 [i_0] [i_2] [i_2]) ? var_5 : (-127 - 1))) : (arr_12 [i_3] [i_2] [i_0] [i_2] [i_0])))));
                        var_21 -= var_2;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_17 [i_0] [i_4] [i_4] = var_15;
            arr_18 [i_0] [i_0] [i_4] = (((1644376194 && var_3) ? ((8160 ? var_1 : (arr_14 [7] [6]))) : -106));
            var_22 += (arr_11 [i_0] [i_4]);
            var_23 -= (arr_0 [i_0]);

            for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
            {
                var_24 ^= ((((var_8 && (arr_11 [i_4] [i_0]))) && (((var_8 ? (arr_16 [i_0] [i_4] [6]) : var_5)))));
                arr_21 [i_5] [i_5] [i_5] [i_5] = (arr_13 [i_0] [i_0] [i_5]);
            }
            for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
            {
                arr_25 [i_0] [1] [i_6] = (((125 != var_5) <= (((-127 - 1) ? 29 : 0))));
                arr_26 [i_0] [i_0] = ((((((171 || (arr_0 [i_0]))))) | (var_16 | var_5)));

                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    var_25 = (max(var_25, ((((((1 ? var_11 : (arr_7 [i_6] [i_0] [i_0])))) ? ((var_3 / (arr_1 [8]))) : (arr_15 [i_0] [i_4] [8]))))));
                    var_26 = (max(var_26, var_13));
                    var_27 = (max(var_27, (((!(var_9 < var_9))))));
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    arr_31 [i_8] [i_6] [i_6] [i_6] [i_4] [i_0] = 26801;

                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_28 = (max(var_28, ((((arr_29 [i_8] [i_6] [i_4]) == 383088090)))));
                        var_29 = (arr_28 [i_8] [i_6] [i_4] [i_0]);
                        var_30 *= var_7;
                        arr_35 [i_9] = (((((var_8 ? (arr_22 [i_0] [9] [i_6] [5]) : var_14))) ? 127 : (((arr_20 [i_0] [i_9] [i_0]) / (arr_15 [i_0] [i_0] [i_9])))));
                    }

                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        var_31 = ((arr_28 [4] [4] [i_6] [i_6]) > 154);
                        var_32 = (((((var_9 ? -555823692 : var_9))) < (arr_5 [i_6])));
                        var_33 = (min(var_33, 63892));
                        var_34 &= (arr_23 [i_0] [i_0] [8]);
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_41 [i_0] [0] [i_0] [i_0] [i_11] [5] [i_6] = (((arr_12 [i_0] [i_11] [i_6] [i_8] [i_11]) | (arr_12 [i_0] [i_11] [i_0] [i_8] [i_11])));
                        var_35 = (((-9223372036854775807 - 1) <= (arr_37 [i_0] [i_11] [1] [i_0] [i_0])));
                        arr_42 [i_11] [i_4] [i_6] [i_6] [11] [i_11] = (((((19986 ? -2965 : 173))) ? ((383088090 + (arr_33 [i_4] [i_4] [i_4] [i_0]))) : 63886));
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
    {
        arr_45 [i_12] = (max(var_0, ((1644376194 ? ((max((arr_38 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]), -50))) : ((3 ? 63892 : 1650))))));
        var_36 &= ((12517520940156009722 ? ((15253 ? 9223372036854775796 : 111)) : ((((arr_15 [i_12] [6] [i_12]) ? (var_11 && var_11) : 890936919)))));
    }
    for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
    {
        var_37 -= (((-9223372036854775807 - 1) / ((5929223133553541896 ? (arr_47 [i_13] [i_13]) : (arr_14 [i_13] [i_13])))));
        var_38 = ((~((((max((arr_30 [i_13] [i_13] [3] [i_13]), 3))) ? (arr_28 [i_13] [i_13] [i_13] [i_13]) : (arr_23 [i_13] [i_13] [2])))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
    {
        var_39 = (((arr_16 [i_14] [5] [i_14]) | (((arr_10 [i_14] [i_14] [i_14] [i_14]) | (arr_49 [i_14])))));
        var_40 = (min(var_40, (((!(((63918 ? -890936919 : var_4))))))));
    }
    #pragma endscop
}
