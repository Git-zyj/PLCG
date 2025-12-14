/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = (min((min((max((arr_0 [i_0 + 1]), (arr_2 [6]))), ((min(var_4, var_1))))), (arr_2 [5])));

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_20 = (((-var_9 + 2147483647) << ((((arr_9 [i_0 - 1] [i_2]) >= ((min(var_9, var_0))))))));
                        var_21 &= (((((~(arr_5 [i_3])))) ? var_10 : ((max(-var_1, var_12)))));
                        var_22 = var_13;

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_23 -= ((var_10 ? (max(0, var_10)) : ((min((arr_13 [i_3] [i_3] [2] [i_1] [10] [i_3]), 3145503359)))));
                            var_24 = var_1;
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_25 = (((((~((var_7 ? var_12 : var_8))))) ? ((((var_1 ? var_12 : var_14)) - (!var_16))) : (min((arr_7 [i_0 + 1] [i_2] [i_2]), ((var_17 ? 1 : (arr_8 [i_2])))))));
                            arr_17 [9] [i_1] [5] [i_2] [i_1] = -var_18;
                        }
                    }
                }
            }
            arr_18 [0] [6] [0] = (~((max((min(var_11, var_0)), (arr_8 [10])))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_26 = (max(var_26, ((((arr_20 [i_0 - 1] [i_0 - 1] [i_0 - 1]) < (arr_11 [i_0] [i_6] [1] [i_0 - 1]))))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 10;i_8 += 1)
                {
                    {
                        var_27 = var_4;
                        arr_29 [i_6] = (arr_10 [i_6] [2] [i_0 - 1] [i_8 + 2] [i_8 + 1]);
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_28 = (((((-(((arr_11 [i_0] [i_9] [i_0] [i_9]) ? var_5 : var_16))))) ? var_8 : ((((min(var_11, var_16)))))));
            arr_32 [i_9] [i_9] = ((~((((min(var_10, var_0))) - (max(var_8, 1))))));
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    {
                        arr_37 [i_0] [i_9] [i_10] [i_11] [i_11] = ((1 ? 786666293 : (~var_0)));
                        var_29 -= (min((arr_13 [8] [8] [i_10] [i_11] [i_11] [10]), (arr_11 [i_0] [10] [i_10] [i_11])));
                        var_30 &= min((arr_35 [2] [6] [i_10] [i_10]), ((max((((~(arr_27 [i_11] [i_10] [8] [6])))), (arr_13 [i_9] [2] [i_9] [i_9] [i_0 - 1] [4])))));
                    }
                }
            }
        }
        for (int i_12 = 1; i_12 < 11;i_12 += 1)
        {
            var_31 = (min(((((max(var_4, var_11))) ? var_0 : (20815 | var_6))), ((var_12 ? var_18 : (arr_1 [i_12 - 1] [i_12 - 1])))));
            arr_41 [i_12] [i_0] = (max((arr_8 [8]), (((var_17 + 2147483647) >> (4181372201675943494 - 28219)))));
            var_32 += ((~(((!(arr_24 [i_0 - 1] [i_12 - 1]))))));
            var_33 = ((var_16 ? ((((!((min(var_7, var_14))))))) : (((((var_18 ? var_1 : var_13))) ? var_4 : var_15))));
        }
    }
    for (int i_13 = 0; i_13 < 0;i_13 += 1)
    {
        var_34 = (((((var_6 ? (!12961876643504597250) : (51367 <= 51367)))) & (~3204595287)));
        arr_46 [i_13 + 1] = (((((((min(var_12, 0))) % var_15))) ? -15973 : -var_12));
        /* LoopNest 2 */
        for (int i_14 = 4; i_14 < 23;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                {
                    var_35 = (min((max((arr_50 [i_14]), (min((arr_45 [i_13 + 1]), 24992)))), var_11));
                    var_36 = (max(((~((max(var_1, (arr_42 [19])))))), var_1));
                }
            }
        }
    }
    for (int i_16 = 2; i_16 < 13;i_16 += 1)
    {
        var_37 = ((~((~(~1)))));
        var_38 = (arr_47 [i_16]);
        arr_53 [i_16] [i_16] = (min((((min(var_8, var_16)))), 1149463937));
    }
    var_39 = var_2;
    var_40 &= ((var_12 ? var_2 : ((max(1, 255)))));
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 18;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 18;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 18;i_19 += 1)
            {
                {

                    for (int i_20 = 0; i_20 < 18;i_20 += 1)
                    {
                        var_41 += -var_0;
                        var_42 = (((-(0 <= var_5))));
                        var_43 = (((((((max((arr_50 [i_20]), var_7))) ? var_11 : 16230))) ? (((var_3 ? (max((arr_47 [i_20]), (arr_59 [i_17] [i_19] [i_20]))) : (min(1073741823, 18))))) : ((((var_14 ? (arr_47 [i_19]) : (arr_49 [i_17] [i_19] [i_19] [i_20]))) % var_15))));
                        arr_62 [i_17] [5] [i_19] = (arr_57 [i_17] [i_19]);
                        var_44 = (~3204595300);
                    }
                    var_45 ^= (((-(max(var_11, var_13)))));
                }
            }
        }
    }
    #pragma endscop
}
