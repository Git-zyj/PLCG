/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [14] = -29115;
        var_20 = arr_0 [i_0] [i_0];
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 3; i_2 < 24;i_2 += 1) /* same iter space */
        {
            arr_9 [i_1] [i_1 - 1] = (arr_4 [i_2 - 1]);
            var_21 = (((arr_5 [i_1 - 1]) ? 65520 : (arr_5 [i_2 - 1])));
            var_22 = (((((arr_8 [i_2 - 2] [i_1] [i_1]) ? (arr_4 [i_2]) : -6926012297731849797)) >> (var_14 - 11563419897044207620)));
            var_23 -= (arr_3 [i_1]);
            arr_10 [i_2] = ((-(arr_5 [i_1 - 1])));
        }
        for (int i_3 = 3; i_3 < 24;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        arr_21 [i_1 - 1] [i_3] [i_4 - 1] [i_5] = 0;
                        arr_22 [i_5] [i_3] [i_3] [i_1 - 1] = var_15;
                        var_24 = (min(var_24, var_10));

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_26 [i_1] [i_3 + 1] [i_3] [i_4 + 3] [i_4 + 1] [i_5] [i_6] = var_15;
                            var_25 = ((-(arr_18 [i_1 - 1] [i_3 - 3] [i_1 - 1] [i_4 - 1])));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_26 = 0;
                            var_27 = ((-(arr_4 [i_1])));
                            arr_30 [i_5] [i_3 + 1] [i_5] [i_3] [i_7] [i_7] = (arr_14 [i_3] [i_3 - 3]);
                            arr_31 [i_7] [i_5] [i_4] [i_3] [i_7] = arr_12 [i_3];
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            var_28 = (arr_24 [i_1] [i_3] [i_3] [i_3 + 1]);
                            arr_36 [i_1] [i_3] [i_4 + 3] [i_3] [i_1] = var_15;
                        }
                        for (int i_9 = 2; i_9 < 24;i_9 += 1)
                        {
                            var_29 = (((arr_27 [i_4 + 3] [i_1 - 1]) ? var_19 : (arr_27 [i_4 - 1] [i_1 - 1])));
                            arr_39 [14] [14] [14] [i_3] [i_9 - 1] = (arr_7 [i_3]);
                            arr_40 [i_1] [i_3] [i_1] = (((arr_25 [i_3] [i_3 - 2] [i_3 + 1] [i_3 - 2] [i_3 - 1]) ? (arr_25 [14] [i_3 - 2] [i_3 - 3] [i_3 + 1] [i_3 - 2]) : (arr_25 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 3])));
                            var_30 ^= (-2 >= 255);
                        }
                        var_31 = var_4;
                    }
                }
            }
            var_32 = ((~((~(arr_12 [i_3])))));
            var_33 = 0;
        }
        arr_41 [i_1] = (arr_15 [0] [0] [i_1 - 1] [i_1]);
        var_34 = 255;
        var_35 *= var_4;
        var_36 = arr_37 [i_1] [i_1] [8] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1];
    }
    for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
    {
        var_37 = (arr_37 [i_10] [i_10] [16] [i_10] [i_10] [i_10 - 1] [i_10 - 1]);
        arr_44 [i_10] = ((!((((arr_27 [i_10] [i_10]) ? (arr_24 [i_10 - 1] [16] [i_10] [i_10]) : var_17)))));
        var_38 = (((min((arr_34 [i_10] [i_10 - 1] [10] [i_10] [i_10 - 1]), (arr_34 [4] [i_10 - 1] [16] [6] [i_10]))) == (((arr_24 [i_10 - 1] [0] [0] [i_10 - 1]) + (arr_24 [i_10 - 1] [18] [18] [i_10 - 1])))));
    }

    for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
    {
        var_39 = ((((!(arr_33 [12] [i_11] [i_11] [i_11] [i_11] [i_11]))) ? ((-(((arr_7 [i_11]) ? (arr_45 [i_11] [i_11]) : (arr_3 [i_11]))))) : (((arr_11 [i_11] [i_11] [i_11]) ? 1 : (min(0, var_15))))));
        arr_47 [i_11] [i_11] = (min(-20076, ((((arr_8 [i_11] [i_11] [i_11]) || (arr_8 [i_11] [i_11] [i_11]))))));
        var_40 = ((((((-(arr_0 [i_11] [i_11]))))) ? var_15 : ((((arr_6 [i_11]) <= var_12)))));
        var_41 = (~((((arr_5 [i_11]) == 0))));
        var_42 = (min(var_42, (arr_16 [i_11] [i_11])));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
    {
        var_43 = (((((var_3 == (arr_12 [24])))) >> (((arr_48 [i_12]) - 9086))));
        var_44 |= (((arr_16 [i_12] [i_12]) >> (((arr_51 [i_12] [i_12]) + 149386465))));
        var_45 = (max(var_45, (arr_48 [i_12])));
        arr_52 [i_12] = (arr_43 [i_12]);
    }
    for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
    {
        var_46 = (max((max(1452699814, 1452699814)), (((13 ? var_18 : (arr_6 [i_13]))))));
        arr_57 [i_13] [i_13] = 11;
    }
    var_47 = (min(var_47, var_0));
    #pragma endscop
}
