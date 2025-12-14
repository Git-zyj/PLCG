/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (max(((0 ? ((((arr_1 [i_1] [i_0]) / var_0))) : (max(var_14, var_10)))), ((((var_17 * var_1) / var_6)))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
                        {
                            var_20 |= min((!var_5), ((3 & (!1))));
                            var_21 = (max(var_21, ((min(var_19, ((((max(-4538, var_19))) ? (arr_0 [4]) : (max(var_12, var_14)))))))));
                        }
                        for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            var_22 = (min(var_22, (min(1, ((((min(var_4, var_9))) ? ((max(var_5, (arr_0 [1])))) : (arr_1 [2] [2])))))));
                            arr_18 [i_0] [i_0] [i_0] = 71916856549572608;
                        }
                        for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_6] [i_3] [i_0] [8] [i_0] [i_1] [i_0] = (arr_14 [i_0] [i_3] [i_0]);
                            var_23 -= (~(((((var_6 ? var_1 : var_1))) ? var_12 : ((~(arr_22 [i_0] [i_1] [i_6]))))));
                        }
                        var_24 = ((((min((1 + var_18), (max((arr_15 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3]), var_15))))) ? (max((max(var_0, (arr_15 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3]))), 42216)) : ((((!((min(23321, var_10)))))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        arr_29 [i_0] [i_1] = var_18;
                        arr_30 [i_7] [i_7] [i_7] |= (min((arr_25 [i_0] [i_7]), (((arr_4 [i_7] [10] [i_7 + 1]) >= (arr_4 [i_7] [i_7] [i_7 - 1])))));
                        arr_31 [i_0] [i_1] = var_2;
                    }
                }
            }
        }
        for (int i_9 = 1; i_9 < 9;i_9 += 1)
        {
            arr_35 [i_0] [i_0] = (arr_11 [4] [i_9] [i_9] [i_9] [i_9]);
            var_25 = (max(var_25, (((-(arr_14 [6] [6] [i_9]))))));
        }
        var_26 = (min(var_26, (((-var_1 < (((!(arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
    }

    for (int i_10 = 3; i_10 < 19;i_10 += 1)
    {
        arr_39 [i_10] [i_10] = ((min((~var_6), var_13)));
        var_27 = (max(var_27, (arr_38 [i_10] [i_10])));
    }
    var_28 = ((var_9 >> (4503599627370495 - 4503599627370479)));
    #pragma endscop
}
