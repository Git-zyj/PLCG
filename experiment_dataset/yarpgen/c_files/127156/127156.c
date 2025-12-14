/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    var_16 |= var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_8 [i_0] [7] [i_2] [i_0] = var_4;
                    var_17 = (max(var_17, ((((~var_8) ? ((min(0, -661718766))) : (min((arr_4 [i_0] [i_1] [i_0]), var_2)))))));
                    var_18 = ((var_3 ? (arr_6 [13] [i_1] [i_1] [i_2]) : -1));

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        var_19 *= (max(48, 1007036183));
                        arr_12 [i_3] [19] [i_1] [i_0] = (((!var_11) % ((var_14 ? var_2 : -86))));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        var_20 = (min(var_20, ((max(var_2, (!1))))));
                        var_21 = (min(var_21, ((!((max(var_8, ((var_13 ? (arr_6 [i_0] [0] [i_2] [0]) : var_1)))))))));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_2] [i_1] [i_2] [i_2] &= (((((var_2 ? var_4 : (arr_7 [i_0] [i_1] [i_2] [i_5])))) ? ((-((48 ? var_8 : 1)))) : (!1)));
                        arr_18 [i_0] [i_1] [i_2] [16] = 1149226743807417124;
                        var_22 |= (min((arr_4 [i_0] [1] [i_0]), (13 * var_8)));
                        var_23 = (((~var_12) ? (((((max(var_2, (arr_11 [i_0] [i_0] [i_1] [i_2] [i_5])))) != -var_1))) : ((-304974810 ? var_8 : ((1149226743807417124 ? var_2 : 1))))));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 3; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_2] [i_1] [i_2] &= ((-((-((var_14 ? 17297517329902134491 : 1149226743807417125))))));
                            var_24 = (max(var_24, ((max((((arr_24 [1] [16] [i_2] [i_6] [i_2] [i_7 - 3] [13]) ? var_8 : 1)), (~166))))));
                            arr_26 [i_0] [i_7] [i_2] [19] [7] = ((!(arr_23 [i_7] [12] [i_7] [i_7 - 2] [5] [i_7] [i_7 - 1])));
                            arr_27 [i_7] = ((!(((3 ? (1048575 && var_12) : var_12)))));
                        }
                        for (int i_8 = 3; i_8 < 19;i_8 += 1) /* same iter space */
                        {
                            arr_31 [14] [i_2] [14] = ((((min(-1048597, (arr_9 [i_6] [i_2] [i_1] [i_0])) - -21010))));
                            arr_32 [i_0] [i_1] [i_2] [14] [i_1] = ((((max(2, (arr_30 [i_8 - 2] [i_8] [i_8 - 1] [i_8 - 2] [i_8])))) ? (((((-16698 ? 192 : var_11))) ? -1606588461 : var_8)) : ((max(202, 3)))));
                            arr_33 [i_1] [i_6] [i_8] &= ((((var_11 / (arr_22 [i_6] [17] [i_8 + 1] [i_8] [i_8 - 1] [i_8 - 2]))) & (((var_2 >> ((16239199077567273116 ? 1 : 80)))))));
                        }
                        var_25 = ((!(((-(arr_30 [1] [i_1] [4] [i_6] [i_6]))))));
                    }
                }
                for (int i_9 = 4; i_9 < 19;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            {
                                var_26 = ((~((1818139093 ? (~var_12) : ((var_2 ? var_7 : (arr_28 [19] [i_11] [i_10] [i_9] [i_1] [i_1] [1])))))));
                                var_27 = ((-17297517329902134503 ? (((var_9 ? var_6 : (arr_5 [i_11] [i_0] [i_0])))) : (~var_0)));
                                var_28 = -85;
                            }
                        }
                    }
                    var_29 = (max(var_29, ((((max(var_8, ((var_8 ? var_11 : var_13))))) ? ((1 ? 59 : (-32767 - 1))) : 198))));
                    arr_40 [i_9 + 1] [10] [17] = var_8;

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        arr_43 [16] [i_1] [i_9] = ((var_0 ? (arr_20 [i_0] [i_1] [i_9 - 3] [i_12]) : (!6128330966987626115)));
                        var_30 = (min(var_30, (~var_1)));
                    }
                }
                /* vectorizable */
                for (int i_13 = 2; i_13 < 18;i_13 += 1)
                {
                    arr_47 [i_0] [i_1] [i_13 + 2] = -1048590;

                    for (int i_14 = 4; i_14 < 19;i_14 += 1)
                    {
                        var_31 += ((0 ? 4294967294 : -94));
                        var_32 = 16697;
                        arr_52 [16] [i_13] [i_0] [i_0] = (1048574 / 214);
                    }
                }
                var_33 += (min((~var_9), var_10));
                arr_53 [i_1] = (max((((-(-127 - 1)))), (~var_11)));
                arr_54 [i_1] = ((((max((~17297517329902134491), -94))) ? ((max((!1357427528), (arr_46 [i_1] [i_1] [i_0])))) : ((-(arr_38 [i_1] [i_1] [i_1] [i_1] [i_1])))));
                var_34 = (max(var_34, ((((((28311 ? (arr_20 [11] [18] [i_0] [i_1]) : -83))) | ((var_2 ? (arr_20 [i_0] [i_1] [i_1] [i_0]) : var_9)))))));
            }
        }
    }
    #pragma endscop
}
