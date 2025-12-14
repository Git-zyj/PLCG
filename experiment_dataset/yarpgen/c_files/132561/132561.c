/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_3, 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = var_8;

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_19 = 416114832;
                    var_20 = (!var_3);
                    var_21 = ((arr_3 [i_0] [i_1]) ? 28 : (arr_1 [i_0 + 1]));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_22 &= (arr_8 [i_0]);
                        var_23 = ((((min(((var_5 ? (arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3]) : 227)), (arr_11 [18] [16] [i_2] [i_3] [i_3])))) ? (arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]) : (((1785678168 ? 0 : 28)))));
                    }
                }
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_24 -= var_9;
                    arr_17 [i_4] [i_1] [i_4] = 82432386;
                    arr_18 [i_4] [i_4] = var_13;
                }

                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_25 += (arr_9 [i_0 + 1] [i_0 + 1]);
                    var_26 &= 28;

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_27 = (((((arr_8 [i_0 + 1]) >= -20571)) ? (((var_11 > var_16) / (arr_13 [4] [i_1] [i_5] [i_5] [i_6] [i_6]))) : (arr_8 [i_0 + 1])));
                        var_28 = (min(var_28, (((((arr_19 [i_0] [i_0] [i_5] [i_6]) ? (arr_9 [i_1] [i_6]) : (arr_19 [i_0 + 1] [13] [i_5] [i_6])))))));
                    }
                    var_29 &= 1;
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    var_30 *= -110;
                    var_31 ^= (arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                    arr_26 [i_0] [17] [i_7] = (arr_24 [i_1] [i_1] [i_1] [i_1]);
                }

                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {
                    arr_29 [i_0] [i_1] [i_8] = 0;
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            {
                                var_32 = (((((arr_13 [i_0 + 1] [1] [i_8 + 1] [i_8] [i_9 + 1] [i_8]) ? (((arr_19 [i_0] [i_1] [i_8] [i_1]) & var_7)) : (arr_1 [i_9 - 3])))) ? (arr_8 [i_0 + 1]) : (6 || 249));
                                arr_35 [i_8] = var_7;
                                var_33 = max(var_14, (arr_24 [i_10] [i_9] [1] [1]));
                                var_34 = (min((arr_9 [i_0] [22]), ((((max((arr_20 [i_0 + 1] [i_1] [i_0 + 1] [i_9 + 2]), -6880714879062995724))) ? var_3 : ((1 ? 6 : -15))))));
                                arr_36 [i_0] [i_1] [i_1] [i_10] [i_9] [i_10] &= arr_19 [i_0 + 1] [i_1] [i_8] [i_8];
                            }
                        }
                    }
                    var_35 = ((var_7 % ((min((arr_6 [i_0] [22] [1]), var_15)))));
                    var_36 = ((min(((var_5 ? (arr_33 [i_0 + 1] [i_1] [i_1] [i_8 - 2] [21] [i_0 + 1]) : var_7)), ((var_8 ^ (arr_30 [i_0 + 1] [i_0 + 1] [i_1] [i_1]))))));
                }
                for (int i_11 = 2; i_11 < 21;i_11 += 1)
                {
                    var_37 = var_16;
                    var_38 = ((var_5 << (((((min((arr_33 [19] [i_0] [i_0] [i_1] [i_1] [i_11 + 1]), (arr_22 [i_11]))))) + 69))));
                }
            }
        }
    }

    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 17;i_14 += 1)
            {
                {

                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {

                        for (int i_16 = 0; i_16 < 18;i_16 += 1)
                        {
                            var_39 = var_6;
                            var_40 = var_11;
                        }
                        arr_51 [i_14] [i_14] [i_12] [i_15] [i_12] = (((arr_46 [i_12] [i_12] [i_12] [i_14] [i_12]) * ((1 / (arr_25 [i_14 + 1])))));
                    }
                    var_41 = var_11;
                    arr_52 [i_14] [i_13] [i_13] [i_14] = var_13;
                    var_42 ^= (max(179, 120));

                    for (int i_17 = 0; i_17 < 18;i_17 += 1)
                    {
                        var_43 = (max(var_43, (-249 > 12386761210536157138)));
                        var_44 = var_5;
                    }
                    /* vectorizable */
                    for (int i_18 = 4; i_18 < 16;i_18 += 1)
                    {
                        var_45 = var_13;
                        arr_59 [i_18] [i_14] [i_14] [i_12] = (((arr_37 [i_14 + 1] [i_14 - 1]) ? var_16 : -29));
                        var_46 ^= ((63 ? (arr_15 [i_14 + 1]) : (arr_2 [i_14 - 1])));
                        var_47 = (arr_0 [i_14]);
                    }
                }
            }
        }
        arr_60 [1] = ((((((((arr_44 [i_12] [i_12]) ? var_1 : var_16))) ? var_4 : (arr_6 [i_12] [i_12] [8]))) > (arr_37 [22] [i_12])));
    }
    var_48 = var_5;
    #pragma endscop
}
