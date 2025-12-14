/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_11 = ((-(~var_6)));
                            var_12 = var_6;
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                {
                    arr_12 [i_0] = ((((arr_4 [i_0]) ? var_0 : var_2)) + (~var_7));
                    arr_13 [i_0] [i_0] [i_0] = ((((arr_7 [i_0] [i_0] [i_0] [i_4] [1]) <= var_4)) && ((((arr_4 [i_0]) << (((arr_1 [i_0] [i_0]) + 31208))))));
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    var_13 ^= ((var_4 / (arr_5 [i_1] [i_0] [i_0 - 1] [i_0 - 1])));
                    arr_18 [i_0] = ((var_3 * ((var_3 ? ((var_7 & (arr_0 [i_0]))) : ((3289973031599500935 ? var_10 : (arr_8 [i_1])))))));
                    var_14 = (var_3 - var_4);

                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        arr_22 [i_0] [i_1] [i_5] [i_5] [i_5] [i_0] = ((!((var_4 == (arr_2 [i_0 - 1] [i_0] [i_6 - 1])))));
                        var_15 = ((!(((+((min((arr_16 [i_5] [4] [i_5] [i_6 - 1]), var_0))))))));
                        var_16 = (((~15156771042110050680) * ((((var_5 < ((min(var_0, var_10)))))))));
                        arr_23 [i_0] [i_5] [i_0] = ((~((((arr_9 [i_0]) != (arr_2 [i_0] [i_1] [i_0]))))));
                    }
                    arr_24 [i_0] = ((((min(var_7, var_2) % (((-(arr_2 [i_0 - 1] [i_1] [i_5]))))))));
                }
                for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                {
                    var_17 = ((((((arr_1 [i_7] [i_7]) != 2246779604)) ? (((var_10 ? var_0 : var_8))) : ((var_8 ? (arr_4 [i_0]) : var_4)))));
                    var_18 &= var_2;
                    var_19 = ((4773843230224238413 ? ((-(((arr_10 [i_0] [i_0] [i_7]) / -1691798559)))) : (!-var_1)));

                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        arr_31 [i_0] [i_7] [i_8] = var_1;
                        var_20 = ((var_9 - (((((var_8 ? var_10 : var_7)) <= (39882 % var_8))))));
                    }
                }
                for (int i_9 = 2; i_9 < 21;i_9 += 1)
                {
                    arr_34 [i_0] [i_0] [i_9] = var_7;
                    arr_35 [i_0] = var_7;
                }
                var_21 = ((var_2 ? ((var_5 ? (arr_15 [i_0 - 1] [i_0 - 1] [i_1]) : ((var_10 ? var_0 : var_7)))) : (((var_9 ? var_4 : (arr_10 [i_0] [i_1] [15]))))));
                /* LoopNest 3 */
                for (int i_10 = 4; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            {
                                var_22 += ((var_5 ? (((15156771042110050681 != (var_4 + var_2)))) : (((-(arr_38 [i_0] [i_0] [i_12]))))));
                                var_23 = (!var_1);
                                var_24 = (min(var_24, ((((((arr_4 [i_1]) - var_0))) ? ((((~var_2) ? ((min((arr_29 [i_0] [i_1] [i_1] [i_11]), var_0))) : (((var_3 <= (arr_1 [i_0] [10]))))))) : ((54351 ? (((var_2 ? var_8 : var_7))) : (arr_40 [i_0] [i_10 - 4] [i_11] [i_11])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = ((((((!var_10) ? var_5 : ((var_8 ? 20494 : var_0))))) != (((15156771042110050690 && var_8) ? (((var_4 ? var_10 : var_1))) : ((var_9 ? var_2 : 1))))));
    #pragma endscop
}
