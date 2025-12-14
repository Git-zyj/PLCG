/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = (min(var_17, (1191158914 >= 0)));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = var_11;
                    var_18 = (min(var_18, (((((((min(var_1, 1006726770))) ^ (var_4 % var_3))) >= ((((((32767 << (63 - 56)))) ? ((935221032 ? 1 : var_16)) : (((((arr_4 [i_0] [i_1]) + 2147483647)) >> 1))))))))));
                    arr_11 [i_0] [i_1 + 2] [i_2] = ((((((min(-8964, 1))) + 2147483647)) << (((-8970 + 8974) - 4))));
                    arr_12 [i_0] = var_5;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 6;i_5 += 1)
            {
                {
                    arr_22 [i_5] [i_5] [i_5] = 8960;

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_19 = var_1;
                        arr_26 [i_5] [i_5] [i_4] [i_5] = (((min(-1, (-8964 - var_3))) - ((+((4047183012 ? (arr_14 [i_4]) : var_8))))));
                    }
                    arr_27 [i_5] [i_5] [i_5] [i_5 + 4] = (-((-((var_6 ? -1 : var_2)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 8;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 7;i_8 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_20 = ((1 < (arr_24 [i_9] [i_8 - 1] [i_7 - 1])));

                        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            arr_39 [i_10] = ((~var_2) ? var_9 : var_3);
                            var_21 = ((65529 ? (arr_17 [i_3]) : var_15));
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                        {
                            var_22 = ((-21 ? (arr_32 [i_3] [i_8] [i_11]) : 0));
                            arr_43 [i_11] [i_7 - 2] [i_7 + 2] [i_7 - 1] [i_7 - 2] [i_7] = (((arr_6 [i_11] [i_9]) ? (1 & var_13) : var_6));
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                        {
                            var_23 = (-247784283 ? (arr_31 [i_3] [i_3] [i_8] [i_9]) : var_1);
                            var_24 = ((var_13 ? 0 : (arr_14 [i_7 - 2])));
                            var_25 *= (((arr_45 [i_7 + 2] [i_8 + 3] [i_8] [i_7 + 2] [i_12]) ? (arr_45 [i_7 + 1] [i_8 + 3] [i_9] [i_9] [i_9]) : -1073741824));
                        }
                        arr_47 [i_3] [i_3] [i_8] [i_9] = (((((var_13 ? 4183 : (arr_40 [i_3] [i_3])))) ? ((216 ? 1 : var_15)) : (1073741824 + 96)));
                    }
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        var_26 = (min(((-(((!(arr_2 [i_3] [i_13])))))), ((~(((arr_33 [i_7]) ? (arr_25 [i_3] [i_3] [i_3]) : 224))))));
                        arr_51 [i_8] [i_8] [i_8] [i_13] = (((((arr_0 [i_3]) ? 18446744073709551605 : 111)) * ((((((~(arr_21 [i_13] [i_13])))) ? (0 / var_2) : (!var_7))))));

                        for (int i_14 = 0; i_14 < 10;i_14 += 1)
                        {
                            arr_55 [i_3] [i_3] [i_3] [i_13] [i_3] = ((((((arr_38 [i_13] [i_13]) >> (var_8 + 6614)))) ? var_16 : ((-22 ? var_6 : var_1))));
                            var_27 &= (arr_4 [i_3] [i_3]);
                        }
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            var_28 = (min(var_28, 1));
                            arr_58 [i_3] [i_7] [i_7] [i_13] [i_15] [i_15] = (max((905570225 - var_6), ((1 ? (min(var_10, 4294967295)) : (0 - var_15)))));
                            arr_59 [i_8] [i_8] [i_8] [i_8] [i_8] [i_13] [i_8] = (arr_35 [i_15] [i_3] [i_3] [i_7 - 1] [i_3]);
                        }
                    }
                    for (int i_16 = 0; i_16 < 0;i_16 += 1)
                    {
                        arr_62 [i_3] [i_7] [i_8] [i_16 + 1] [i_16 + 1] = ((var_11 < (((((((0 ? -7472 : var_9))) > (min(-6393, 3257470749))))))));
                        arr_63 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (arr_44 [i_3] [i_3] [i_8] [1] [i_16]);
                    }
                    arr_64 [i_8] [i_3] = arr_32 [i_3] [i_3] [i_3];
                }
            }
        }
        /* LoopNest 3 */
        for (int i_17 = 2; i_17 < 7;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 10;i_18 += 1)
            {
                for (int i_19 = 1; i_19 < 1;i_19 += 1)
                {
                    {
                        var_29 = var_2;
                        var_30 = (max(var_30, (((!(((((!(arr_65 [i_3]))) ? var_4 : ((var_3 ? var_4 : var_14))))))))));
                    }
                }
            }
        }
        var_31 = var_2;
    }
    var_32 = var_4;
    var_33 = (((!(((491953267 ? var_9 : var_10))))));
    var_34 = 7168;
    var_35 = (((((((min(25, var_14))) ? (0 * 1) : (var_8 / 64)))) ? ((var_4 - (0 + var_5))) : var_12));
    #pragma endscop
}
