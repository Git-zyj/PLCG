/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [0] [i_3] = 255;
                        var_20 = (max(var_20, (((!(((!var_4) && (!232))))))));
                        var_21 = ((~((((18446744073709551615 << (var_7 - 35))) << (var_12 - 106)))));
                        var_22 -= -32746;
                    }
                }
            }
        }
        var_23 = (var_3 & 3035808452648450997);
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {

        for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
        {
            var_24 |= (min(-var_19, (var_5 * 1366410854)));
            var_25 = ((!(1 == 249)));
            var_26 -= (min(var_17, -var_2));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            arr_28 [i_4] [i_7] = (((max((var_6 | 960), (1 / var_16))) == (min(((min(1, 1))), -var_2))));
                            arr_29 [i_4] [i_5] [i_8] [i_7] [i_8] [i_4] [i_7] = (((886683777 > var_0) == -127));
                            var_27 = (!var_11);
                            var_28 *= (max(-6, ((236 | (var_14 ^ 1)))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_9 = 2; i_9 < 19;i_9 += 1) /* same iter space */
        {
            var_29 ^= (var_3 != var_5);
            arr_32 [i_4] [8] |= var_8;
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        {
                            arr_43 [i_11] [i_10] [i_12] = ((var_15 < (var_5 * 0)));
                            arr_44 [i_4] [i_4] [19] [i_4] [i_11] [i_4] = var_17;
                            arr_45 [i_4] [i_11] [i_11] [i_4] [i_4] = (((!var_0) << (9028079932165434037 - 9028079932165434024)));
                        }
                    }
                }
            }
            var_30 -= (((!var_3) || (-127 - 1)));
            arr_46 [2] [1] [i_9] = ((var_17 && (72053195991416832 & 120)));
        }
        var_31 = (max(-var_3, var_3));
        arr_47 [i_4] [i_4] = (((~236) ? var_8 : (((!((((-127 - 1) ? 0 : 1))))))));
    }
    var_32 = -1;
    var_33 += ((((((4294967285 <= var_12) << (var_4 - 1754678689)))) * (min((max(var_10, var_14)), ((min(var_6, 0)))))));
    var_34 = 1;
    var_35 = ((min(-var_13, 8989607068696576)));
    #pragma endscop
}
