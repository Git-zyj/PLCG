/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-6902855376328572346 | 2305842459457880064);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 |= ((var_5 ? (((50 ? -9824 : var_10))) : (arr_3 [i_0] [i_1])));
                arr_6 [i_0] [i_1] = (540045248 / (min((arr_5 [i_1]), var_5)));
                var_17 *= (min((var_13 == -459771393650598981), (((min((arr_2 [i_0]), var_11)) / var_11))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_18 = (((var_14 ? -31618 : (arr_12 [i_2 + 1] [i_2 + 1] [i_3]))));

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_19 = (((((arr_0 [i_2 + 2]) ? ((max(var_13, -31626))) : 38)) / -6117256692439106919));
                                var_20 = (((((((var_8 ? -6117256692439106944 : var_13)) & var_14))) ? (max((!6117256692439106918), -14)) : (arr_4 [i_0] [i_2])));
                            }
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                arr_19 [i_0] [i_1] [i_2] [i_2] [i_2] [i_5] [i_2] = ((((!6) && ((max(3182678541026710209, var_12))))));
                                var_21 = (((((6 ? (arr_3 [i_0] [i_0]) : (!-3)))) ? var_8 : var_7));
                                var_22 &= min((((min(3009989767658767457, -2157440013603878599)) | (!var_4))), (min(-6117256692439106919, (arr_10 [i_2 + 2]))));
                                var_23 = ((!((-119 <= ((-31613 ? var_0 : 31625))))));
                                arr_20 [i_1] [i_3] [i_2] [i_1] [i_0] = ((!(!var_5)));
                            }
                            for (int i_6 = 0; i_6 < 17;i_6 += 1)
                            {
                                var_24 -= (((((-(30142 / var_13)))) ? var_10 : var_10));
                                var_25 = (!var_6);
                                var_26 = (max(var_4, var_4));
                            }
                            for (int i_7 = 0; i_7 < 17;i_7 += 1)
                            {
                                var_27 &= var_0;
                                arr_25 [i_0] [i_1] [i_2] [i_3] [i_2] = var_7;
                            }
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] |= var_4;
                            var_28 = var_14;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            {
                                arr_36 [i_0] [i_0] [i_8] [i_0] [i_0] |= ((!((max((min(32761, var_9)), (arr_27 [i_10]))))));
                                var_29 *= var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 12;i_15 += 1)
                        {
                            {
                                var_30 = ((((max((max(var_7, var_4)), var_4))) ? (!var_5) : (min((arr_7 [i_13]), ((var_12 ? (arr_29 [i_13] [i_14] [i_14]) : 64))))));
                                var_31 &= (((min(var_6, var_5))) ? (((!((max(var_10, var_13)))))) : var_10);
                                arr_48 [i_15] [i_14] [i_14] [i_13] [i_12] [i_11] = ((var_1 ? var_14 : var_1));
                            }
                        }
                    }
                    var_32 = (min(var_32, ((((-9663 ? var_12 : ((~(arr_22 [i_11] [i_12] [i_11] [i_11])))))))));
                    var_33 = (min((!var_10), ((~(arr_31 [i_11] [i_12] [i_12] [i_12])))));
                    arr_49 [i_11] = (((((var_11 ? var_7 : var_10) * var_14))));
                }
            }
        }
    }
    var_34 = var_6;
    #pragma endscop
}
