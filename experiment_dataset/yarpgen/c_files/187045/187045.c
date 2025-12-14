/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(((((min(1, 981025815))) ? var_14 : var_18)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (min((min((~var_18), (3758096384 & 1))), (min((!var_4), (~var_11)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_12 [i_4] [i_3] [i_2] [i_2] [i_2] [i_0 - 3] [i_0] = 12582912;
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = var_2;
                            arr_14 [i_0] [i_1] [i_0] = var_11;
                            arr_15 [i_0] [0] [i_2] [i_0] [i_4] = (arr_10 [i_4] [i_3] [4] [i_1] [i_0]);
                        }
                        arr_16 [i_0] = ((!((var_19 && (arr_2 [i_0] [i_0])))));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_19 [i_0] [i_1] [i_2] [13] = (i_0 % 2 == zero) ? ((min(((((arr_2 [i_0 + 2] [i_0]) * var_9))), (((((arr_1 [i_0]) + 9223372036854775807)) << (-1478538364 - 18446744072231013252)))))) : ((min(((((arr_2 [i_0 + 2] [i_0]) * var_9))), (((((((arr_1 [i_0]) - 9223372036854775807)) + 9223372036854775807)) << (-1478538364 - 18446744072231013252))))));
                        arr_20 [i_0] [i_1] [i_1] [i_0] = (min(1478538364, 0));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            arr_26 [i_2] [i_6] [i_2] [i_1] [i_2] &= var_19;
                            arr_27 [i_0] [i_0] = (arr_8 [i_7] [i_7] [i_6] [i_2] [i_1] [i_0]);
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                        {
                            arr_30 [i_0 - 3] [8] [i_0] [i_1] [i_2] [i_6] [i_8] = ((var_1 ? 0 : 224));
                            arr_31 [i_0 + 2] [i_1] [1] [i_6] [i_2] = var_15;
                            arr_32 [i_0] [i_2] [i_2] [i_0] = ((1 ? 126 : 1028955417));
                        }
                        for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                        {
                            arr_37 [i_6] [i_1] [0] = 100;
                            arr_38 [i_1] [i_0] = (((arr_4 [i_0 - 2]) ? (arr_4 [i_0 - 3]) : (arr_4 [i_0 - 1])));
                        }
                        for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                        {
                            arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] = 1;
                            arr_42 [i_0] = var_16;
                            arr_43 [i_0] = ((!(arr_28 [9] [i_0] [i_1] [i_0 + 2] [i_10])));
                            arr_44 [i_6] [i_1] [i_2] = ((32 ? 20672 : -4380680512656145853));
                        }
                        arr_45 [14] [i_1] [i_2] [i_2] = var_11;
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                    {
                        arr_48 [i_0] = (((!-1036824183625465522) != var_1));
                        arr_49 [i_11] [i_0] [i_0] [i_0] = arr_8 [i_0] [5] [i_1] [i_2] [i_2] [5];
                        arr_50 [i_0 + 2] [4] [i_0] [i_2] = (((var_3 || 223) ? (arr_46 [i_0] [i_11]) : (arr_25 [i_2] [i_0 - 2] [i_0 - 2] [i_11] [i_11] [i_11])));
                    }
                    arr_51 [i_0] [i_1] [i_2] [i_2] = (min((((arr_28 [18] [i_2] [i_2] [i_1] [12]) ? (arr_28 [i_0 - 2] [i_2] [i_1] [i_2] [i_2]) : (arr_28 [i_0 - 1] [i_2] [i_0] [i_0 - 1] [i_0 - 2]))), (!var_0)));
                    arr_52 [i_2] [i_2] [i_0] &= var_11;
                }
            }
        }
    }
    #pragma endscop
}
