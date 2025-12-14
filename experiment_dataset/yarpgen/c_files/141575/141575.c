/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_4 [i_0] = ((!(arr_1 [i_0] [i_0])));
            var_14 = (!var_2);

            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                arr_8 [i_0] [i_0] [i_2] = (((0 >> 1) ? var_11 : (var_5 < var_6)));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        {
                            var_15 = var_5;
                            var_16 = 2;
                            arr_13 [9] [9] [9] [i_0] [16] = ((!(var_13 && -1)));
                            var_17 *= (((arr_9 [1] [i_1] [1] [i_3] [i_4 + 1] [i_4]) == (arr_11 [i_0] [i_0] [i_0] [i_0] [6])));
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_18 = (((((!(arr_3 [i_0] [i_0])))) > (arr_1 [i_0] [i_0])));
                var_19 *= (((arr_14 [i_0] [i_0] [i_0]) >= (arr_14 [i_0] [i_1] [i_5])));
                arr_16 [i_0] [i_0] [i_0] [i_0] = (!var_2);
            }
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                arr_20 [i_0] [i_0] [i_0] [i_0] = 1690087344;
                var_20 -= var_2;
            }
            for (int i_7 = 3; i_7 < 19;i_7 += 1)
            {
                var_21 = (arr_11 [i_1] [i_7 + 1] [i_7 - 3] [i_7] [i_0]);

                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    var_22 = (max(var_22, (((((!(arr_24 [i_8] [i_1] [i_7] [i_7] [i_8] [i_8]))) ? var_9 : ((((arr_25 [i_0] [i_1] [i_7 + 1] [i_8]) == var_0))))))));
                    var_23 -= (((arr_0 [i_1]) || (arr_0 [i_0])));
                    var_24 = (!(!var_9));
                }
                for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                {
                    arr_30 [i_0] [i_1] [i_7] [i_9] = (!1);
                    var_25 = var_9;
                }
                for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                {
                    arr_33 [i_10] [i_0] [19] [i_10] = (arr_28 [i_0] [i_0] [i_0] [i_0]);
                    arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_11 [i_7] [i_1] [i_7] [i_10] [i_0]);
                    var_26 = var_1;
                    arr_35 [i_0] = (arr_7 [i_0] [i_0] [i_0]);
                    arr_36 [i_0] [i_10] |= (((arr_32 [i_0] [i_0] [i_7 + 1] [1]) ? (arr_32 [i_0] [i_1] [i_7 - 3] [i_1]) : (arr_32 [i_0] [i_0] [i_7 - 2] [i_10])));
                }
                for (int i_11 = 1; i_11 < 19;i_11 += 1)
                {
                    arr_39 [i_0] [i_1] [i_7 - 3] [i_0] = ((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) || (((var_0 ? 96 : (arr_37 [i_0] [i_0] [2] [i_11])))));

                    for (int i_12 = 4; i_12 < 19;i_12 += 1)
                    {
                        arr_44 [i_0] [i_0] [i_0] [i_0] [i_12] = (arr_25 [i_0] [18] [i_0] [18]);
                        arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] = (var_2 << (1707441730637235827 - 1707441730637235815));
                    }
                    for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
                    {
                        arr_49 [i_13] [i_0] [i_11] [i_0] [i_0] [i_0] [i_0] = (((((var_6 ? var_10 : var_7))) ? (!var_9) : (arr_24 [i_7 - 3] [i_7 - 1] [i_7] [i_7 - 1] [i_11 + 1] [i_7 - 1])));
                        arr_50 [i_0] [i_0] [i_11 - 1] [i_0] [i_0] [i_0] [i_0] = ((!(((arr_22 [i_0] [i_0] [i_0] [i_0]) || var_2))));
                    }
                    for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
                    {
                        arr_54 [i_0] [i_1] [i_1] [i_7] [i_7] [1] [i_14] = (arr_10 [i_0] [i_1] [i_7] [i_1] [i_14]);
                        arr_55 [i_0] [i_1] [i_7] [i_7] [i_0] = (((arr_18 [i_0] [i_7 - 2] [i_7 - 2]) ? 5785 : var_9));
                        var_27 = (((var_3 || var_5) ? (arr_32 [i_14] [i_1] [i_7] [i_11 - 1]) : (arr_48 [i_0] [i_1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_11] [13])));
                    }
                    var_28 = var_9;
                    var_29 = var_13;
                    arr_56 [i_0] = (-2147483647 - 1);
                }
                var_30 = (min(var_30, ((((arr_41 [i_0] [16]) / (arr_41 [i_0] [6]))))));
                arr_57 [i_0] [i_0] [i_0] = (((((arr_9 [i_0] [i_1] [i_7] [i_1] [i_0] [i_7]) / (arr_23 [0] [i_1] [i_1] [i_0]))) - (arr_28 [i_7] [i_1] [i_7] [i_0])));
            }
        }
        var_31 = (((((5968784002127528729 ? (arr_23 [i_0] [i_0] [15] [i_0]) : (arr_22 [i_0] [i_0] [14] [i_0])))) ? (arr_22 [i_0] [i_0] [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        var_32 = (((var_8 ? var_12 : 0)));
    }
    var_33 = (max((var_1 > var_0), var_10));
    var_34 = ((((!var_7) || (!var_1))));
    #pragma endscop
}
