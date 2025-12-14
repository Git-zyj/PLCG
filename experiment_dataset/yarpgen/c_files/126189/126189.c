/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0 + 2] = ((~(((((var_2 / (arr_1 [i_0 - 2])))) * (arr_0 [i_0 - 2])))));
                var_20 = ((+(((arr_0 [i_0 + 3]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 + 1])))));
            }
        }
    }
    var_21 |= var_15;

    for (int i_2 = 2; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_22 = ((((40 % (arr_5 [i_2 - 2]))) << ((var_12 ? (max(0, -1311851805971436957)) : (~-1295574163)))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        arr_14 [i_2] [i_3] [i_2] [i_5] [i_5] = (~1);
                        arr_15 [i_3] [i_5] = var_3;
                    }
                }
            }
        }
    }
    for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
    {
        arr_18 [i_6] [9] = (((arr_8 [i_6] [i_6 - 2]) ? (var_19 >= var_5) : ((~(var_0 | var_1)))));
        arr_19 [i_6] [i_6] = ((+(((arr_9 [i_6] [i_6 + 1]) / 255))));
    }
    for (int i_7 = 2; i_7 < 11;i_7 += 1) /* same iter space */
    {
        var_23 = ((((((arr_17 [i_7 + 2] [i_7 + 2]) ^ 2))) + (max(var_6, (-78 <= 92)))));

        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
        {
            arr_26 [i_7] [i_7] [i_8] = (((arr_21 [i_7 + 2]) ? (((-1764455393 ? (!var_12) : var_1))) : (var_6 & var_0)));
            arr_27 [i_7] &= -var_2;
        }
        for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            arr_38 [i_7] [1] [i_10] [i_11] [i_12] = var_17;
                            arr_39 [i_7 - 1] = ((((((((arr_16 [10] [1]) < (arr_35 [i_7] [i_9] [7] [5] [7]))) ? (92 % var_0) : 1))) ? ((((((-93 ? (arr_31 [i_7] [i_7] [i_7]) : 1))) ? ((var_11 & (arr_33 [i_7] [i_9] [i_7] [i_7]))) : 115))) : -299237348331496994));
                        }
                    }
                }
            }
            var_24 += (max((((((arr_11 [i_7 - 1] [i_9] [i_9]) ? var_2 : -299237348331497013)) + 57352)), ((((arr_5 [i_7 - 1]) ? (arr_5 [2]) : (arr_21 [i_7 + 2]))))));
            arr_40 [i_7] = (!var_2);
            arr_41 [i_7 - 2] = max(((((var_8 + var_2) & (!var_15)))), (((8873881787149192648 > 2707946754) % 12616395122647577480)));
        }
        for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
        {
            var_25 = ((-(max(var_8, 1797969685))));
            arr_44 [i_7 + 2] [i_7] [i_7] = (((~((99 ? 1 : 59514)))));
            var_26 = ((((max(124, (arr_43 [i_7 + 2] [i_13])))) ? (max(var_15, var_7)) : var_2));
            arr_45 [i_7] = ((((min(1754713741902836174, 2229855161))) ? ((-3753247102768340512 ? (((!(-32767 - 1)))) : ((min(124, (-32767 - 1)))))) : (max(var_12, ((var_3 ? var_17 : 1132699282))))));
        }
        var_27 = (((-2101 >= 655351501) ? ((-92 ? 1463909135 : 65)) : 62347));
        var_28 += ((((1132699292 ? var_7 : 4294967288)) <= ((2530511902 ? 98 : var_4))));
        var_29 = (min(var_29, (~1)));
    }
    #pragma endscop
}
