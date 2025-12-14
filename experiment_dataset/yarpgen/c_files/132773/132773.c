/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_12 = (arr_3 [i_1] [i_0] [i_0]);
            var_13 = (max(var_13, ((((((max(var_6, (arr_3 [14] [i_1] [2]))) ? ((((arr_0 [i_0]) || var_7))) : var_0)))))));
            var_14 += ((var_8 ? ((max((max(var_11, var_6)), (arr_3 [i_0] [i_0] [i_0])))) : ((var_10 ? var_9 : (((arr_0 [i_1]) ? (arr_1 [i_1] [i_1]) : (arr_3 [i_0] [i_0] [i_0])))))));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_15 = (min((max(((var_9 ? (arr_0 [i_0]) : var_2)), (~var_2))), (max(((-(arr_1 [i_0] [i_0]))), (arr_0 [i_0])))));

            /* vectorizable */
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                var_16 ^= var_6;

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        arr_14 [i_2] [i_3] [i_3 + 1] = (!var_6);
                        var_17 = (min(var_17, (((!(arr_9 [i_0] [i_0] [i_0] [i_5]))))));
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        arr_19 [11] [i_2] [i_2] = ((~(arr_3 [i_3 + 1] [i_3 - 2] [i_3 + 1])));
                        var_18 = ((var_8 ? var_10 : var_10));
                        var_19 &= var_1;
                        var_20 *= (arr_12 [i_6] [i_4] [i_3] [i_2] [i_3] [i_2] [i_0]);
                    }
                    var_21 &= var_5;
                    var_22 = ((~(arr_18 [i_3 + 2] [i_3] [i_3 - 2] [i_3 + 1] [7] [i_3 + 1])));
                    var_23 = (min(var_23, var_11));
                }

                for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_24 = (arr_26 [i_7] [i_7] [1] [i_7] [i_7]);
                        var_25 = ((~(var_11 && var_0)));
                    }
                    for (int i_9 = 1; i_9 < 13;i_9 += 1)
                    {
                        var_26 = ((var_7 ? (((var_2 || (arr_11 [i_0] [i_2] [0] [i_0])))) : (arr_7 [6] [i_2])));
                        var_27 = var_11;
                    }
                    var_28 ^= var_7;
                }
                for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                {
                    var_29 = (arr_21 [i_3] [i_10] [i_3] [i_10] [i_3]);
                    arr_34 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (((~var_11) ? (arr_31 [i_0] [i_0] [i_0] [i_2] [i_0] [i_2]) : (arr_12 [i_3] [i_3] [i_3] [i_3 - 2] [i_2] [i_3 + 1] [i_3 - 1])));
                }
            }
        }
        for (int i_11 = 4; i_11 < 14;i_11 += 1)
        {
            var_30 += (max((min((min((arr_4 [i_0]), var_0)), (arr_5 [i_0] [i_11 + 1]))), (min(var_3, (arr_26 [i_11 - 1] [i_11 - 2] [i_11 - 2] [i_11 - 2] [8])))));
            arr_37 [i_0] [i_0] = ((~((((arr_28 [i_0]) >= (arr_16 [i_0] [14] [i_11 - 1] [10] [i_11]))))));
            arr_38 [12] [i_11] = (((((!var_6) % (~var_7))) < ((-((var_9 ? var_4 : (arr_24 [i_0] [i_0] [i_0] [i_11] [i_0])))))));
        }

        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            arr_42 [i_0] |= (!16461);
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    {
                        arr_48 [i_12] = (max((((((-(arr_23 [i_12] [i_12]))) / (~var_3)))), ((-((~(arr_29 [i_12] [i_12] [i_12])))))));
                        var_31 = (max(var_31, ((((!var_5) << (((arr_25 [i_0] [i_0] [i_0] [i_14] [12]) - 15149)))))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            arr_51 [i_0] [i_15] = (arr_10 [i_0] [i_0] [i_0] [i_0]);
            var_32 = var_6;
            var_33 *= ((var_8 >= (arr_36 [i_0] [i_15])));
            var_34 = ((!(!var_10)));
            var_35 ^= ((!(var_10 & var_1)));
        }
    }

    for (int i_16 = 0; i_16 < 20;i_16 += 1)
    {
        var_36 = (arr_52 [i_16] [i_16]);
        arr_54 [i_16] = (max((max(-var_10, (((~(arr_53 [i_16])))))), var_6));
    }
    var_37 = -var_3;
    var_38 = (max((((~(var_8 > var_11)))), (((((var_10 ? var_6 : var_5))) ? (min(var_9, var_7)) : (max(var_10, var_6))))));
    var_39 = ((((max(-var_3, var_6))) || ((!((min(var_8, var_8)))))));
    #pragma endscop
}
