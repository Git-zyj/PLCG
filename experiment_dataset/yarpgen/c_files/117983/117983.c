/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_4 + ((var_3 << (var_8 != var_7)))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0 - 1] = ((((((((arr_2 [i_0 - 2]) == var_6))))) & (min((arr_2 [i_0]), (~11017173125884665003)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_14 = (arr_2 [i_1]);
            arr_7 [i_0] = (arr_2 [i_0 - 2]);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_15 = (max(var_15, (arr_13 [i_0] [i_1] [i_2 + 1])));
                            var_16 &= 111;
                            var_17 = var_3;
                        }
                    }
                }
            }
            var_18 &= (((arr_8 [i_0 - 2] [i_0 + 2]) + var_4));
        }
        var_19 = (max(var_19, var_7));
        var_20 = ((7429570947824886624 ? (arr_1 [i_0] [i_0]) : (((((arr_8 [i_0] [i_0]) >= (((arr_13 [i_0] [i_0 + 2] [6]) ? (arr_6 [i_0 + 1] [i_0 + 1] [i_0]) : (arr_11 [i_0] [i_0 - 1])))))))));
    }
    for (int i_5 = 2; i_5 < 10;i_5 += 1) /* same iter space */
    {
        var_21 = (min(var_21, (((((((1 | (arr_5 [i_5] [i_5])))) ? 3 : (arr_1 [i_5 + 1] [i_5 + 1])))))));
        var_22 = (min(var_22, var_12));
        var_23 = (max(4160749568, 32640));
        arr_17 [i_5 + 2] [i_5] = (~61440);
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 10;i_6 += 1) /* same iter space */
    {
        var_24 = (max(var_24, (arr_2 [i_6 - 1])));

        for (int i_7 = 4; i_7 < 11;i_7 += 1)
        {
            arr_24 [i_7] = (arr_22 [i_7 - 3] [i_7] [i_6 + 2]);
            var_25 = (max(var_25, (arr_13 [i_6] [i_6 - 2] [i_6])));
            var_26 *= (((var_10 ^ (arr_11 [i_6 + 1] [i_7]))));
        }
        var_27 = (arr_22 [i_6 + 2] [i_6] [i_6 + 2]);
    }

    for (int i_8 = 1; i_8 < 21;i_8 += 1)
    {
        arr_27 [i_8] [i_8] = (((arr_25 [i_8]) ? ((((arr_25 [i_8]) || (arr_25 [i_8])))) : (arr_25 [i_8])));
        arr_28 [i_8] [12] |= (((arr_25 [1]) ^ (arr_25 [4])));
    }
    for (int i_9 = 1; i_9 < 12;i_9 += 1)
    {
        arr_33 [i_9 - 1] = ((max(var_2, ((min((arr_32 [i_9] [i_9]), (arr_25 [18])))))));
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 10;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        var_28 = ((((min((arr_42 [i_11 + 1] [i_11 + 1]), (arr_26 [i_10])))) ? (arr_38 [i_10]) : ((((arr_35 [i_10] [i_10 - 1]) << (((arr_35 [i_10] [i_10]) - 25438)))))));
                        arr_43 [i_9] [i_9] [i_9 - 1] [i_10] = (arr_29 [i_9 - 1]);
                    }
                }
            }
        }
    }
    for (int i_13 = 2; i_13 < 10;i_13 += 1)
    {
        var_29 = (max(var_29, (((var_7 ? 22766 : 17422013816293147823)))));
        var_30 = (max((min(var_11, -5429290663624253234)), (var_8 / 93)));

        for (int i_14 = 1; i_14 < 10;i_14 += 1)
        {
            var_31 = (((((max(var_10, var_4))) ? (arr_34 [i_14]) : (arr_40 [i_14 - 1]))));
            arr_50 [i_13 - 1] [8] &= (max((arr_36 [6] [6] [6]), ((~((var_11 | (arr_45 [i_14 - 1])))))));
        }
    }
    var_32 = var_1;
    #pragma endscop
}
