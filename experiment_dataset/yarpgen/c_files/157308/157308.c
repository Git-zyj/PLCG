/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [0] = (((18014398442373120 ^ 1) ? (((arr_1 [i_0] [9]) * var_1)) : var_11));
        arr_3 [i_0] [i_0] = 25;
        var_13 = (((!var_5) ? ((var_2 ? var_2 : 16562)) : (arr_1 [i_0] [i_0])));
        arr_4 [7] [i_0] = var_7;
    }
    for (int i_1 = 3; i_1 < 24;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            arr_11 [i_2] [10] = ((~(min((arr_7 [19] [i_2 + 3]), (arr_7 [i_2 + 1] [i_2 + 3])))));
            arr_12 [i_2] = var_2;
            arr_13 [i_2] [i_2] [i_2] = (((32761 || 8) ? -1 : ((~(-26 ^ 50)))));
            arr_14 [i_2] = var_9;
        }
        for (int i_3 = 1; i_3 < 24;i_3 += 1)
        {
            arr_19 [i_1 - 3] = var_1;
            arr_20 [i_1] = ((((((arr_8 [i_1 - 2] [i_1 + 1]) - var_9))) ? (max((((var_3 ? var_12 : var_3))), ((50 ? 10092 : 67108863)))) : -43));
        }
        arr_21 [i_1 - 1] [i_1 - 1] = -8485;
    }
    for (int i_4 = 3; i_4 < 24;i_4 += 1) /* same iter space */
    {
        arr_26 [i_4] = (((((min(var_0, (arr_22 [i_4]))) ? var_3 : -1848274002))));
        var_14 = ((((min((arr_22 [i_4 - 3]), var_11))) ? (arr_7 [i_4 - 2] [i_4 - 1]) : ((((arr_6 [i_4 - 2] [i_4 - 2]) ? (arr_6 [i_4 - 3] [i_4 - 1]) : (arr_6 [i_4] [16]))))));

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            arr_30 [i_4 - 1] [i_4] [3] &= ((((5533 ? -var_0 : ((var_2 ? (arr_7 [i_4 - 2] [i_4 - 2]) : 17)))) != (((((arr_29 [i_5] [i_5]) || ((((arr_16 [9] [9] [9]) ? (arr_23 [9]) : var_1)))))))));
            arr_31 [i_4] [i_5] = ((~((-var_0 ? ((var_4 ? (arr_5 [i_4 - 3] [i_5]) : var_11)) : ((var_0 ? (arr_18 [i_4]) : var_3))))));
        }
    }
    for (int i_6 = 3; i_6 < 24;i_6 += 1) /* same iter space */
    {
        arr_36 [7] [i_6] = (206 ? (max((max(var_2, (arr_8 [17] [i_6]))), ((var_8 ? (arr_34 [i_6 + 1]) : var_2)))) : (((((var_7 ? 17 : var_12))) ? var_9 : ((var_0 ? var_9 : (arr_9 [19]))))));
        arr_37 [12] &= (min(((((!(arr_6 [5] [5]))))), (max((max(474889119, (arr_28 [i_6] [i_6]))), (arr_16 [i_6] [6] [22])))));
        var_15 = (!29);
        arr_38 [i_6] = 24;
    }
    var_16 = var_12;
    #pragma endscop
}
