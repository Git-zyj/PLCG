/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_3, 0));
    var_15 = var_2;
    var_16 = var_10;
    var_17 = 1;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_18 = ((arr_3 [i_0 + 2] [i_0 + 1]) ? 1 : (arr_3 [i_0 + 2] [i_0 + 1]));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_19 = ((-((((((1 ? (arr_9 [i_2] [i_2] [i_2 + 1] [i_2]) : (arr_7 [i_0])))) || (~1))))));
                    var_20 = (min(var_20, (((max(1, 127))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_21 = ((+(((arr_0 [i_0 - 1]) * var_13))));

                    for (int i_5 = 2; i_5 < 7;i_5 += 1)
                    {
                        var_22 = (min(((max((arr_1 [i_3 - 3] [9]), (arr_11 [i_3 + 2] [i_3])))), ((((min((arr_5 [i_0 - 1] [i_0 - 1]), (arr_0 [i_3])))) ? var_12 : (((arr_0 [5]) ? (arr_2 [7]) : (arr_7 [i_4])))))));
                        var_23 = (arr_11 [i_3] [i_3]);
                        var_24 = -17442;
                        var_25 = (min(var_25, (((((max((arr_14 [i_0 + 2] [i_5 - 2] [i_4] [i_5 + 1]), var_2))) ? -611006726 : (1 && 1161615181))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_0] [i_4] [i_3] [i_4] = (((((arr_19 [1] [i_6] [i_4] [i_4] [i_0] [i_0]) <= (arr_15 [i_3] [9] [i_0] [9]))) || (2754115535 / 41746)));
                        var_26 = (arr_13 [i_0] [i_3 + 2] [i_4] [1]);
                        var_27 &= (~2997557133);
                        var_28 = (min(var_28, (((~(((!(arr_1 [i_6] [i_0])))))))));
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_29 = (min(var_29, 1));
                        var_30 = (arr_11 [i_0 + 1] [i_3]);
                        var_31 = 198;
                        var_32 = var_0;
                        var_33 &= (min((arr_23 [i_0] [i_0] [i_3 - 1] [i_0] [1] [i_7]), (((arr_0 [i_0]) ? 51407 : (arr_0 [i_0 + 1])))));
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        var_34 = (max(var_34, ((((var_11 || 1) ? ((min((arr_25 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_3 - 1] [i_3 - 3] [i_3]), (arr_25 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_3 + 2] [i_0 + 2] [i_8])))) : (((!(!0)))))))));
                        var_35 = (i_3 % 2 == 0) ? ((max(((((((arr_24 [i_0 - 1] [i_0 - 1] [i_4] [0] [4] [i_0 - 1]) * var_13)) << (((arr_22 [i_4] [i_3] [i_4]) - 1269399367))))), ((((((arr_24 [i_0] [i_3 - 2] [i_4] [i_4] [i_8] [i_8]) ? var_5 : var_3))) ? ((min(2707477797, 189))) : ((var_10 ? (arr_15 [i_8] [i_8] [i_0] [i_8]) : (arr_4 [i_0])))))))) : ((max(((((((arr_24 [i_0 - 1] [i_0 - 1] [i_4] [0] [4] [i_0 - 1]) * var_13)) << (((((arr_22 [i_4] [i_3] [i_4]) - 1269399367)) - 3717938630))))), ((((((arr_24 [i_0] [i_3 - 2] [i_4] [i_4] [i_8] [i_8]) ? var_5 : var_3))) ? ((min(2707477797, 189))) : ((var_10 ? (arr_15 [i_8] [i_8] [i_0] [i_8]) : (arr_4 [i_0]))))))));
                        var_36 = (min(var_36, ((((((arr_4 [i_0 + 1]) - (arr_4 [i_0 - 1]))) <= (arr_4 [i_0 - 1]))))));
                        var_37 = (max(var_37, ((-(max(var_10, (arr_22 [i_8] [i_4] [i_4])))))));
                        arr_28 [i_3] [i_4] [i_3 - 3] [i_3 - 3] [i_3] = (max((((((min(var_12, (arr_11 [i_0] [i_3])))) * ((min(41751, var_8)))))), (((max(1, (arr_4 [i_0]))) * 1))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
