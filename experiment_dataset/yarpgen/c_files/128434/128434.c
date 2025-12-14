/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((var_5 + var_3) ? (min(var_2, var_5)) : var_2))) ? 830755706 : var_9));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 *= var_10;

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_13 = (max(var_13, ((((arr_2 [i_0] [i_1]) ? (arr_5 [i_1] [i_2] [i_3]) : ((9 ? (!var_2) : (max(1, (arr_2 [i_4] [i_0]))))))))));
                            var_14 = (((((((arr_14 [i_0] [i_1] [i_3]) != (arr_9 [i_0] [i_1] [i_3])))) + -25063)));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_19 [i_0] [i_0] [i_1] [i_0] [i_0] &= var_1;
                            var_15 ^= (((arr_1 [i_0]) ? (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_0));
                            arr_20 [i_0] [i_1] [i_1] [i_0] [i_3] [i_3] [i_5] = ((-(arr_4 [i_0] [i_0])));
                            var_16 = (min(var_16, (((var_7 ? ((var_4 & (arr_5 [i_0] [i_2] [i_3]))) : var_4)))));
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_17 *= (var_1 + 12030);
                            var_18 &= (min((max((arr_11 [i_0] [i_1] [i_3] [i_1] [i_3] [i_3]), (arr_3 [i_0] [i_1] [i_3]))), ((~(min(var_9, (arr_7 [i_0] [i_0] [i_0] [i_0])))))));
                            var_19 = (min(var_19, (arr_3 [i_0] [i_1] [i_6])));
                        }
                        var_20 = (arr_14 [i_0] [i_1] [i_3]);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        arr_27 [i_7] |= (~(arr_3 [i_0] [i_7] [i_2]));
                        var_21 &= (arr_16 [i_0]);
                    }
                    arr_28 [i_1] [i_1] &= ((~((((arr_12 [i_2] [i_1] [i_0]) * var_0)))));
                    var_22 = (max(var_22, (((((~(arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((319302322767749887 ^ (arr_2 [i_0] [i_0])))) : (arr_18 [i_2] [i_1] [i_2] [i_0] [i_2] [i_1] [i_1])))));
                }
            }
        }
        var_23 = (max(var_23, 15));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_24 = (65535 % var_1);
            arr_35 [i_9] = ((-(arr_34 [i_8] [i_8] [i_8])));
            var_25 = 5547113012135709382;
            var_26 = (min(var_26, -var_1));
        }
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            arr_38 [i_8] [i_10] = ((~(((arr_32 [i_10]) ? (arr_31 [i_10]) : var_8))));
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        {
                            var_27 = (min(var_27, 1532579756));
                            arr_47 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = (arr_46 [i_8] [i_10] [i_11] [i_12] [i_13] [i_10]);
                            var_28 = (max(var_28, (arr_44 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])));
                            var_29 *= (arr_43 [i_8] [i_10] [i_11] [i_12] [i_13]);
                        }
                    }
                }
            }
            var_30 = (((arr_42 [i_8] [i_8] [i_8] [i_10]) + (arr_45 [i_8] [i_10] [i_10] [i_8] [i_10] [i_8])));
        }
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            arr_51 [i_8] [i_14] = (15 ^ var_2);
            var_31 *= -var_4;
            var_32 = (((arr_29 [i_14]) ? var_0 : 24));
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                {
                    var_33 &= var_7;
                    var_34 += var_2;
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 21;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 21;i_18 += 1)
                        {
                            {
                                var_35 ^= (((arr_37 [i_18]) ? (arr_37 [i_8]) : (arr_37 [i_8])));
                                var_36 += (arr_61 [2] [i_17] [i_16] [i_15] [2]);
                            }
                        }
                    }
                    arr_62 [i_15] [i_15] = ((((((arr_54 [i_8] [i_15] [i_16]) ? (arr_56 [i_8] [i_8] [i_15] [i_15] [i_15] [i_16]) : (arr_54 [i_8] [i_8] [i_16])))) ? 229 : (var_8 - var_8)));
                }
            }
        }
    }
    var_37 = var_5;
    #pragma endscop
}
