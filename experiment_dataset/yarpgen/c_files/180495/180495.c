/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-16 > (min((var_16 | var_4), (~var_15))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [1] [i_0] = ((var_5 >= (max(2881546405, var_2))));
        var_18 = (max(var_18, (((var_3 & ((max(var_16, (min(var_11, var_15))))))))));
        arr_3 [i_0] = (min((var_7 * 0), var_5));
        arr_4 [i_0] [10] = ((10345867937276948490 >= var_14) ? var_6 : var_4);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 = (~var_0);
                    arr_9 [i_0] [i_0] [i_0] [i_2] = (!var_0);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    arr_19 [i_5] [i_3] [i_3] [i_3] &= (((((-(var_10 > var_8)))) ? -2147483647 : -1));
                    var_20 = (((var_5 < -126) & ((((var_4 & var_9) > (var_15 == var_5))))));
                    arr_20 [i_4] [i_4] = ((230 ? (((((1458289584 * var_1) >= var_8)))) : ((9223372036854775807 & (26 & 14811)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    var_21 -= (((var_2 > var_10) < (min(var_3, var_6))));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_22 = (min(var_22, ((((262129610 ? 2147483643 : 30295))))));
                            arr_33 [i_3] [i_3] [i_7] [i_3] = ((var_8 ? var_7 : 70));
                            arr_34 [i_3] [i_6] [i_7] [i_7] [i_9] = (-(!10700));
                            var_23 = var_2;
                        }
                        arr_35 [i_7] [i_8] [i_7] [i_6] [i_7] = (var_15 & var_7);
                    }
                    for (int i_10 = 1; i_10 < 9;i_10 += 1)
                    {
                        var_24 = ((var_12 ? var_1 : (((-(var_2 >= 18446744071562067968))))));

                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            var_25 = (max(((max(var_15, 9654))), (min(var_0, -var_15))));
                            arr_42 [i_7] [i_7] [i_7] [i_6] [i_7] = (~-16326);
                        }
                        var_26 ^= var_1;
                    }
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        var_27 = ((((((((var_8 ? -8908724219792431073 : var_14))) ? var_7 : (var_14 < 224)))) >= ((~(var_5 * var_1)))));
                        arr_46 [i_7] [i_6] [i_7] [i_7] [i_3] = ((-(var_7 || var_9)));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_28 -= ((((((var_16 > 226) ? ((min(var_13, -31951))) : var_7))) >= (((~var_13) ? (max(var_7, 2147483647)) : (min(-31959, var_2))))));
                        var_29 = (max(var_6, (!var_10)));
                        var_30 = (min(var_30, -71));
                    }
                    arr_49 [i_3] [i_3] [i_7] [i_7] = ((((((234 > var_3) ? (0 || var_6) : var_12))) < (var_9 / var_11)));
                }
            }
        }
        arr_50 [7] [7] = (((!var_11) & var_14));
    }
    var_31 &= (var_5 & 1921314204);
    #pragma endscop
}
