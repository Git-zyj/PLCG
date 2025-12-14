/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((!((!(arr_0 [i_0])))));
        arr_3 [i_0] = (-(((arr_0 [i_0]) * (var_16 / var_2))));
        arr_4 [i_0] = (((((((arr_0 [i_0]) != var_13)) ? ((-(arr_1 [i_0]))) : var_17)) != (((((var_10 ? var_4 : (arr_1 [i_0]))) != (((!(arr_0 [i_0])))))))));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_19 ^= (((arr_0 [i_1 - 2]) != (min((arr_1 [i_1 - 1]), (arr_0 [i_1 - 1])))));
        var_20 = ((!((-var_16 == (((var_13 != (arr_0 [i_1 - 1]))))))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_21 = ((~(min((arr_1 [i_2]), (arr_8 [i_2])))));

        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {

            /* vectorizable */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_22 = (max(var_22, (((var_6 ? (arr_12 [12] [i_3 - 1]) : -var_14)))));
                arr_13 [i_4] [i_2] [i_2] [i_2] = 3689565130;

                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_23 *= (((arr_12 [i_5] [i_5]) != var_6));
                    var_24 = (min(var_24, ((-var_7 ? var_12 : ((878217940 ? var_14 : var_17))))));
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {

                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        arr_24 [i_2] = (((((arr_15 [i_2] [i_2] [i_2] [i_2]) == -723938248)) ? (arr_11 [i_2] [i_2] [i_2] [i_3 + 1]) : (arr_19 [i_2] [i_3] [7] [i_6] [i_7 + 2] [i_6])));
                        arr_25 [i_4] [16] |= (((arr_8 [i_2]) != (arr_8 [i_2])));
                        var_25 = (arr_20 [i_2] [i_7 + 2] [i_7 - 1] [3]);
                        var_26 = 393667526;
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                    {
                        var_27 ^= arr_12 [i_8] [i_3 - 3];
                        arr_28 [i_2] [i_2] = -740999037;
                    }
                    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                    {
                        arr_31 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] |= (-(arr_15 [i_3 + 1] [i_9] [i_4] [i_3 + 1]));
                        var_28 = ((((var_17 ? var_12 : (arr_19 [13] [13] [i_4] [i_6] [i_4] [i_4]))) != (arr_22 [19] [i_2])));
                    }
                    arr_32 [i_2] [i_3] [i_4] [i_2] = (!var_7);
                    var_29 -= var_2;
                    var_30 &= ((!(arr_11 [i_2] [i_2] [16] [i_2])));
                }
            }
            var_31 = var_0;
            var_32 = (1947339878 ? 740999036 : 1725572314);
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 19;i_14 += 1)
                        {
                            {
                                arr_47 [i_10] [i_10] [i_12] [i_12] [i_10] = ((!(arr_16 [i_10] [i_12] [i_12])));
                                var_33 = (((arr_33 [i_13]) != var_11));
                            }
                        }
                    }

                    for (int i_15 = 1; i_15 < 17;i_15 += 1)
                    {
                        arr_51 [i_12] = (arr_14 [i_15 + 1] [i_15] [i_15] [i_15 + 1] [i_15] [i_15]);
                        arr_52 [i_15 - 1] [i_12] [i_12] [i_12] [i_10] = ((arr_46 [i_15 + 1] [i_15 + 1] [i_15 + 2] [i_15 - 1] [i_12] [i_15] [i_15 + 1]) ? (arr_46 [i_15 + 2] [i_15 + 1] [i_15 - 1] [i_15] [i_12] [i_15 - 1] [i_15]) : (arr_46 [i_15 + 1] [i_15 + 1] [i_15 + 2] [i_15 + 2] [i_12] [i_15 - 1] [i_15 + 1]));
                        var_34 = (max(var_34, ((var_13 ? var_16 : (arr_14 [i_15 + 2] [i_15 + 1] [i_15 - 1] [i_15 + 2] [i_15 - 1] [i_15 + 1])))));
                    }
                    arr_53 [i_10] [i_10] [i_10] [i_12] = ((arr_27 [i_12] [i_12] [i_12] [i_11] [i_12]) ? ((var_6 ? (arr_15 [i_10] [i_12] [i_10] [i_10]) : var_5)) : (!var_12));
                }
            }
        }
        arr_54 [12] [i_10] = ((var_4 ? ((var_13 ? var_8 : 140298245)) : (740999058 - var_16)));
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 19;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 19;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 19;i_18 += 1)
                {
                    {
                        arr_64 [i_16] = ((var_17 != ((var_1 ? var_16 : var_15))));
                        arr_65 [i_10] &= (arr_60 [i_10] [i_10] [i_10]);
                    }
                }
            }
        }
        var_35 ^= (((arr_58 [i_10]) != (arr_58 [i_10])));
    }
    #pragma endscop
}
