/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] = var_12;
                        arr_11 [i_0] [i_2] [i_1] [5] [i_0] = (((((~var_4) <= ((((arr_0 [i_0] [i_0]) >= var_3))))) ? var_5 : (max((((109 ? -104 : 116))), var_14))));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {

                        for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_2] [5] [1] [8] [i_5] [i_0] [i_2] = var_0;
                            var_17 = (((((!((max(2, var_3)))))) <= -118));
                            arr_17 [i_4] [i_0] [i_0] [i_4] [i_4] = ((((!var_7) - (min(var_14, var_11)))));
                            arr_18 [i_0] [i_0] [21] [21] [i_1] = (min((arr_1 [i_0]), var_11));
                        }
                        for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            var_18 &= var_10;
                            arr_21 [i_0] [i_2] [i_2] [i_4] [i_6] = var_0;
                            var_19 += ((+(((((var_8 ? (arr_12 [i_1]) : var_8))) ? (arr_2 [9] [i_1]) : ((((arr_13 [i_0] [i_1] [i_0] [i_4] [i_6] [i_4]) & -122)))))));
                            arr_22 [i_0] [i_0] = ((~((var_14 ? var_7 : var_6))));
                        }
                        arr_23 [i_1] [5] [i_0] [i_1] = ((((((arr_1 [i_4]) ? (max(var_15, var_2)) : ((var_0 ? var_9 : var_2))))) ? var_13 : var_1));
                        arr_24 [i_0] [i_0] [i_0] [i_0] = (var_11 / var_6);
                        var_20 -= (arr_9 [i_0]);
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        arr_29 [i_0] [i_1] [13] [i_0] [i_7] [i_7] = ((+((((arr_26 [i_2 - 1] [i_1] [i_2] [i_7] [i_1]) < (arr_26 [i_2 + 1] [i_2 + 1] [i_0] [i_7] [i_7]))))));
                        var_21 = ((((max(var_0, (arr_5 [i_2 + 2] [i_0] [i_0] [i_2 - 1])))) ? (~953142136) : ((((var_15 >= var_9) > ((119 ? -22 : 65530)))))));
                        var_22 = ((((var_12 << (8191 - 8189))) <= (arr_20 [i_2 + 3] [i_0] [i_2 - 2] [i_2 - 2] [i_2 - 2])));

                        for (int i_8 = 4; i_8 < 19;i_8 += 1)
                        {
                            var_23 = (((var_6 ? ((var_12 / (arr_12 [i_2 + 1]))) : (var_6 + var_1))));
                            arr_33 [i_0] [i_1] [i_0] [i_1] [i_8 - 1] [i_8 - 1] [i_0] = (((((~(~var_4)))) ? (((~253) ^ ((31 ? var_6 : var_0)))) : ((((arr_27 [i_0] [i_1] [i_8 - 3] [i_0] [i_0] [i_1]) ? (((-32767 ? var_8 : (arr_19 [i_0] [i_0] [1] [i_2 + 3] [i_0] [17] [i_0])))) : var_7)))));
                            var_24 = (arr_19 [11] [i_8 - 4] [i_8 - 4] [i_8 - 4] [i_8 - 1] [i_8 - 1] [i_8 - 4]);
                        }
                        for (int i_9 = 2; i_9 < 20;i_9 += 1)
                        {
                            var_25 = (arr_25 [i_0] [i_1] [i_1] [3] [i_1]);
                            var_26 = ((!(~var_12)));
                        }
                    }
                    var_27 ^= (((((arr_30 [i_0] [4] [21] [21]) > (((arr_35 [i_2 + 1] [i_2] [i_2] [i_2] [i_2 + 1]) ? -1 : 2)))) || (((arr_36 [10] [13] [i_2 + 3] [i_2 - 1] [i_2 + 1] [i_2 - 1] [13]) < (arr_26 [i_0] [i_0] [i_2 + 2] [i_2 + 1] [i_2 + 1])))));
                    var_28 = (min(var_28, (((~((-((((arr_3 [i_0]) && var_12))))))))));
                    arr_38 [i_0] [i_2 + 3] = (var_6 != var_5);
                    arr_39 [i_0] [i_0] [8] [i_0] = -29585;
                }
            }
        }
    }
    #pragma endscop
}
