/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [0] = ((arr_1 [i_0]) ? var_11 : (((arr_1 [1]) ? var_3 : -1285292013277355311)));
        var_15 = (arr_0 [17] [i_0]);
        var_16 += (arr_0 [i_0] [16]);
        arr_3 [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                {
                    var_17 = (min(var_17, ((max(((((((arr_8 [i_1] [i_3]) ? var_7 : var_9))) ? ((var_2 ? var_12 : (arr_8 [i_1] [i_3 + 1]))) : var_8)), (((arr_8 [i_2] [i_1]) ? (((arr_7 [i_1] [i_2] [i_3]) ? 1 : (arr_5 [i_1]))) : (arr_4 [i_3 - 1]))))))));
                    arr_11 [i_1] [i_1] = (((arr_8 [i_2] [i_3]) ? 1 : (max((((arr_7 [i_1] [i_2] [i_3]) ? 1 : (arr_6 [i_1] [i_2]))), (((!(arr_8 [i_2] [i_3 - 1]))))))));
                }
            }
        }
        var_18 = (((arr_8 [15] [1]) < (arr_6 [i_1] [i_1])));
        var_19 = min(1, ((var_1 ? (arr_8 [i_1] [5]) : (arr_5 [i_1]))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] [i_4] = ((-(arr_15 [i_4])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_20 = (((58508 ? 1 : 11)));
                    arr_23 [i_4] [i_4] [i_4] [i_4] = (((!(arr_14 [i_4] [i_5]))) && var_5);
                    var_21 = ((var_5 ? (((((arr_20 [i_4] [i_5] [i_6] [i_6]) != (arr_10 [i_5] [i_6]))) ? (((arr_10 [i_4] [i_5]) ? var_12 : (arr_15 [i_5]))) : (((arr_7 [i_4] [19] [i_6]) ? (arr_21 [i_4] [i_5] [i_5] [i_6]) : (arr_15 [i_4]))))) : (((((arr_14 [11] [i_5]) ? (arr_6 [i_5] [i_5]) : (arr_18 [i_4]))) >> ((var_5 ? (arr_19 [i_4] [i_5] [i_6]) : (arr_4 [i_6])))))));
                    var_22 = (((arr_22 [i_4]) && (((1 ? var_1 : (arr_22 [i_6]))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        arr_36 [i_7] [i_7] [i_9] [i_9] [i_10] [i_10] = ((!((!(arr_35 [i_8 - 1] [i_10] [i_8] [i_10] [i_8] [i_8])))));
                        var_23 = 1;
                        var_24 = (max((arr_32 [i_7] [i_8] [i_9] [i_7]), (((!(arr_31 [i_8] [i_8] [i_8 - 1] [i_8 - 1]))))));
                    }
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        var_25 = (((arr_28 [i_7] [i_7]) ? var_10 : 3586239986128820683));
                        arr_40 [i_8] [i_9] [i_7] [i_7] [i_8 - 1] [i_7] = var_13;
                    }
                    for (int i_12 = 1; i_12 < 23;i_12 += 1) /* same iter space */
                    {
                        var_26 = (~(max((((!(arr_26 [i_7])))), ((var_7 ? var_5 : (arr_24 [i_7]))))));
                        var_27 = (min(var_27, (((((((~var_0) ? 1 : ((((arr_39 [i_12] [i_9] [1] [i_7] [24] [i_7]) >= var_8)))))) ? ((((!1) ? (min(0, (arr_30 [i_7] [i_8 + 1] [i_8 + 1]))) : var_6))) : (!1))))));
                    }
                    for (int i_13 = 1; i_13 < 23;i_13 += 1) /* same iter space */
                    {
                        var_28 = 10970929907450028816;
                        var_29 = (max(var_29, (((-(arr_42 [i_7] [i_8] [i_7] [1]))))));
                        arr_46 [i_7] [i_7] [i_7] [i_7] = (((arr_33 [i_8] [i_8 + 1] [23] [i_13 + 1] [i_7]) ? ((((arr_45 [i_13 + 1] [i_13 - 1] [i_8 - 1]) ? (arr_45 [19] [i_13 - 1] [i_8 + 1]) : (arr_45 [i_13] [i_13 - 1] [i_8 - 1])))) : (min(-var_2, (min(var_7, 1034211203))))));
                    }
                    var_30 = ((((min((((arr_37 [i_7] [i_8 + 1] [i_9] [i_7] [i_8] [i_7]) ^ (arr_37 [1] [i_8 - 1] [1] [i_7] [1] [i_7]))), (((!(arr_43 [i_9] [i_8]))))))) ? 1048575 : ((((arr_38 [i_8 - 1] [i_8] [i_9] [i_9]) & 1560159438)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 24;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 24;i_16 += 1)
            {
                {
                    var_31 = (max((((((var_6 + 2147483647) >> 1)))), (((arr_48 [i_16]) ? (arr_48 [i_14]) : var_11))));
                    var_32 = (arr_38 [i_14] [i_15] [i_15] [i_16]);
                    var_33 += ((((!(arr_41 [i_14] [i_15] [i_16] [1] [i_16] [i_16]))) ? (1 & 1) : var_0));
                    var_34 = (min(var_34, (arr_42 [i_14] [i_14] [i_15] [1])));
                    arr_54 [i_14] [i_16] = (arr_43 [i_14] [i_16]);
                }
            }
        }
    }
    var_35 = (max((~var_6), (((!((max(var_4, var_0))))))));
    #pragma endscop
}
