/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((((!(var_16 & var_16))))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_21 = (arr_0 [i_0]);
        var_22 ^= (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_23 &= (((arr_4 [0] [i_1]) && (arr_1 [i_1])));
        var_24 = var_1;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_25 = (((arr_8 [i_2] [i_2]) >= (arr_8 [i_2] [i_2])));
        var_26 = (max(var_26, ((((arr_8 [i_2] [i_2]) * (arr_8 [i_2] [i_2]))))));
        var_27 = (((var_11 + 2147483647) >> (((!(arr_8 [1] [1]))))));
        var_28 = (arr_7 [14]);
        var_29 = var_8;
    }

    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_11 [i_3] = 0;

        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {
            var_30 = (((arr_9 [i_4 - 1] [i_4]) ? var_3 : (((max((arr_13 [i_3] [i_4 - 1]), (arr_13 [i_3] [i_4 - 1])))))));
            var_31 = (max(var_31, (arr_10 [i_3] [i_3])));

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_32 = var_9;
                arr_18 [i_5] = (arr_7 [i_4]);
            }
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            var_33 = (((arr_9 [i_3] [i_3]) ? (arr_9 [i_3] [i_6]) : (arr_9 [i_3] [i_6])));
            arr_23 [i_6] = (arr_22 [i_3]);
            var_34 = (arr_14 [12]);
            var_35 = (arr_13 [5] [i_3]);
        }
        for (int i_7 = 2; i_7 < 14;i_7 += 1)
        {
            var_36 = ((((max((arr_16 [i_7 + 1] [i_7 - 2] [i_7 - 1]), (arr_16 [i_7 + 2] [i_7] [i_7 - 1])))) ? (max((arr_16 [i_7 - 1] [i_7] [i_7 + 1]), (arr_16 [i_7 - 1] [i_7] [i_7 - 1]))) : (max((arr_16 [i_7 - 1] [i_7] [i_7 + 2]), (arr_16 [i_7 - 2] [i_7] [i_7 + 2])))));

            /* vectorizable */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        {
                            var_37 = ((~(arr_14 [i_7 + 1])));
                            var_38 *= var_0;
                        }
                    }
                }
                arr_35 [i_3] [i_3] [i_3] [i_3] = (arr_10 [i_8] [i_7 - 2]);
            }
            arr_36 [i_3] [i_7 + 1] &= ((((((arr_33 [i_3] [i_7 + 2] [i_3] [i_7] [i_3] [i_3] [i_3]) + 2147483647)) << (((var_11 + 57) - 14)))) << (((((max((arr_33 [i_7] [i_7 - 2] [i_3] [i_7 + 1] [i_3] [i_3] [i_3]), (arr_33 [1] [i_7 + 1] [1] [i_3] [i_7] [i_3] [i_3]))) + 1992512084)) - 10)));
        }
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            var_39 = (max(var_39, ((((-(arr_26 [i_11] [i_11] [i_11] [i_3])))))));
            var_40 = (min(var_40, ((max(1718220590265425201, 51654)))));
        }

        for (int i_12 = 2; i_12 < 15;i_12 += 1)
        {
            var_41 = ((min(((var_0 + (arr_20 [i_12] [i_3] [i_3]))), (arr_34 [i_3] [i_3]))));
            var_42 = (arr_37 [i_3] [i_3] [i_12]);
            var_43 = (arr_34 [4] [i_12]);
        }
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            arr_47 [i_3] = (arr_8 [i_3] [i_3]);
            var_44 = (arr_20 [7] [i_3] [i_3]);
        }
    }
    var_45 += (0 * var_6);
    #pragma endscop
}
