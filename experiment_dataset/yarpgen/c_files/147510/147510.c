/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 = ((var_6 ? ((((var_11 ? var_1 : (arr_6 [i_0] [i_1] [i_1]))) << ((((-(arr_0 [i_1]))) + 28)))) : var_4));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_16 = ((+(((arr_9 [i_0]) / (min(32757, var_9))))));

                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        var_17 -= ((((((arr_7 [8]) ? (min(-11279, 16872895722702117192)) : (((~(-9223372036854775807 - 1))))))) ? 98 : (min((-99 + -297255459), (arr_9 [2])))));
                        var_18 = max(((((((-(arr_8 [i_0] [16] [i_0])))) && ((((arr_7 [i_0]) + 0)))))), (min(2080374784, 0)));
                        arr_12 [i_0] [10] [i_2] [i_3] = (min((((arr_4 [i_2] [i_0] [i_0]) ? var_8 : var_8)), ((((arr_11 [i_0] [i_1] [i_2] [i_3] [i_3 + 2]) ? (arr_11 [i_0] [21] [i_1] [21] [i_3]) : 0)))));
                        var_19 = var_13;
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_20 = (max((((!(((195 ? 128 : 1)))))), (max(((1 ? 8367 : 123)), ((min((arr_1 [i_0]), var_4)))))));
                        var_21 = ((~(((var_5 * var_2) ? (((var_9 ? var_10 : (arr_14 [i_4] [6] [i_1] [i_0] [i_0])))) : (max(var_14, var_9))))));
                        var_22 *= var_7;
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 24;i_5 += 1)
                    {
                        var_23 -= (((((-2349649234049842984 ? 73 : 11279))) ? (4275510336318396788 + 2349649234049842984) : var_13));
                        arr_18 [i_5 - 2] [i_5] [i_0] [i_5] = ((-((-(arr_1 [i_5])))));

                        for (int i_6 = 1; i_6 < 24;i_6 += 1)
                        {
                            var_24 = ((var_3 ? 0 : var_6));
                            var_25 = (max(var_25, (arr_8 [i_1] [i_5 - 2] [16])));
                            arr_21 [i_0] [i_0] [i_0] [i_0] = var_13;
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                        {
                            var_26 = (arr_2 [i_0] [i_0]);
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] = (var_0 ? (((-9223372036854775807 - 1) ? (arr_0 [i_7]) : var_11)) : (arr_2 [i_0] [i_0]));
                            var_27 *= ((38946 ? (arr_7 [20]) : (arr_7 [10])));
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                        {
                            var_28 -= ((var_13 && (var_5 >= var_2)));
                            arr_27 [i_8] [i_5 - 2] [i_0] [i_2] [i_0] [i_1] [i_0] = (~151220546);
                            var_29 = (((var_8 || var_14) ? (arr_23 [i_5 - 1]) : var_9));
                        }
                        var_30 = (max(var_30, (((((var_11 ? (arr_25 [i_0] [i_0] [16] [20] [i_2] [i_0] [i_1]) : var_6)) != -4294967281)))));
                    }
                }
                for (int i_9 = 4; i_9 < 22;i_9 += 1)
                {
                    var_31 = ((~((var_6 ? var_8 : 102))));
                    arr_30 [i_0] [i_0] [i_0] = ((((-var_8 * (var_2 / var_5))) / ((((var_2 ? var_6 : -11181))))));
                    var_32 = (min(var_32, (((~var_12) ? ((-((31480 ? 4003216283 : -16291)))) : (!var_10)))));
                }
            }
        }
    }
    var_33 |= ((((-48 ? (-4275510336318396788 && 157944049030833059) : ((var_12 << (var_4 - 214)))))) ? var_3 : ((max(((var_5 ? var_7 : var_7)), var_14))));
    #pragma endscop
}
