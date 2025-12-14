/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_1] [i_1] = 179;
                    var_17 += (max((arr_1 [i_1] [i_2]), (!2616165880)));
                    arr_7 [i_0 - 1] [i_1] [i_1] [i_2] = ((246 ? (((((15 ? (arr_0 [i_2]) : (arr_4 [i_0 - 2])))) ? var_0 : (arr_1 [i_1 + 1] [i_1]))) : var_1));
                    var_18 &= ((~(max(var_5, var_12))));
                }
            }
        }
        arr_8 [i_0] = 51994;
    }
    for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_19 = ((var_10 ? (max((arr_10 [i_3 - 2]), -1)) : var_15));
            var_20 = 9;
            var_21 += (arr_5 [i_3] [i_3 - 1] [i_3] [i_4]);
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 6;i_6 += 1)
            {
                {
                    arr_22 [i_6] [i_3 + 1] = (arr_12 [i_5]);
                    var_22 = (min(var_22, ((max((((!(arr_0 [i_3 - 2])))), (arr_0 [i_3 - 2]))))));
                }
            }
        }
        arr_23 [i_3] [i_3] = ((!(arr_13 [i_3] [i_3] [i_3])));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                {
                    var_23 = ((((max((arr_25 [i_3 - 1] [i_3 - 1]), (((arr_25 [i_3 + 1] [i_3 + 1]) | (arr_27 [i_3] [i_3] [i_3] [i_3])))))) ? var_5 : ((max(var_10, (arr_1 [i_3] [i_7]))))));
                    arr_28 [i_8] = (max(var_15, (min(var_7, 2616165880))));
                    arr_29 [i_8] [i_8] [i_8] = ((-(arr_27 [i_3] [i_3] [i_3] [i_3])));
                    arr_30 [i_3] [i_3] [i_8] [i_8] = (min(var_12, ((1678801433 ? 2616165880 : 1678801418))));
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 9;i_10 += 1)
                        {
                            {
                                arr_37 [i_8] [i_7] = var_3;
                                arr_38 [i_8] = -31952;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 2; i_11 < 9;i_11 += 1) /* same iter space */
    {
        arr_43 [8] [8] |= (arr_16 [i_11 - 1] [i_11 - 2]);
        var_24 = var_0;

        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            var_25 = (max(var_25, ((((((-((2616165873 ? var_9 : (arr_2 [i_12] [i_12] [i_11])))))) ? (((arr_35 [i_11 - 2] [i_11 - 2] [i_11 - 1] [i_11 - 2]) ? (-9223372036854775807 - 1) : var_6)) : ((((var_12 | var_3) ? 1414135240 : var_6))))))));

            /* vectorizable */
            for (int i_13 = 2; i_13 < 9;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        {
                            var_26 ^= var_3;
                            arr_54 [i_13] [i_11] [i_13] [i_13] [i_13] = 0;
                            arr_55 [i_11 - 2] [i_11 - 2] [i_11] [i_11] [i_15] [i_14] [i_11 - 1] = var_10;
                        }
                    }
                }
                arr_56 [i_11] [i_11] [i_11] [i_13 + 1] = (((arr_17 [i_11] [i_13 - 1]) + var_15));
                arr_57 [i_11] [i_12] [i_11] = ((((1 ? var_11 : -31934)) >> ((var_0 ? var_13 : (arr_13 [i_11] [i_12] [i_12])))));
            }
            arr_58 [i_11] = 3927977989;
        }
        for (int i_16 = 1; i_16 < 8;i_16 += 1)
        {
            arr_61 [i_11] [i_11] = 1;
            arr_62 [i_11] [i_11] = (((((var_0 ? var_11 : var_14))) % var_16));
        }
    }

    for (int i_17 = 0; i_17 < 18;i_17 += 1)
    {
        arr_65 [i_17] = (min((arr_64 [i_17]), ((max((arr_63 [i_17] [i_17]), var_0)))));
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            for (int i_19 = 2; i_19 < 17;i_19 += 1)
            {
                {
                    var_27 += ((96 + ((((max((arr_67 [i_17]), (arr_69 [i_17] [i_17] [i_19 + 1])))) ? ((var_6 << (var_10 - 20841))) : var_7))));
                    var_28 += ((((min((arr_71 [i_17] [i_19 + 1] [i_17] [i_17]), (arr_71 [i_17] [i_19 + 1] [i_19] [i_17])))) % (arr_69 [i_17] [i_19 + 1] [i_19 + 1])));
                    arr_72 [i_18] [i_18] [i_19] [i_18] = ((~(((((1 ? 79 : 7353320217647756315))) ? (arr_68 [i_17] [i_17]) : var_8))));
                }
            }
        }
        var_29 = ((((max((arr_67 [i_17]), (arr_66 [6])))) ? (min(var_3, 2616165896)) : ((((arr_64 [i_17]) ? var_13 : (arr_64 [i_17]))))));
        arr_73 [i_17] = (((-15605 < (arr_63 [i_17] [i_17]))) ? ((((arr_69 [i_17] [i_17] [i_17]) ? ((min(var_8, 71))) : var_5))) : (((arr_64 [i_17]) ? (arr_64 [i_17]) : var_3)));
        arr_74 [i_17] = ((!((!(arr_67 [i_17])))));
    }
    #pragma endscop
}
