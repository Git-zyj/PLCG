/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((1549738416 / 1954365713277672313) * ((((var_9 & var_2) ? (~var_15) : ((var_2 >> (1954365713277672313 - 1954365713277672285)))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_20 |= arr_1 [i_0];
        arr_2 [i_0] = var_2;
        arr_3 [i_0] [i_0] = (var_17 & var_2);
        var_21 -= (4294967291 - 0);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_22 = (max(var_22, (((((((((!(arr_0 [8] [i_1]))))) <= (((arr_4 [i_1]) ? var_16 : var_14)))) ? ((max(var_14, var_18))) : (((arr_0 [i_1] [i_1]) | (arr_5 [i_1]))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    var_23 = (!((((var_9 && (arr_7 [i_1] [i_1] [i_1]))))));

                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        var_24 += var_7;
                        var_25 *= (((var_1 * (arr_9 [i_1] [i_2]))) >= (var_11 < var_16));
                        var_26 = (min(var_26, (arr_10 [i_1])));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_27 = (var_2 * var_0);
                        var_28 = (min(var_28, (arr_9 [i_3] [i_5])));
                        var_29 = (((((arr_15 [i_5] [i_5] [i_3] [i_3] [i_1] [i_1]) * var_10)) <= (arr_14 [1])));
                        var_30 = var_14;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_31 = ((arr_12 [i_1] [i_2] [i_1] [i_1]) >= var_14);
                        var_32 = var_14;
                        var_33 = ((!((((arr_14 [i_1]) ? (arr_0 [i_1] [i_1]) : var_14)))));
                        var_34 = (536870911 <= 1);
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_35 = (max(var_35, var_17));
                        var_36 = (arr_12 [i_7] [1] [i_2] [i_1]);
                    }
                }
            }
        }
        arr_22 [i_1] = 39054;
        var_37 = var_12;
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
    {
        var_38 &= (((arr_7 [i_8] [i_8] [i_8]) ? (arr_7 [i_8] [i_8] [i_8]) : var_16));
        arr_25 [i_8] [i_8] = (((arr_20 [i_8] [i_8]) & (arr_20 [i_8] [i_8])));
        var_39 = var_6;
    }
    for (int i_9 = 1; i_9 < 20;i_9 += 1)
    {
        var_40 = (max(var_40, (((~(((!((max(var_7, var_10)))))))))));
        arr_28 [i_9] |= (((((arr_27 [i_9 + 2]) | (arr_27 [i_9 + 2]))) * (((arr_27 [i_9 + 2]) >> (var_15 + 19867)))));
        var_41 = (max(var_41, ((((arr_27 [i_9 - 1]) - ((var_10 - (arr_27 [i_9 + 1]))))))));
        arr_29 [i_9] [i_9 + 1] = (((((((arr_26 [i_9]) - 0))) * (((arr_27 [i_9]) * var_15)))));
        var_42 = (arr_27 [i_9]);
    }
    #pragma endscop
}
