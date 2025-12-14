/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_17 = (arr_0 [3] [3]);
        var_18 = (min(var_18, (((((arr_3 [i_0 + 2]) - (arr_1 [i_0 - 2] [i_0 - 2])))))));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_11 [i_1 + 1] [i_1 + 1] &= var_12;
            arr_12 [2] [i_2] [0] = (arr_0 [i_1 + 1] [i_2]);

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_19 |= ((-(arr_7 [i_2])));
                arr_15 [1] [i_2] [i_2] &= var_5;
            }
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_25 [i_5] = (((~var_8) ^ (((arr_23 [i_1] [i_6]) ^ var_8))));
                            var_20 &= (~var_13);
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_21 = (((((arr_6 [i_1 - 1] [i_1 - 1]) ? var_16 : var_2)) & (~var_7)));
                            var_22 |= (!628837471);
                        }
                        for (int i_11 = 3; i_11 < 14;i_11 += 1)
                        {
                            var_23 &= var_11;
                            arr_41 [i_1] [i_8] [i_11] = var_15;
                            arr_42 [i_1] [i_7] [i_11] [i_9] = arr_7 [i_11 + 2];
                        }
                        var_24 = 3666129846;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        {
                            var_25 = (arr_26 [i_12] [i_13 - 2] [i_14]);
                            var_26 = (min(var_26, (((((min((arr_49 [i_14] [i_14] [i_1 - 2] [5] [i_14] [i_13 - 2] [i_1 - 2]), 4195251322))) ? ((min(var_11, (arr_49 [i_1 + 1] [1] [i_1 - 2] [1] [i_14] [i_13 - 2] [1])))) : var_2)))));
                            var_27 = ((arr_34 [i_1 - 2] [i_7] [i_12] [i_13]) != ((((arr_1 [i_1] [9]) > var_14))));
                            var_28 += var_13;
                            arr_52 [i_7] = (arr_3 [i_12]);
                        }
                    }
                }
            }
            var_29 = (min((min(var_2, (min(-6776200556887523553, 1)))), ((~(~-8309893989902673839)))));
        }
        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            var_30 |= var_3;
            var_31 = var_10;
            var_32 = (min(var_32, (arr_37 [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 - 1] [9])));
            arr_56 [i_1] [i_15] [i_1 + 1] &= var_11;
        }
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 16;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 16;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 16;i_18 += 1)
                {
                    {
                        var_33 -= -1;
                        var_34 = (min(var_5, (min(var_5, (arr_13 [i_1 + 1])))));
                        var_35 = ((~(arr_9 [i_1] [i_16] [i_16])));
                    }
                }
            }
        }
    }
    for (int i_19 = 0; i_19 < 25;i_19 += 1)
    {
        arr_70 [i_19] [i_19] = (!var_14);
        arr_71 [i_19] [i_19] = var_5;

        for (int i_20 = 3; i_20 < 24;i_20 += 1)
        {
            arr_76 [23] [23] = arr_75 [i_19];
            var_36 = (((arr_74 [i_19] [18] [i_19]) ? (((~var_3) ? (var_8 <= var_2) : (((arr_75 [i_20]) ? (arr_66 [i_20] [14]) : var_1)))) : var_2));
            arr_77 [3] [i_20] [i_19] = var_16;
        }
    }
    var_37 = var_15;

    for (int i_21 = 0; i_21 < 14;i_21 += 1)
    {
        var_38 = ((min(var_7, ((var_12 & (arr_33 [i_21] [i_21] [13] [i_21] [i_21]))))));
        arr_81 [i_21] = var_5;
        var_39 = (min(var_39, 6776200556887523553));
        var_40 = (min(var_40, ((((min(var_8, (arr_7 [i_21]))) == (arr_7 [i_21]))))));
    }
    for (int i_22 = 0; i_22 < 11;i_22 += 1)
    {
        arr_84 [i_22] = (((arr_13 [i_22]) ? (~var_10) : ((~(arr_13 [i_22])))));
        var_41 ^= var_8;
    }
    for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
    {
        var_42 = (min(((max((arr_66 [i_23] [i_23]), (arr_69 [i_23])))), ((((min(var_7, var_11))) - ((min(var_10, var_14)))))));
        var_43 = (max(var_43, (!var_1)));
        var_44 &= (arr_86 [i_23]);
        var_45 = (arr_88 [i_23]);
    }
    for (int i_24 = 0; i_24 < 1;i_24 += 1) /* same iter space */
    {
        var_46 = min((min((arr_69 [i_24]), ((var_15 ? var_0 : var_1)))), (((arr_90 [i_24]) ? (arr_68 [i_24]) : ((((arr_89 [i_24] [i_24]) || var_3))))));
        var_47 = var_9;

        for (int i_25 = 0; i_25 < 17;i_25 += 1)
        {
            arr_93 [1] = ((628837447 * (((min(140, ((min(var_14, var_15)))))))));
            var_48 = ((~(arr_85 [i_25])));
        }
        for (int i_26 = 0; i_26 < 17;i_26 += 1)
        {
            var_49 = var_8;
            var_50 *= ((min(((~(arr_91 [i_26] [i_24] [i_24])), ((min(var_13, var_0)))))));
            arr_96 [i_24] [i_26] &= (((((!(arr_89 [i_26] [i_24])))) * var_1));
        }
        var_51 += ((-((var_9 ? (arr_85 [1]) : (~var_6)))));
        arr_97 [5] [5] = (arr_1 [i_24] [i_24]);
    }
    #pragma endscop
}
