/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (-2147483647 - 1);
    var_21 = (((57 && -1343) ? ((0 ? var_19 : ((((!(-127 - 1))))))) : 0));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_10 [i_1] [i_1] [i_1] [i_3] = (((!255) ? (~32767) : (1 >= 255)));
                        arr_11 [i_0] [i_1] [i_2 + 3] [14] = 255;
                        var_22 -= (((((-29922 ? 15 : 1))) % 55));
                    }

                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {

                        for (int i_5 = 3; i_5 < 14;i_5 += 1)
                        {
                            var_23 = (((-127 - 1) ? 451888950 : 15));
                            arr_16 [i_0] [i_0] [i_1] [i_4] [i_5] = 432642100020783258;
                            arr_17 [i_1] [i_1] [i_1] [i_1] [i_5] = (var_0 % 3);
                            arr_18 [i_1] [i_1] [i_1] = 15;
                        }
                        var_24 = 9996;
                    }
                    arr_19 [i_0] [i_1] [i_0] [i_2 - 1] = (var_4 | 3);
                    var_25 = 0;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_26 [i_1] [i_6] [i_2 - 1] [i_1] [i_0 + 3] [i_0] [i_1] = ((((-1 ? 15 : var_1))) ? ((0 ? var_12 : 15)) : -var_18);
                                var_26 = (~-15);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                {
                    arr_29 [i_1] = 0;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 14;i_10 += 1)
                        {
                            {
                                var_27 = (max(var_27, (((0 ? 1 : 23621)))));
                                arr_35 [i_0] [i_1] [i_1] [i_1] [i_10 - 1] [i_10] = 15;
                                var_28 = (max(var_28, 255));
                                var_29 = (31744 | 10243508284599745293);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                {
                    arr_38 [10] [i_1] [i_1] = ((((((-32767 - 1) ? var_7 : var_3))) ? var_18 : (((var_0 ? 1 : 85)))));
                    arr_39 [i_0] [i_0] [i_1] = ((-(~15)));

                    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                    {
                        arr_43 [i_0] [i_1] [i_1] [10] = var_15;
                        var_30 = (((var_0 ? var_5 : 0)));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                    {
                        var_31 &= (((1 ? 0 : 15)));
                        arr_46 [i_1] [i_1] [i_1] = (-127 - 1);
                        var_32 = 0;
                        var_33 = (((0 ? 255 : -15)));
                    }
                    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                    {
                        var_34 = (max(var_34, (0 < 9223372036854775807)));
                        arr_50 [i_0] [7] [i_1] [i_14] [i_14] = 3897252870555659107;
                        var_35 = -150547508;
                    }
                    var_36 = (((((-9996 ? 986168740 : 0))) ? 3843078345 : ((8203235789109806322 ? var_10 : 168))));
                }
                arr_51 [i_1] [i_0 - 1] = 451888950;
                arr_52 [0] [i_1] &= (var_13 % (~15));
            }
        }
    }
    #pragma endscop
}
