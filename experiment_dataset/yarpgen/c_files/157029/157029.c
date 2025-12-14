/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = var_1;
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_4] [i_2 + 1] [i_2 + 1] [i_4] = (min((min((min((arr_4 [i_0 + 2] [i_1] [i_0 + 2]), var_0)), var_6)), (arr_13 [i_0] [3] [i_0] [3] [7] [i_0 - 3])));
                                var_16 = ((3129146966 ? 171 : -7));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        var_17 |= ((((min((var_10 <= var_0), var_0))) ? ((max(var_9, var_1))) : (arr_19 [i_5])));
        arr_20 [i_5] [i_5] = ((-(min((min(var_1, var_3)), (((var_0 ? var_11 : var_7)))))));
    }
    for (int i_6 = 2; i_6 < 15;i_6 += 1)
    {
        arr_25 [i_6] = max(815982069, 126);
        var_18 = (min(var_18, (((min((((var_3 ? var_7 : var_13))), (var_12 + var_5))) << (!7322371271014934944)))));
        arr_26 [i_6] [i_6] = (arr_22 [i_6 + 1] [i_6 + 1]);
        arr_27 [i_6 + 1] [i_6] = var_4;
        arr_28 [i_6] = (arr_18 [i_6]);
    }
    var_19 = (((var_12 > (var_14 ^ var_8))));

    for (int i_7 = 2; i_7 < 15;i_7 += 1)
    {
        arr_31 [i_7 + 1] [i_7 - 2] = var_1;
        arr_32 [i_7 - 1] = ((((((arr_21 [i_7 + 1]) ? var_14 : var_8))) ? ((((var_14 >= (max(var_4, (arr_22 [i_7 + 1] [i_7]))))))) : (((arr_30 [i_7 - 2] [i_7 - 1]) - ((max(var_9, var_10)))))));

        for (int i_8 = 2; i_8 < 15;i_8 += 1)
        {
            arr_37 [i_7 + 1] = var_14;
            var_20 = (max(var_20, ((min((((arr_18 [i_7]) ? (var_11 == var_6) : var_6)), (((((min(var_7, var_1))) <= (!var_3)))))))));
            var_21 = var_2;
            var_22 = (var_3 ? ((((max(var_6, var_6))) ? (arr_21 [i_7 + 1]) : var_0)) : -var_7);
        }

        for (int i_9 = 1; i_9 < 12;i_9 += 1)
        {
            var_23 = (max(var_11, (min(var_4, (min(var_4, var_6))))));
            var_24 |= (min(((var_8 ? (max(var_14, var_8)) : var_9)), ((~(max(var_14, var_9))))));
        }
        for (int i_10 = 3; i_10 < 15;i_10 += 1)
        {
            var_25 = (((((((min(var_3, var_3))) ? (max(240, 30)) : (~var_5)))) ? (7322371271014934947 / 8775685764855847907) : ((min(var_10, var_10)))));
            arr_43 [i_10] = ((var_0 & (((min((arr_33 [i_10 + 1]), (arr_33 [i_10 + 1])))))));
            arr_44 [i_7] [i_10 + 1] = var_9;
            /* LoopNest 2 */
            for (int i_11 = 4; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 14;i_12 += 1)
                {
                    {
                        var_26 = (max(var_26, (((-3753606645279560987 ? 225 : -5672845190346520801)))));
                        var_27 = (min(var_27, (((~var_2) && ((min(((var_0 + (arr_18 [i_7]))), ((min((arr_19 [i_7]), -106))))))))));
                        arr_50 [i_12] = var_8;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 14;i_14 += 1)
            {
                {
                    arr_58 [i_14] [i_14] [i_14 + 2] [i_14 - 2] = ((min(var_8, (var_8 / var_8))));
                    arr_59 [i_7] [i_13] |= ((~var_9) ? (((((var_1 & var_9) <= (max((arr_54 [i_7 - 1] [i_7 - 1]), var_6)))))) : var_12);
                    var_28 = ((var_4 / (max(var_14, var_4))));
                    arr_60 [i_7] [i_7] = (((11124372802694616665 % 869329628) + var_4));
                    arr_61 [3] = ((((max(((max(var_11, var_11))), (min(var_9, var_13))))) ? (arr_51 [i_14]) : var_3));
                }
            }
        }
    }
    #pragma endscop
}
