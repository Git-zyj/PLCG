/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_10 = (max(((((max((arr_0 [i_1] [i_0]), 0))) ? var_6 : var_9)), (arr_2 [i_0])));
            var_11 = (arr_1 [i_0]);
            arr_4 [i_0] [i_1] = var_2;
            var_12 -= (((arr_3 [i_1]) * ((((var_7 >> (((arr_0 [i_1] [i_1]) - 1652709013))))))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_13 = (((((((!(arr_8 [i_0] [i_2] [i_3]))) ? var_7 : (max(var_1, (arr_5 [8])))))) ? (8083255811532449904 != 0) : ((-(((1 || (arr_7 [i_3] [17] [i_3] [i_3]))))))));
                arr_11 [i_0] [i_0] [i_0] [i_0] = (((((+(((arr_10 [i_0]) ? (arr_6 [i_2] [i_3]) : (arr_10 [i_3])))))) ? ((~(arr_5 [i_0]))) : (~var_2)));
            }
            for (int i_4 = 4; i_4 < 23;i_4 += 1)
            {
                arr_14 [i_0] [i_0] [i_4] = ((var_3 ? ((max(var_9, ((max(var_7, (arr_6 [i_0] [i_0]))))))) : var_3));
                arr_15 [i_4] [i_2] [i_2] = (max((max((((arr_8 [i_0] [i_2] [15]) * 8083255811532449875)), (max((arr_6 [i_0] [i_2]), (arr_1 [i_0]))))), (((((((arr_7 [i_4] [i_4] [i_4] [i_4]) + 8083255811532449885))) ? (max(2147483644, (arr_13 [i_4]))) : var_6)))));
            }

            for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
            {
                var_14 = ((18446744073709551615 ? 65523 : (arr_2 [i_0])));
                var_15 += 4294967295;
                var_16 = ((((((arr_6 [i_2] [i_5]) ? var_7 : var_1))) ? ((-356813194950152591 ? 4294967284 : -2383143731191911008)) : (((-3537 ? 0 : 91)))));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
            {
                arr_22 [i_0] [i_2] [i_2] [i_6] = (var_4 ? (arr_13 [i_6]) : var_9);
                var_17 *= (!var_5);
                var_18 -= arr_18 [i_0] [i_2];
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
            {
                var_19 += var_1;
                arr_25 [i_0] [i_0] &= (arr_12 [i_7]);
                arr_26 [i_7] = (((arr_17 [i_0] [i_0]) ? (arr_16 [i_0] [i_2] [i_7] [i_7]) : (arr_16 [i_0] [i_0] [i_7] [i_7])));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 23;i_9 += 1)
                    {
                        {
                            arr_33 [i_7] [i_7] [i_9] [i_9] = (((arr_0 [i_0] [1]) ? (arr_2 [i_9]) : (arr_21 [i_0] [i_7] [i_8])));
                            var_20 = (max(var_20, ((1299514670 ? ((8083255811532449908 ? var_1 : 13)) : -19))));
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
        {
            arr_36 [i_0] = (max((arr_0 [i_0] [i_0]), (-var_8 != var_1)));
            var_21 = (arr_2 [i_0]);
            var_22 = (max(var_22, (((((((arr_9 [i_0] [i_10] [i_10] [i_0]) ^ (arr_1 [i_0])))) ? (arr_5 [i_0]) : (arr_6 [i_10] [i_10]))))));
            var_23 = (max(var_23, (((((((((arr_21 [i_0] [i_10] [i_10]) + var_0)) >> (((arr_24 [i_0]) - 13949))))) ? (max((arr_2 [i_0]), (arr_16 [i_0] [i_0] [i_0] [i_0]))) : var_7)))));
        }
        var_24 = ((16425846523534876204 ? ((-(1299514676 / var_5))) : ((((arr_27 [i_0] [i_0] [i_0] [i_0]) + (!var_1))))));
    }
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        var_25 = (min(var_25, (((-(10363488262177101695 / 7))))));
        var_26 = var_6;
        var_27 = (max(var_27, (((~(arr_21 [i_11] [i_11] [i_11]))))));
        var_28 = (!14336);
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 21;i_13 += 1)
            {
                {
                    arr_46 [i_11] [i_11] [i_13] [i_11] = var_4;
                    arr_47 [6] [6] |= 1;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 14;i_14 += 1)
    {
        var_29 = (min(var_29, (((65 == (arr_23 [i_14]))))));
        var_30 *= 19;
        arr_50 [i_14] [9] &= (((arr_9 [i_14] [i_14] [i_14] [i_14]) ? (arr_24 [i_14]) : var_3));
        arr_51 [i_14] [i_14] = ((var_6 ? (arr_19 [i_14] [i_14] [i_14]) : var_2));
    }
    var_31 = var_1;
    var_32 = (max(var_5, (((((max(var_2, var_7))) <= ((var_5 ? -13637 : var_9)))))));
    var_33 = (max(((87 ? (((var_6 ? var_5 : 9223372036854775780))) : -var_4)), -var_2));
    #pragma endscop
}
