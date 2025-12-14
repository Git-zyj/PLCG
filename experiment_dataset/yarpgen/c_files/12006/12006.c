/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((((var_5 ? var_7 : var_12))) | var_5)), ((((((3108006153442808234 ? var_3 : var_12))) > 3108006153442808232)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_16 = (min(var_16, (((+((((((arr_5 [i_0] [i_1] [i_1]) + (arr_0 [i_0])))) & (126 + -2526836164737676037))))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_2] [i_1] [i_1] = 1;
                        var_17 += ((var_11 ? ((((((arr_1 [7]) ? (arr_5 [i_1] [i_1] [i_3 + 1]) : (arr_3 [17])))) ? ((3108006153442808234 & (arr_5 [i_3] [i_1] [i_2]))) : var_8)) : (var_7 && var_9)));
                        arr_13 [i_1] [i_1] [i_2] [2] [i_1] [i_3 - 1] = (arr_4 [i_0] [i_0] [i_0]);
                        arr_14 [7] [i_1] [i_2] [i_1] = (~0);
                    }
                }
            }

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_18 = (max(var_18, ((!(((~(~1))))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_19 = (((max((arr_17 [i_1] [i_5] [i_4] [9] [i_1]), (arr_17 [i_0] [i_1] [i_4] [i_5] [i_1]))) ? ((min(1590, 1))) : (((arr_5 [i_0] [i_0] [i_0]) ^ (arr_5 [i_1] [1] [1])))));
                            arr_22 [i_6] [i_6] &= 1;
                        }
                    }
                }
                arr_23 [i_0] [i_0] [i_1] = (max(((((arr_20 [i_0] [i_1] [i_4]) || (arr_1 [i_0])))), (max((-2526836164737676037 && var_4), ((var_14 ? (arr_21 [i_0] [i_0] [i_4] [i_1] [i_0] [i_4] [i_1]) : (arr_3 [i_0])))))));
                var_20 = (max(var_20, 1));
                arr_24 [i_1] [i_1] = ((40020 ? -21 : -3108006153442808232));
            }
            for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
            {
                var_21 = (arr_28 [i_7] [i_0] [i_0] [i_0]);
                var_22 = (!1);
                var_23 = (arr_20 [i_0] [i_1] [i_7]);

                for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                {
                    var_24 = (((((3108006153442808238 ? -10 : 1))) ? ((((-15 || var_13) >> var_4))) : (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [11])));
                    var_25 += (((((((arr_11 [i_0] [i_1] [i_1] [i_7] [i_8]) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_11 [i_8] [i_7] [i_1] [i_1] [i_0]))) + 9223372036854775807)) >> (((arr_21 [i_8] [i_7] [i_7] [12] [i_0] [i_0] [i_0]) ? ((((arr_20 [i_0] [i_1] [i_7]) ? (arr_17 [i_0] [i_1] [14] [i_1] [4]) : var_11))) : (min((arr_4 [i_8] [i_7] [14]), 3108006153442808229))))));
                }
                for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                {
                    var_26 = (((!887336240875532006) > (1 | 17477)));
                    arr_34 [i_0] [i_0] [i_7] [i_7] [i_1] [i_0] = 63927;
                    var_27 = (max(var_27, ((min((arr_5 [i_0] [i_0] [i_0]), (arr_18 [i_7]))))));
                    var_28 = (max(var_28, (max(((var_10 ? (((arr_9 [i_0] [6] [i_7] [i_0] [i_9]) ? (arr_33 [i_0] [13] [i_7] [i_9]) : 3108006153442808232)) : (((((arr_7 [i_9] [2] [i_0]) >= (arr_2 [i_7]))))))), (-18330 > var_2)))));
                }
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
            {
                var_29 = ((((var_12 ? (arr_9 [i_0] [i_1] [i_10] [i_1] [4]) : var_3)) | (arr_5 [9] [i_1] [i_10])));
                var_30 = (((((arr_11 [0] [i_1] [i_10] [i_0] [i_10]) ? 926971714198609153 : var_2)) / (arr_15 [i_0])));
            }
            arr_38 [i_1] [i_1] = (((max((arr_7 [i_0] [i_1] [i_1]), (arr_37 [i_0] [i_1] [i_0] [i_1]))) <= 12443508539569721398));
        }
        var_31 = (min(var_31, ((((((((((arr_26 [i_0] [1] [i_0] [i_0]) ? 1 : var_12))) && (arr_37 [i_0] [i_0] [i_0] [1])))) * (((arr_7 [i_0] [2] [i_0]) ^ (var_10 >= var_11))))))));
    }
    #pragma endscop
}
