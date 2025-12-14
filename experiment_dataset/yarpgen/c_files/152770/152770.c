/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_3] [i_0] [i_1] [7] = (~var_13);
                            var_17 |= (arr_3 [i_4] [i_4]);
                        }
                    }
                }
            }
            arr_13 [i_1] [i_1] = arr_2 [i_0];
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        var_18 = var_15;
                        var_19 *= ((var_4 << (((arr_8 [i_0] [i_0]) - 1377280364981589073))));
                        var_20 = (max(var_20, (((var_7 <= (var_6 < var_8))))));

                        for (int i_8 = 2; i_8 < 14;i_8 += 1)
                        {
                            arr_23 [i_6] [11] [11] [1] [i_6] [i_6] [11] = ((var_3 ? (arr_10 [i_0] [i_8 + 1] [i_6] [i_0] [i_8]) : (arr_20 [i_0] [5] [i_8 + 1] [i_0] [i_8])));
                            var_21 = (max(var_21, (arr_4 [i_5] [i_5] [i_0])));
                        }
                    }
                }
            }
            var_22 = ((arr_16 [i_0] [i_5 - 1] [i_5 + 1]) ? (arr_16 [i_0] [i_5 - 1] [i_5]) : (arr_16 [i_0] [i_5 - 1] [i_5]));
            arr_24 [i_5] [i_0] [i_0] = ((var_16 != (arr_18 [i_0] [i_5 + 1] [i_5 - 1] [i_5 - 1])));
        }
        arr_25 [i_0] = var_3;
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    {
                        var_23 = (min(var_2, (((((var_1 ? (arr_6 [i_0]) : var_11))) ? var_1 : var_2))));
                        arr_34 [13] [i_11] [13] [i_11] [10] = ((((arr_27 [i_0] [i_0] [i_0]) ? ((min(65529, var_6))) : var_1)));
                    }
                }
            }
        }
        var_24 = ((max((arr_26 [i_0] [i_0] [i_0]), (arr_26 [i_0] [i_0] [i_0]))));
        var_25 = var_15;
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        var_26 = (max((((arr_36 [i_12] [i_12]) ? (arr_36 [i_12] [i_12]) : (var_15 * var_7))), ((-var_13 ? (arr_35 [i_12] [i_12]) : (arr_35 [i_12] [i_12])))));
        var_27 = (min(((((max(var_1, var_4))) ? (((((arr_36 [i_12] [1]) || (arr_36 [i_12] [i_12]))))) : (arr_35 [i_12] [i_12]))), (((~(var_16 || var_1))))));
        var_28 = var_13;
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
    {
        var_29 |= (((arr_37 [i_13]) >= var_10));
        var_30 ^= (var_8 > var_11);
        arr_39 [i_13] = arr_37 [i_13];
    }
    for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_15 = 3; i_15 < 22;i_15 += 1)
        {
            var_31 = (~var_2);
            arr_46 [i_15] [i_15] |= ((1 ? (var_16 * var_15) : var_2));
            arr_47 [i_15] = (((~var_13) == var_12));
        }
        for (int i_16 = 0; i_16 < 23;i_16 += 1)
        {
            /* LoopNest 2 */
            for (int i_17 = 2; i_17 < 22;i_17 += 1)
            {
                for (int i_18 = 2; i_18 < 20;i_18 += 1)
                {
                    {
                        arr_58 [i_14] = var_3;
                        var_32 += var_2;
                        var_33 = (max(var_33, (((((((((var_5 ? (arr_44 [i_18] [i_17]) : (arr_54 [i_14] [i_14] [i_14] [i_14])))) ? var_2 : (arr_51 [i_18 - 1])))) ? (arr_42 [i_14]) : ((((var_10 && (!var_1))))))))));
                    }
                }
            }
            var_34 = ((((var_8 ? var_8 : ((var_11 ? var_9 : (arr_51 [i_14]))))) / (min((arr_42 [i_14]), (min(var_11, var_13))))));
            arr_59 [i_14] [i_14] [i_14] = ((((min((arr_48 [i_14] [i_14] [i_14]), ((((arr_40 [i_14] [i_14]) ? var_5 : 0)))))) ? (max((arr_42 [i_14]), var_7)) : (((((max(-1, var_15))) ? (~var_15) : var_15)))));
        }
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 23;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                for (int i_21 = 2; i_21 < 21;i_21 += 1)
                {
                    {
                        arr_69 [18] [18] [18] [18] = (arr_52 [i_14] [i_19] [i_19] [i_19]);
                        arr_70 [2] = var_5;

                        for (int i_22 = 0; i_22 < 23;i_22 += 1) /* same iter space */
                        {
                            arr_74 [i_20] = (max(((+(((arr_68 [i_14] [i_19]) ? var_13 : var_15)))), var_6));
                            arr_75 [i_14] [i_19] [i_19] [i_21] [i_21] = (!var_3);
                            arr_76 [i_19] [i_19] [i_19] [i_19] [i_14] = ((((min((arr_57 [i_21 + 2] [i_21 + 2] [i_21] [i_21 + 2] [i_21 + 2] [i_21]), (arr_57 [i_21 + 1] [i_21] [i_21 + 2] [i_21] [i_21 - 1] [i_14])))) ? (arr_54 [i_21] [i_21] [i_21 + 2] [i_21 + 2]) : (((arr_42 [14]) * ((var_8 * (arr_52 [i_14] [13] [2] [i_21 + 1])))))));
                            var_35 = (max(((((arr_55 [i_21 + 1] [i_21 + 2] [i_21 + 1] [i_21 + 1]) ? (arr_55 [i_21 - 1] [i_21 + 1] [i_21 + 1] [i_21 + 1]) : (arr_55 [i_21 - 2] [i_21 - 2] [i_21] [i_21 - 2])))), (arr_55 [i_21 + 2] [i_21 - 2] [i_21 - 1] [i_21 + 1])));
                            arr_77 [i_19] [i_20] = (((var_12 ? (((var_5 >> (var_8 - 16288)))) : ((var_1 ? (arr_54 [i_14] [i_14] [i_14] [i_14]) : (arr_57 [i_14] [i_19] [i_19] [i_19] [3] [i_19]))))) <= (((arr_72 [i_21 - 1] [i_21] [i_21 - 1] [i_21 - 2] [i_21 + 1] [i_21 - 1]) ? var_13 : (arr_43 [i_22]))));
                        }
                        for (int i_23 = 0; i_23 < 23;i_23 += 1) /* same iter space */
                        {
                            arr_81 [i_14] [i_19] [i_20] [14] [i_20] [10] |= 1;
                            arr_82 [i_19] [i_19] [i_19] = ((((var_7 ? var_16 : (max((arr_44 [i_19] [i_19]), (arr_66 [i_14] [i_14] [i_20] [i_20]))))) != var_14));
                            var_36 -= (!var_14);
                        }
                        for (int i_24 = 0; i_24 < 23;i_24 += 1)
                        {
                            var_37 += (((arr_66 [10] [i_21 + 2] [i_20] [i_20]) ? (min((arr_66 [i_19] [i_21 - 1] [i_21 - 1] [i_21 - 1]), (arr_66 [i_14] [i_21 + 1] [i_14] [i_14]))) : (((arr_66 [i_19] [i_21 + 2] [1] [i_21 - 2]) | var_3))));
                            var_38 -= ((((((0 - var_1) ? var_6 : (arr_55 [i_21] [i_21 + 2] [i_21 + 2] [i_21])))) ? ((-(arr_50 [i_21 + 2] [i_21 + 2]))) : (arr_45 [i_14] [i_20])));
                        }
                    }
                }
            }
        }
    }
    var_39 = (min((((var_6 && var_1) ? var_13 : var_12)), (!var_6)));
    var_40 |= var_7;
    var_41 = (!8430);
    var_42 = ((!(!var_3)));
    #pragma endscop
}
