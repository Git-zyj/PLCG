/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_0] [i_0] [i_0] = (arr_1 [i_0 + 1]);

                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        arr_13 [i_0 + 2] [i_2] [i_3] [i_0 + 2] = (((((((min(var_0, var_0))) ? ((min((arr_4 [i_0 + 3]), (arr_11 [i_0] [i_0] [i_1] [i_3] [i_0] [13])))) : (var_3 + var_8)))) < ((((max(var_13, var_13))) ? var_3 : (arr_8 [i_0 + 3])))));
                        arr_14 [i_0] [7] [i_3] [i_2] [i_3] = ((-(min((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2])))));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_14 &= var_5;
                        var_15 = (min(var_15, (((((((((arr_6 [i_0 - 1] [i_1]) ? (arr_0 [i_0]) : var_3)) >> var_8))) && ((min((min(var_5, (arr_17 [i_0] [i_0] [i_2] [i_4]))), var_3))))))));
                        var_16 = (min((min((min(var_0, (arr_1 [i_0]))), ((min((arr_7 [i_0] [i_1] [i_1]), var_8))))), ((((((var_6 >= (arr_12 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0 - 1])))) < (((arr_2 [i_1]) ? var_3 : var_8)))))));
                    }
                }
            }
        }
    }
    var_17 = (min(((var_5 ? (~var_0) : var_5)), -var_9));
    var_18 *= ((((var_5 - var_7) || var_13)));

    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_19 = (arr_16 [i_5] [i_5] [10] [i_5] [12]);

        for (int i_6 = 2; i_6 < 13;i_6 += 1)
        {
            var_20 = ((~((((((arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [i_6 + 3]) | var_2))) ? (((arr_4 [i_5]) ? var_1 : (arr_6 [i_5] [i_6]))) : var_6))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 14;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                        {
                            var_21 ^= (arr_10 [i_5] [i_5] [i_5] [i_5]);
                            var_22 = (~(((arr_22 [i_5]) ? (arr_22 [i_5]) : (arr_22 [i_5]))));
                        }
                        for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                        {
                            arr_33 [i_5] [10] [i_5] [i_8 - 1] [i_10] [i_10] = ((~((-var_7 ? var_4 : (min(var_1, (arr_6 [i_5] [i_5])))))));
                            var_23 = ((-(((var_11 - var_5) - (((var_12 ? (arr_25 [i_5]) : var_9)))))));
                        }
                        arr_34 [i_5] [i_5] [i_6 + 1] [i_7] [i_8 - 2] [i_8 + 1] = max((arr_20 [i_5] [i_5]), (arr_22 [i_5]));
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            var_24 = (min(var_24, (((((((arr_31 [6] [10] [i_5] [i_5] [i_11]) || (arr_19 [8])))) != ((~((var_3 ? var_3 : var_3)))))))));
            var_25 = (((((((var_6 ? var_1 : var_10))) || (!var_3))) ? ((min(((-(arr_23 [8]))), (((var_9 >= (arr_23 [i_5]))))))) : (arr_15 [i_11])));
            /* LoopNest 2 */
            for (int i_12 = 4; i_12 < 15;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 14;i_13 += 1)
                {
                    {
                        var_26 -= (((((~((-(arr_4 [i_11])))))) ? var_9 : (((((var_9 ? var_5 : (arr_26 [0] [0] [i_12] [1] [i_12]))) > ((((arr_22 [1]) ? (arr_26 [i_5] [i_11] [i_11] [12] [i_11]) : (arr_32 [i_5] [i_5] [i_5] [13] [i_5] [9] [i_5])))))))));
                        arr_45 [i_5] = (i_5 % 2 == 0) ? ((((max(((var_5 >> (((arr_36 [i_5]) - 11196247202272498677)))), (((var_8 ^ (arr_31 [2] [i_5] [i_12] [i_5] [i_11])))))) < -var_8))) : ((((max(((var_5 >> (((((arr_36 [i_5]) - 11196247202272498677)) - 16596974750635719534)))), (((var_8 ^ (arr_31 [2] [i_5] [i_12] [i_5] [i_11])))))) < -var_8)));
                    }
                }
            }
            arr_46 [15] [i_5] [i_5] = (!-var_3);
        }
        for (int i_14 = 1; i_14 < 15;i_14 += 1)
        {
            arr_50 [14] [i_14] [i_5] = ((-var_5 + ((max((((arr_41 [i_5] [i_5] [i_5] [i_5]) * var_8)), (arr_41 [i_5] [i_5] [i_14] [i_5]))))));
            var_27 = ((-(arr_5 [i_5])));
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 16;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 16;i_16 += 1)
                {
                    {
                        var_28 -= ((((min((arr_43 [i_5] [i_14 + 1] [8] [4]), (arr_54 [i_5] [i_14] [i_5] [i_14] [i_16] [0]))) <= -var_4)));
                        arr_56 [i_14 - 1] [i_5] [i_14 - 1] [i_14] [i_5] [i_5] = min(((var_10 ? (arr_31 [i_14 - 1] [i_5] [i_15] [i_16] [i_14]) : (arr_31 [i_14 - 1] [i_5] [i_15] [i_15] [i_14]))), var_10);
                        arr_57 [i_5] [i_5] [i_15] = var_3;
                        var_29 &= (min((((((~(arr_4 [i_14])))) ? -var_4 : ((min((arr_1 [i_15]), var_11))))), ((var_3 ? (~var_11) : (arr_51 [i_5] [i_14 + 1] [1])))));
                    }
                }
            }
            arr_58 [i_5] [i_5] [i_14] = (((min((((arr_51 [i_5] [i_5] [i_5]) ? var_13 : (arr_42 [i_5] [i_14] [i_14 + 1]))), ((max(var_11, (arr_37 [i_5] [i_5] [i_14]))))))) ? (arr_44 [i_14] [i_14] [i_14] [i_14 + 1] [i_14] [i_5]) : (((arr_21 [i_14 + 1] [i_14 - 1]) ? var_4 : var_9)));
        }
        var_30 = ((((((arr_55 [i_5]) ? (arr_23 [i_5]) : (arr_23 [i_5])))) && ((((((arr_26 [i_5] [i_5] [i_5] [i_5] [i_5]) ? var_13 : (arr_49 [i_5] [i_5]))) ^ var_4)))));
    }
    for (int i_17 = 0; i_17 < 12;i_17 += 1)
    {
        var_31 = (min(var_31, (((((((~var_0) | (~var_6)))) ^ (((((var_4 ? var_13 : var_4))) ? (min((arr_0 [6]), var_10)) : (((var_4 ? var_12 : var_9))))))))));
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 12;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 11;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 12;i_20 += 1)
                {
                    {
                        arr_72 [i_17] [i_19 + 1] [i_20] = (min(((~(~var_1))), (((((arr_47 [i_18] [i_19] [i_20]) ? var_8 : (arr_66 [i_18] [i_19])))))));
                        arr_73 [9] [i_17] = (((arr_21 [i_19 + 1] [i_19 - 1]) || ((max((arr_21 [i_19 + 1] [i_19 - 1]), var_2)))));
                        var_32 -= ((((((var_1 ? var_13 : (arr_29 [i_20] [i_19] [i_18] [6] [i_17])))) ? ((((arr_48 [i_17] [2] [i_18]) ? var_13 : var_6))) : (~var_1))));
                    }
                }
            }
        }
        var_33 *= ((((((~(arr_21 [i_17] [i_17]))) + 2147483647)) << ((((((-(arr_21 [i_17] [i_17]))) + 674015142)) - 3))));
        arr_74 [i_17] [i_17] = (~var_3);
    }
    for (int i_21 = 0; i_21 < 21;i_21 += 1)
    {
        arr_77 [i_21] [i_21] = ((-(max(var_3, (min((arr_76 [0]), (arr_75 [i_21])))))));
        /* LoopNest 2 */
        for (int i_22 = 3; i_22 < 19;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 21;i_23 += 1)
            {
                {
                    arr_83 [6] [i_21] [6] = (arr_82 [i_21] [1] [1]);
                    var_34 = (min(var_34, var_9));
                    arr_84 [i_21] [i_22] [i_23] [i_23] = (arr_79 [i_23]);
                }
            }
        }
        arr_85 [i_21] = (((arr_75 [i_21]) - var_3));
        var_35 ^= ((~(arr_75 [i_21])));
    }
    #pragma endscop
}
