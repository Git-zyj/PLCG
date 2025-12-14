/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = ((max(41, 44344)));
                var_15 ^= ((!((14 < (((max(131, -16))))))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_16 = (((-922798165 < var_9) ? var_11 : 438091860));
                    var_17 = var_11;
                }
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 24;i_4 += 1)
                    {
                        var_18 *= ((((((-127 ? 51 : var_8)) ? (max(1, var_6)) : (((max(var_5, var_4))))))));

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            var_19 |= (65514 - 65503);
                            var_20 = (max(var_20, (((16061115138671272103 ? var_13 : -32756)))));
                            var_21 = (var_6 ^ (((var_10 ? var_3 : -3793))));
                            var_22 |= 17169948724431335811;
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            var_23 = (~32737);
                            var_24 = -11336;
                            var_25 += (((-10 / var_13) % -32749));
                            arr_16 [i_6 + 1] [i_1] [i_1] [i_1] [i_1] [i_0] = ((var_0 / ((var_4 ? 56 : var_12))));
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            var_26 &= var_9;
                            var_27 *= (+-9);
                        }
                        var_28 = (((((var_2 ? 36 : 65514))) ? -var_11 : var_9));
                    }
                    var_29 = (min(var_29, (((((21469 ? 3996090733522384505 : var_13)))))));
                }
                for (int i_8 = 3; i_8 < 21;i_8 += 1)
                {

                    for (int i_9 = 3; i_9 < 22;i_9 += 1)
                    {
                        var_30 = ((((!(-32 % 240))) ? (((-24 <= 1) ? 0 : (var_3 % var_11))) : ((min(var_12, -13403)))));
                        var_31 ^= (max((min(-7, 13)), var_4));
                        var_32 *= var_3;

                        for (int i_10 = 3; i_10 < 24;i_10 += 1)
                        {
                            arr_29 [i_0] [i_0] [i_1] [i_0] [i_9] [12] = -619475521;
                            var_33 = ((!(((var_9 << (36 - 5))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 24;i_12 += 1)
                        {
                            {
                                arr_35 [i_12 + 1] [i_1] [i_0] [i_1] [i_12] = (((var_2 & var_1) ? (619475520 & -32734) : ((2147483644 ? (8080219499220058599 << 29) : var_11))));
                                arr_36 [i_0] [9] [3] [i_11] [i_1] = (--4765294599621160773);
                            }
                        }
                    }
                    arr_37 [i_1] [i_1] [11] = -21470;
                }
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {

                    /* vectorizable */
                    for (int i_14 = 1; i_14 < 21;i_14 += 1)
                    {
                        var_34 = var_0;
                        var_35 = (!1);
                    }
                    arr_44 [i_0] [15] [23] [i_1] = (min((((var_4 / -1588538297) ? -16 : ((var_13 ? var_4 : var_12)))), ((((65535 ? 141 : var_4)) ^ (1 / 30800)))));
                    var_36 &= -120;
                    var_37 = (min(var_37, -1));
                }
                var_38 = (max(var_38, ((max((((((var_11 + 2147483647) >> 1)) % (134 << var_10))), -16206)))));
            }
        }
    }

    for (int i_15 = 0; i_15 < 17;i_15 += 1)
    {
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 17;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 17;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 17;i_18 += 1)
                {
                    {
                        var_39 = (min(var_39, (((((((-var_13 + 2147483647) >> (var_11 - 9772)))) ? (((((var_10 ? 127 : -122))) ? (((-21474 ? 32759 : var_10))) : (max(var_1, var_3)))) : (var_12 ^ 6763))))));
                        var_40 = ((-0 / (min((~var_2), -619475544))));
                        var_41 = ((((var_0 ? -1873375880 : var_8)) / ((19 ? var_0 : var_13))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 17;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                {

                    for (int i_21 = 0; i_21 < 17;i_21 += 1)
                    {
                        var_42 = ((-var_4 ? ((((1 ? var_9 : 0)) >> (var_2 - 122))) : var_7));
                        var_43 ^= max((!6919237773760232698), var_5);
                    }
                    var_44 ^= ((((1 ? 3 : 9745459822164998242)) ^ (max(var_6, ((-1873375909 ? -7 : 8371524494524235501))))));
                    var_45 = 1;
                    var_46 = (max(var_46, (!var_11)));
                }
            }
        }
        var_47 = (max(var_47, ((min((var_3 <= 1), ((var_9 ? 1 : var_9)))))));
    }

    for (int i_22 = 2; i_22 < 15;i_22 += 1)
    {
        var_48 += ((-(!76)));
        var_49 = (max(var_49, ((((min(1, 63)))))));
        var_50 = max((((1 / 1920) ? 102 : -7)), -5954883273492236582);
    }
    #pragma endscop
}
