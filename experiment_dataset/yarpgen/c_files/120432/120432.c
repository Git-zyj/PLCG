/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = 1;

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_20 = (arr_2 [i_1]);
            arr_8 [i_0] [i_1] = -1541477885;
        }
        var_21 = var_14;
        arr_9 [i_0] = ((((((arr_5 [i_0] [i_0]) | (arr_5 [i_0] [i_0])))) ? var_9 : (((~(arr_1 [i_0]))))));
        var_22 &= var_0;
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
        {
            var_23 = ((166 ? ((max(((!(arr_7 [i_3] [i_2]))), (arr_3 [i_2])))) : ((min((min((arr_6 [i_2]), var_0)), (arr_7 [i_2] [i_2]))))));
            arr_14 [i_3] = (min(var_5, (min((arr_6 [i_3]), var_14))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_24 = var_6;

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            var_25 = (((arr_20 [i_4]) ? (arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]) : var_8));
                            var_26 = (((arr_19 [i_2] [i_2] [i_4] [i_5] [i_6]) == (arr_12 [i_6])));
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_2] [i_3] [i_4] [i_5] [i_7] = (arr_6 [i_2]);
                            var_27 = (((arr_19 [i_2] [i_3] [i_4] [i_2] [i_7]) ? var_11 : ((((arr_2 [i_7]) ? 79 : (arr_2 [i_3]))))));
                        }
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            var_28 = (max(((var_16 ? -82 : (((max((arr_11 [i_4] [i_4]), (arr_5 [i_2] [i_3]))))))), -var_3));
                            arr_28 [i_4] [i_4] [i_4] [i_3] [i_8] &= ((max((arr_25 [i_2] [i_3] [i_2] [i_2] [i_2]), ((0 ? -81 : var_12)))));
                            var_29 = (max(var_29, (((-(arr_23 [i_2] [i_3] [i_4] [i_5] [i_4] [i_2] [i_5]))))));
                        }
                        arr_29 [i_2] [i_3] = (max((max((((var_12 ? var_14 : var_9))), 9223372036854775804)), (arr_5 [i_4] [i_4])));
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
        {
            var_30 = (110 >= 1038462084);
            var_31 = (min(var_31, (((((((~(arr_25 [i_9] [i_2] [i_2] [i_2] [i_2]))) + 2147483647)) >> ((((max((arr_31 [i_2]), var_4))) - 14093)))))));
        }
        var_32 = (((((-(arr_6 [i_2])))) ? var_13 : (((-(arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]))))));
        var_33 = -9114;
    }
    var_34 = var_0;
    #pragma endscop
}
