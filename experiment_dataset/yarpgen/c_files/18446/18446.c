/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (min((arr_1 [i_0] [i_0]), ((var_4 & (arr_0 [i_0])))));
        var_19 = (min(((((((arr_1 [i_0] [i_0]) + var_7))) & 2606)), (1 < 1)));
        var_20 = max(((min(var_0, ((var_13 >> (var_6 + 5714)))))), (max(var_1, (arr_1 [i_0] [i_0]))));
    }
    var_21 = (min((~var_13), var_5));
    /* LoopNest 3 */
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        arr_12 [i_2] [4] [i_2] [i_3] [i_1 - 1] = ((var_0 < ((1 ? (((min(var_10, 116)))) : 16265859556906988320))));
                        arr_13 [i_2] [i_2] [i_2] = ((125 * ((((18446744073709551602 ? var_12 : (arr_3 [i_4]))) * (0 / 120)))));
                        var_22 = (!((min((1 <= var_9), var_17))));
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_23 = 2180884516802563295;
                            var_24 = ((0 >> (!var_14)));
                            arr_18 [i_1] [i_1] [i_2] [i_3] [i_6] = ((65517 && (10061 && var_12)));
                            var_25 = (((((-4231321637499220153 <= (arr_14 [i_1 - 3] [i_1 - 1] [i_1 + 1] [i_1 - 2])))) ^ (~var_11)));
                        }
                        for (int i_7 = 1; i_7 < 11;i_7 += 1)
                        {
                            var_26 = var_6;
                            var_27 = ((2180884516802563296 - ((((var_4 || (arr_5 [i_1 - 2] [i_2])))))));
                            arr_22 [i_2] [i_3] [i_3] [9] [i_2] = ((-(((0 < (arr_9 [i_1 - 1] [i_2] [i_7 - 1] [i_7]))))));
                            arr_23 [i_2] = ((var_17 ? (arr_17 [i_1] [i_2] [i_1 + 2] [i_1 - 1] [3] [i_2] [i_1 + 2]) : 1));
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_28 = ((((((arr_26 [i_1 + 3] [i_2] [i_5] [i_8] [i_8]) | (!2180884516802563296)))) % (min((arr_19 [i_1] [i_2] [i_3] [i_1 - 1] [i_3] [i_8]), 2180884516802563314))));
                            arr_27 [i_1] [i_1] [i_1] [i_2] [i_1 + 3] [i_1 + 3] [i_1] = (((((1 ? 1 : 2180884516802563302))) ? (min(var_17, (((arr_5 [i_1] [i_2]) ? var_12 : 0)))) : ((18446744073709551615 ? 58461 : 1))));
                            var_29 = (min(var_15, (((((var_18 ? (arr_4 [i_1 - 3]) : (arr_21 [i_1] [i_3] [13] [i_5] [i_1] [i_1 - 2]))) > var_4)))));
                            var_30 ^= var_9;
                        }
                        var_31 &= ((((var_6 || 2180884516802563327) - (((1 < (arr_6 [i_5])))))));
                        var_32 = ((((var_9 >> (var_10 - 8506))) >> (min(158, (((var_2 || (arr_26 [i_3] [7] [7] [7] [i_3]))))))));
                        arr_28 [i_1 + 2] [0] [i_2] = var_16;
                        var_33 = var_5;
                    }
                    arr_29 [i_1] [i_1] [i_2] [i_3] = 1;
                }
            }
        }
    }
    var_34 = (max(((max((!140), var_14))), var_1));
    #pragma endscop
}
