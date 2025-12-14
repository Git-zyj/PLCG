/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((var_6 & (((-(!var_1)))))))));
    var_13 = -var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_14 = ((~(~var_1)));
                            var_15 = ((!((((((~var_2) + 2147483647)) >> ((((var_0 ? var_1 : var_10)) - 1123309763)))))));
                            var_16 = (((min(((max(var_10, var_10))), (min(var_0, var_3)))) >> var_2));
                            var_17 *= ((-var_6 <= (~85)));
                        }
                        var_18 = (var_0 + var_1);
                        var_19 *= (max(((((var_1 <= var_8) + (!var_0)))), var_6));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_20 = ((((max(var_5, var_10)))));
                        var_21 = (max(var_21, (((var_3 * (var_9 / var_6))))));
                    }

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_22 += (((!var_2) ^ ((max(var_3, var_5)))));
                        var_23 = (((((((~var_4) <= var_0)))) <= 16384));
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {

                        for (int i_8 = 2; i_8 < 19;i_8 += 1)
                        {
                            var_24 |= (((var_6 % (max(1152921435887370240, 4998)))));
                            var_25 = (max(var_25, (((-((-((var_1 ? var_0 : var_11)))))))));
                            var_26 += (max((!var_9), (4996 && 14695738496959085347)));
                            var_27 = ((121 <= (~1152921435887370240)));
                            var_28 = ((~(min((~269803416857870283), (var_6 ^ var_2)))));
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_29 += ((!((min((!var_4), ((var_4 ? var_6 : var_0)))))));
                            var_30 *= ((var_11 ? var_2 : var_7));
                        }
                        for (int i_10 = 3; i_10 < 19;i_10 += 1)
                        {
                            var_31 = ((-(((var_11 * var_2) ? var_4 : var_2))));
                            var_32 *= ((-((var_8 ? (var_3 * var_1) : (var_3 / var_10)))));
                        }

                        for (int i_11 = 1; i_11 < 18;i_11 += 1)
                        {
                            var_33 = ((-(max((var_4 + var_6), -862282668))));
                            var_34 = ((~((min(var_11, var_4)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
