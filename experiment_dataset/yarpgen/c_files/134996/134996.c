/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (~0);
    var_14 = (min(var_14, (((var_10 ? var_10 : (min((min((-9223372036854775807 - 1), (-9223372036854775807 - 1))), ((var_8 ? -9223372036854775797 : var_5)))))))));

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [i_1] = arr_2 [i_0 - 1];

            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                arr_11 [i_0 - 3] [i_2 + 1] [i_2 + 1] [i_1] = arr_2 [i_1 + 1];
                var_15 = (min(var_15, (((~(arr_10 [i_1 - 1] [i_2 + 1] [i_2 + 1] [i_0 - 3]))))));
            }
        }
        var_16 = (((((max((arr_8 [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0 - 2]), (-9223372036854775807 - 1))) / var_7))) & (arr_9 [i_0] [i_0] [i_0] [i_0]));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_15 [i_3] = ((9223372036854775796 ? var_9 : ((min((((arr_14 [i_3]) ? (arr_12 [i_3] [4]) : var_3)), ((min(var_6, var_2))))))));
        var_17 += ((!((max((arr_12 [i_3] [i_3]), (((arr_12 [i_3] [i_3]) - (arr_14 [i_3]))))))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_18 += (max((max(var_10, 0)), (((5368276901715908561 ? (arr_17 [i_4]) : (arr_17 [i_4]))))));
        arr_18 [i_4] = ((-((-(var_6 >> var_0)))));
        var_19 &= (arr_17 [i_4]);

        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            var_20 = (min(var_20, ((-((-(min(252, var_8))))))));

            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                var_21 = (min(1, (arr_16 [i_4])));
                var_22 = var_3;
                var_23 = 9223372036854775796;
                arr_25 [i_5] = (((((-(((arr_23 [i_4] [i_5] [i_5]) ? (arr_17 [i_5]) : (arr_17 [18])))))) ? (((var_2 < ((min((arr_17 [i_4]), var_11)))))) : (((var_3 >= (((arr_21 [13] [13] [i_4]) ? (arr_22 [7] [7] [i_4]) : (arr_19 [i_6 - 1]))))))));
                arr_26 [i_5] [i_5] [i_6] = (((((max((arr_22 [i_4] [i_4] [i_4]), (arr_23 [i_6] [16] [i_6]))) - ((0 >> (((-9223372036854775805 - -9223372036854775781) + 44)))))) & var_3));
            }
        }
        for (int i_7 = 2; i_7 < 22;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
            {
                arr_31 [14] [i_7] [i_8] |= var_3;
                var_24 = (min((min((arr_20 [i_7 + 1] [i_7 + 1]), -9223372036854775797)), ((-(arr_22 [i_7 + 1] [i_7] [i_7 - 1])))));
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
            {
                arr_34 [i_4] [i_9] [i_7] [i_9] = (((arr_29 [i_4] [i_7 - 2]) ? ((max(var_2, var_0))) : (((arr_20 [i_4] [i_7 - 2]) - (arr_28 [i_9] [i_7 - 2])))));
                arr_35 [i_9] [16] [16] [i_9] = ((((arr_16 [i_9]) ? (arr_32 [i_4] [i_7 - 2] [i_4]) : (max((arr_23 [i_4] [i_7 + 1] [i_7 + 1]), (arr_28 [i_7] [i_4]))))));
            }
            var_25 = (-9223372036854775805 ? ((((var_5 ? (arr_19 [i_4]) : (arr_32 [i_7 + 1] [i_4] [i_4]))) >> 7)) : 41);
        }
    }
    #pragma endscop
}
