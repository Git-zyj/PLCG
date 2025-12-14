/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((~((var_10 ? (arr_1 [i_0] [i_0]) : var_2))));
        arr_3 [i_0] = ((~(!11550769387650318724)));
        var_16 = ((arr_1 [17] [i_0]) ? (((var_3 || (arr_0 [i_0])))) : var_14);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            var_17 = (((arr_5 [i_2]) / var_8));
            arr_10 [i_2] [i_2] [i_2 - 1] = 1;
            var_18 &= (((max(6895974686059232870, -1720209257)) <= ((max(6895974686059232870, 11550769387650318723)))));
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
        {
            arr_13 [i_3 + 1] = ((((1 ? var_13 : 1679825685)) & (arr_9 [i_3] [i_3 + 3])));
            var_19 = (536608768 == var_12);
        }
        for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
        {
            var_20 += (arr_6 [i_1] [i_4]);
            arr_18 [13] [15] [i_4] = var_5;
        }
        var_21 = var_3;
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {

            for (int i_7 = 3; i_7 < 20;i_7 += 1)
            {
                var_22 = ((~(arr_16 [i_6 + 2] [i_6 + 3])));
                arr_26 [i_7] [i_6] = 1;
            }
            arr_27 [i_6] [i_6] = (arr_4 [i_6 + 3] [i_6 + 3]);
            /* LoopNest 3 */
            for (int i_8 = 2; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_23 = -17179;
                            arr_37 [19] [i_6] [i_5] [i_9] [i_6] = (arr_16 [i_6 + 2] [i_8 + 2]);
                        }
                    }
                }
            }
            var_24 = (!-536608768);
            var_25 = ((arr_20 [i_5] [i_5]) ? (arr_20 [i_5] [i_6 + 2]) : (arr_20 [i_5] [i_6 + 2]));
        }
        arr_38 [i_5] = var_12;
        arr_39 [i_5] &= ((!(((var_5 ? 7565275513589957329 : (arr_31 [i_5] [i_5]))))));
        arr_40 [i_5] = (((((31209 ? 1545965294383975437 : 15037716955394581154))) || -5840619846549790466));
    }
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        arr_43 [i_11] = (((((arr_7 [i_11] [i_11]) | (arr_7 [i_11] [i_11]))) + ((max((arr_7 [i_11] [i_11]), (arr_7 [i_11] [i_11]))))));
        arr_44 [i_11] = (((arr_1 [i_11] [i_11]) / ((~(arr_4 [i_11] [i_11])))));
        arr_45 [i_11] = var_12;
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                {
                    arr_51 [i_13] [i_13] [i_12 + 3] [i_11] = (max(var_14, (min(((min(-775712598, (arr_1 [i_12] [i_12])))), (arr_15 [i_11] [i_12 + 1])))));
                    var_26 = 6895974686059232892;
                    var_27 *= var_8;
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            {
                                var_28 = (1 && 127);
                                arr_58 [i_11] [i_11] [i_11] [i_14] [i_15] = (arr_52 [9] [i_12 - 2] [17] [i_14] [i_15] [i_12 - 2]);
                            }
                        }
                    }
                    arr_59 [i_11] [i_12 + 2] [i_13] [i_12] = (arr_6 [i_11] [i_12]);
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 21;i_16 += 1)
    {
        arr_62 [i_16] = var_1;
        var_29 = 2615141611;
    }
    var_30 = ((!(((var_2 ? ((var_14 ? var_1 : var_2)) : -4)))));
    var_31 = (((((var_6 >> (var_9 - 8070)))) * 11550769387650318714));
    #pragma endscop
}
