/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((255 << ((((max(48476, 17059))) - 48464)))) >> (((max(((48480 << (var_0 - 97))), (max(var_6, var_0)))) - 1830232099))));
    var_12 &= 56;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((((65535 & (arr_0 [i_0]))) | (arr_0 [i_0])));
        var_13 = (((arr_0 [i_0 - 3]) > (arr_0 [i_0 - 4])));
        var_14 |= ((!(arr_1 [i_0] [i_0])));
        arr_3 [i_0] = ((((arr_0 [i_0]) ? var_3 : (arr_0 [11]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_15 = (arr_5 [i_1]);

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_16 = -76;
            arr_8 [i_1] [i_1] [i_1] = (arr_4 [i_2]);
            var_17 = (min(var_17, var_9));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            arr_11 [i_1] = (!103);
            arr_12 [i_1] [i_3] = (((49734 || 21908) + ((var_2 + (arr_10 [i_3] [i_3])))));
            arr_13 [i_1] [i_1] = var_0;
            var_18 = var_6;
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_17 [i_1] = (var_1 > var_0);
            arr_18 [i_1] [i_1] = var_10;
            arr_19 [i_1] [i_1] [i_1] = ((var_1 < (arr_9 [i_4])));

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                var_19 = (max(var_19, var_1));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        {
                            arr_26 [i_1] [i_1] [i_1] = var_4;
                            var_20 = -1142748967235995579;
                        }
                    }
                }
            }
            for (int i_8 = 3; i_8 < 16;i_8 += 1)
            {
                var_21 = (arr_10 [i_1] [i_8 - 3]);

                for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                {
                    var_22 = 1611631245;
                    var_23 |= (((arr_21 [i_1] [i_8 - 3] [i_1] [i_4]) ? (var_10 + var_5) : var_8));
                    arr_31 [i_1] [i_1] [i_8] [i_1] = 1716945726;
                }
                for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                {
                    arr_34 [i_1] [i_1] = 2147483647;

                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        var_24 = (((arr_22 [i_4] [9]) < ((var_6 ? (arr_0 [i_10]) : (arr_1 [i_8 + 2] [i_8 + 2])))));
                        arr_38 [i_10] [i_10] [i_8] [i_4] [i_10] |= (((arr_1 [i_1] [i_1]) + (((!(arr_20 [i_1] [i_1]))))));
                        var_25 = (var_10 > var_1);
                    }
                }
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    arr_41 [i_1] [i_1] [i_1] [i_1] = (((arr_16 [i_8 - 2]) || ((!(arr_32 [i_12] [i_12] [i_8] [i_8] [i_12])))));
                    var_26 = (arr_1 [i_1] [i_8 + 1]);
                }
            }
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
        {
            arr_45 [i_1] [i_1] [i_1] = ((((var_8 ? var_8 : var_7)) >> (((((arr_42 [i_13]) << (arr_9 [1]))) - 2106913592))));
            arr_46 [i_1] = var_7;
        }
        var_27 = (arr_4 [i_1]);
        var_28 = (~226469978963225801);
    }
    for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
    {
        var_29 = (min(var_29, ((max((((arr_43 [i_14] [i_14] [i_14]) ? (arr_43 [i_14] [i_14] [i_14]) : (arr_43 [i_14] [i_14] [i_14]))), (min((arr_43 [i_14] [17] [i_14]), (arr_44 [i_14]))))))));
        arr_49 [i_14] [i_14] = (max((arr_47 [i_14]), ((~(((arr_35 [i_14] [i_14] [i_14] [i_14] [i_14]) ? var_10 : (arr_24 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])))))));
        var_30 = (((((-(arr_22 [i_14] [i_14])))) && ((((!var_10) ? (arr_1 [i_14] [i_14]) : (max(-622722863, 1)))))));
        var_31 = ((((1 ? -1142748967235995595 : 1)) > ((((arr_7 [i_14] [i_14] [i_14]) + (arr_7 [i_14] [i_14] [i_14]))))));
    }
    #pragma endscop
}
