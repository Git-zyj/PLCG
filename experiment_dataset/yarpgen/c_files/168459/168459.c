/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_17 = (max((((((var_16 << (4396972769280 - 4396972769251)))) ? ((var_6 ^ (arr_5 [i_0] [i_1] [i_2 + 1]))) : ((max(var_9, -477686817))))), (min(var_5, (arr_4 [i_0 - 1] [i_1 - 3])))));
                    var_18 = 18446739676736782322;
                }
            }
        }
        var_19 = ((!((((((var_5 ? var_2 : var_1))) ? var_14 : (min((arr_1 [i_0 + 1]), (arr_0 [4]))))))));
        arr_9 [i_0] [i_0 - 1] = (((((((((arr_1 [i_0 + 1]) == var_11)))) ^ (min(var_13, (arr_6 [1]))))) % var_4));
    }
    for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] [i_3] = (((9223372036854775807 | 45923) % 28));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_20 = 358412293;
                                var_21 = ((var_10 && (((var_7 % (arr_0 [i_4 + 1]))))));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_22 += ((((((252 ^ 726597317) ^ (((var_0 ? (arr_17 [i_3 + 4] [i_4 + 1] [5] [i_8]) : var_4)))))) ? -103 : (((-21610 ? 115 : 15)))));
                        var_23 = ((((min(65526, (arr_22 [i_8] [i_5] [i_4] [i_4 + 2] [i_3])))) ? (((var_3 ? var_13 : 1495815183))) : ((((((arr_8 [i_8]) != (arr_0 [i_4 - 1]))) && (((var_3 ? var_5 : (arr_6 [i_3])))))))));
                    }
                }
            }
        }
    }
    for (int i_9 = 2; i_9 < 9;i_9 += 1) /* same iter space */
    {
        arr_28 [i_9 - 2] = (max((arr_27 [i_9] [i_9 + 1]), (arr_1 [i_9 - 2])));
        var_24 = var_5;

        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            var_25 = 12616;
            arr_32 [0] [i_10] [i_10] = ((((arr_11 [i_9 + 1]) ^ (arr_11 [i_9 - 2]))));
            arr_33 [i_9] = ((((((var_14 << (8673240667934938656 - 8673240667934938655))) | (arr_3 [i_10])))) ? ((((((21010 ? 0 : (arr_29 [i_9] [i_10] [i_10])))) && ((min(var_10, (arr_15 [i_9]))))))) : ((((var_0 ^ (arr_16 [9]))))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 0;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 11;i_12 += 1)
                {
                    {
                        arr_41 [0] [i_12] = (((((((var_16 << (21586 - 21529))) ^ (((-32756 ? (arr_12 [i_11]) : 1)))))) && ((((var_3 != (arr_2 [i_9 + 4])))))));
                        arr_42 [i_12] = var_1;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_13 = 2; i_13 < 11;i_13 += 1)
        {
            arr_46 [i_13] = (1 / 10812880495035214546);
            arr_47 [i_13] [i_9] = 110;

            for (int i_14 = 2; i_14 < 12;i_14 += 1)
            {
                arr_51 [i_9 + 1] [i_13 + 1] [i_14 - 1] [i_9 + 1] = (((var_3 ? var_7 : var_6)));
                arr_52 [i_9] [11] [i_9] = var_0;
            }
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                arr_56 [i_9] [i_15] = -2010405836;
                arr_57 [i_15] = ((var_1 / ((var_9 ? var_4 : 2147483647))));
                var_26 = (max(var_26, (((var_2 | ((15033 ? var_8 : var_1)))))));
            }
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                var_27 |= 0;
                var_28 = (((var_4 ^ var_11) >> (((~var_16) - 17856460236014797054))));
            }
            var_29 = ((93 ^ 110) ? 18569 : (arr_21 [i_9 - 1] [i_13 + 2] [i_13]));
            var_30 *= (var_15 == var_3);
        }
        var_31 = var_16;
        /* LoopNest 2 */
        for (int i_17 = 1; i_17 < 12;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 13;i_18 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_19 = 2; i_19 < 11;i_19 += 1)
                    {
                        for (int i_20 = 2; i_20 < 11;i_20 += 1)
                        {
                            {
                                var_32 = ((!(!0)));
                                arr_70 [i_9] [i_17] [i_18] [5] [i_20] = (15 && 241138923);
                                var_33 = var_1;
                            }
                        }
                    }
                    var_34 = (min(var_34, -var_5));
                }
            }
        }
    }
    var_35 = var_10;
    #pragma endscop
}
