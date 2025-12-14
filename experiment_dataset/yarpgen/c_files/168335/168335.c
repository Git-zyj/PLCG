/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_0;
    var_11 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (var_7 % var_1)));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_13 = var_2;
                    var_14 += ((var_3 ? ((((-9223372036854775807 - 1) <= 2165652068))) : var_0));
                    var_15 ^= var_9;
                }
                var_16 = ((var_6 ? var_1 : ((var_0 ? 55079 : var_1))));

                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_17 = (max(var_17, ((((var_4 || 7881299347898368) ? ((var_8 ? var_3 : -94)) : var_3)))));
                        arr_13 [i_3] [i_0] [i_3] [i_4] = ((-86 ? var_2 : ((7881299347898349 ? var_1 : var_7))));
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_18 -= var_4;
                        var_19 = var_0;
                    }
                    var_20 = ((1 ? 31877 : (((var_2 ^ 7251729268247419331) ? var_1 : ((var_0 ? var_6 : var_6))))));

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_21 = (((7881299347898368 - -8377016648642133086) || (((46232 ? (-127 - 1) : -7251729268247419332)))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_1] [i_3] [0] &= -5396;
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((5411 ? var_0 : -21370));
                            arr_26 [i_0] [i_0] = var_5;
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                        {
                            var_22 = 1024;
                            arr_29 [i_0] [i_0] [i_3] [i_6] [i_8] = ((var_5 >> (var_8 - 32119)));
                        }
                        for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                        {
                            var_23 = ((var_0 ? ((var_4 ? 2524 : var_0)) : var_5));
                            var_24 += ((var_0 ? ((38 ? var_4 : var_5)) : (((65517 ? 5395 : 117)))));
                            var_25 -= var_0;
                            var_26 = ((var_1 ? var_8 : 24936));
                            var_27 = ((var_8 ? 147 : var_8));
                        }
                        var_28 = (max(var_28, ((((((-26 ? var_5 : 108)) < var_8))))));
                    }
                }
                for (int i_10 = 1; i_10 < 14;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 16;i_12 += 1)
                        {
                            {
                                var_29 = (((70 ^ 30) ? var_1 : 7482590372145955222));
                                var_30 -= var_3;
                            }
                        }
                    }
                    var_31 -= ((((((16376 ? -7251729268247419331 : -31436))) ? var_9 : (((var_4 ? var_1 : (-127 - 1)))))));
                    var_32 = var_3;
                }
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    var_33 += var_4;
                    arr_43 [i_0] [i_0] [i_0] [i_0] = ((116 ? var_8 : ((0 ? 13998312505680066862 : var_5))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 0;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 15;i_15 += 1)
                        {
                            {
                                var_34 *= (2147483648 | -20382);
                                var_35 &= (((-20374 / var_9) ? 13797719788754257268 : ((var_6 ? var_9 : 3747783411785435177))));
                            }
                        }
                    }
                    var_36 = var_6;
                }
                var_37 = (((((8962 ? 24947 : var_2))) ? var_6 : var_9));
            }
        }
    }
    #pragma endscop
}
