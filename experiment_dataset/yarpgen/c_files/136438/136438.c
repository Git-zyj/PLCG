/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_12 *= ((-var_4 ? (max(var_5, (arr_0 [i_1 - 3] [i_1 + 2]))) : (((max((arr_3 [i_0] [i_1]), 1))))));
                arr_5 [i_0] [i_1] [i_1 + 2] = ((15 ? (max((((4294967286 > (arr_4 [i_0] [i_0] [i_0])))), ((-(arr_1 [i_1]))))) : 128));

                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_2] = ((-((var_10 << (8191 - 8182)))));
                    var_13 = var_3;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    arr_13 [i_0] [i_1 + 1] &= 57344;
                    var_14 = (((-9223372036854775807 - 1) ? ((var_10 ? var_9 : 4294967289)) : var_10));
                    arr_14 [i_1] = (((var_4 ? var_0 : var_4)));
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_15 = (((var_3 << (57344 - 57344))));
                                arr_19 [i_0] [i_4] [i_4] [i_3] [i_1] [i_0] [i_0] = ((var_8 ? 52424 : 8192));
                                var_16 = (arr_3 [i_0] [i_0]);
                            }
                        }
                    }
                }
                for (int i_6 = 3; i_6 < 17;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((((arr_17 [i_7] [i_7] [14] [i_7] [i_1 - 2]) ? (arr_17 [i_8] [i_7] [i_7] [i_7] [i_1 - 2]) : (((var_3 || (arr_17 [i_7] [i_7] [i_7] [i_1 - 2] [i_1 - 2])))))))));
                                var_18 |= (((((arr_0 [i_6 - 1] [i_1 + 2]) < (arr_24 [i_0] [i_1] [i_6] [i_7] [i_8]))) ? 15 : ((-(~var_8)))));
                                var_19 = (max(var_19, ((((((((max(127, 15))) ? ((~(arr_23 [i_1] [i_0]))) : var_7))) ? (((arr_20 [i_0] [i_6] [i_1]) & -1)) : (((max(57357, (arr_16 [i_1 - 1] [i_6 - 1] [i_6 - 2] [i_6 - 1]))))))))));
                            }
                        }
                    }
                    var_20 &= -var_9;
                    var_21 += ((max((arr_11 [i_1 + 2] [11] [i_6 - 3] [i_6 - 3]), (arr_11 [i_0] [i_6] [i_0] [i_6 - 2]))) >= ((((45 ? 0 : (arr_17 [i_6] [i_1 - 1] [i_6] [i_6] [i_1]))) >> (((max((arr_11 [i_0] [i_1] [i_6 - 3] [i_6]), (arr_17 [i_0] [i_0] [i_1] [16] [17]))) - 248)))));
                    var_22 += (((((!(var_1 || 63)))) > (arr_17 [i_0] [i_1] [i_1] [i_1] [i_6])));
                }
                for (int i_9 = 2; i_9 < 16;i_9 += 1)
                {

                    for (int i_10 = 2; i_10 < 16;i_10 += 1)
                    {
                        var_23 = ((((max((arr_25 [i_9] [i_10]), -8191))) ? ((~(arr_11 [i_10] [15] [i_0] [i_1]))) : ((~((57344 % (-32767 - 1)))))));
                        arr_33 [i_10] [i_0] [i_9] = (!1690891718);
                        var_24 = 0;
                    }
                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 16;i_11 += 1)
                    {

                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            arr_39 [i_0] [i_0] [i_11] = (57344 % var_3);
                            var_25 *= (-1 >= 0);
                            arr_40 [i_0] [i_11] [i_11] [i_0] [i_0] = -0;
                        }
                        for (int i_13 = 0; i_13 < 18;i_13 += 1)
                        {
                            var_26 &= ((var_8 ? ((-(arr_23 [i_9] [i_13]))) : (((var_6 ? (arr_10 [i_1] [i_11 - 1] [i_13]) : 874585960)))));
                            var_27 = 64870;
                        }
                        var_28 = (((!665) ? ((18446744073709551615 ? var_9 : var_4)) : 126));
                        var_29 = var_10;
                    }
                    var_30 = var_0;
                }
            }
        }
    }
    var_31 = var_3;

    for (int i_14 = 2; i_14 < 16;i_14 += 1)
    {
        var_32 = (max(var_32, (arr_44 [i_14 - 1])));

        for (int i_15 = 2; i_15 < 17;i_15 += 1)
        {
            var_33 = (max((~32767), (max(var_7, (arr_43 [i_14 - 2])))));
            var_34 -= (-(!var_1));
            var_35 = (max((max(((var_6 ? (arr_46 [i_14]) : var_9)), (((var_0 << (9223372036854775807 - 9223372036854775801)))))), ((max((2 % var_9), 26163)))));
        }
    }
    #pragma endscop
}
