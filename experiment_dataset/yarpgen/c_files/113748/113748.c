/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_18 = var_11;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [3] [i_4] [i_2] |= (~233);
                                var_19 *= ((!(arr_7 [i_4 - 1] [i_4] [i_4 - 2] [0])));
                                arr_14 [i_0] [i_0] [8] [i_1] [i_2] [i_3] [i_4] = -var_4;
                                var_20 = var_7;
                                arr_15 [i_0] [i_0] [i_0] = (arr_11 [i_0] [i_0] [12] [i_3] [i_4]);
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {

                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 10;i_6 += 1)
                    {
                        var_21 = (((arr_9 [i_0] [i_6 - 3]) ? (arr_9 [i_0] [i_1]) : (arr_9 [i_0] [i_6 + 3])));
                        var_22 -= -var_1;
                    }
                    for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_23 = (max(var_23, ((min(var_9, ((max((max(75, 65530)), ((max(var_5, var_6)))))))))));
                        var_24 = -37;
                        var_25 *= ((~((~((187 << (9679428742149819417 - 9679428742149819397)))))));
                    }
                    for (int i_8 = 1; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        var_26 += (max((!0), (min(((((arr_24 [i_8 + 2] [i_8] [6] [i_5] [i_1] [i_0]) ? var_6 : var_12))), var_10))));
                        var_27 = ((-((((max(var_0, -60))) * (!127)))));
                        arr_27 [12] [12] [12] [i_8] |= (((-var_1 ? var_17 : var_15)));
                        var_28 -= ((-((-(arr_21 [i_8 - 1] [6] [i_8 - 1] [i_8 - 1])))));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_29 -= (((var_11 ? ((4842435102214155656 ^ (arr_22 [3] [i_5] [1])) : ((-(arr_1 [i_1] [i_9])))))));
                                var_30 = (max(var_30, -8930834214999959082));
                                var_31 = ((((min((arr_28 [0]), (arr_31 [i_10] [i_10 - 1] [i_10 - 1] [i_10 - 1])))) ? var_14 : (((~(arr_2 [i_0]))))));
                                var_32 -= arr_10 [i_0] [1] [i_5];
                            }
                        }
                    }
                    var_33 = -0;
                }
                var_34 += var_2;
                /* LoopNest 3 */
                for (int i_11 = 1; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 4; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 12;i_13 += 1)
                        {
                            {
                                var_35 = (((arr_8 [3] [i_12 - 4]) ? ((-(((arr_33 [i_0] [4] [i_1] [11] [6] [i_13] [i_13 - 4]) | (arr_31 [5] [i_11 + 1] [i_1] [i_0]))))) : ((((-(arr_39 [i_13] [i_12 + 3] [5] [5] [i_1] [i_0])))))));
                                var_36 -= (~var_12);
                            }
                        }
                    }
                }
                var_37 = arr_38 [3] [i_0] [i_0] [i_0] [i_1] [i_1];
                arr_43 [i_0] = ((+((((arr_22 [i_1] [i_0] [i_0]) >= (arr_5 [i_0]))))));
            }
        }
    }
    var_38 = ((~((-var_1 | ((max(var_11, var_4)))))));
    var_39 = (min(var_39, (((var_12 > ((var_3 ? ((var_2 ? 1 : var_11)) : (~1))))))));

    for (int i_14 = 1; i_14 < 11;i_14 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 12;i_17 += 1)
                {
                    {
                        var_40 = (max(var_40, 0));
                        var_41 = (max(var_41, (((((~(arr_55 [i_15] [i_15]))) < ((max((arr_52 [i_14 + 2] [i_14 + 1]), (arr_52 [i_14 + 2] [i_14 + 1])))))))));
                        var_42 += (min((((~((-32764 ? var_8 : var_4))))), -var_13));
                        var_43 = var_12;
                    }
                }
            }
        }
        var_44 = var_0;
    }
    /* vectorizable */
    for (int i_18 = 1; i_18 < 11;i_18 += 1) /* same iter space */
    {
        var_45 = (min(var_45, 9));
        var_46 = 2630296636;
    }
    #pragma endscop
}
