/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = min((max(var_14, (arr_1 [i_0]))), (var_18 || var_16));

                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        var_20 *= (arr_1 [0]);
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = -800443299814436400;
                    }
                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        arr_13 [14] [6] [i_4] |= ((~(arr_1 [0])));
                        var_21 = (min((min((arr_4 [i_4 + 1]), var_14)), var_2));

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_22 = (max(var_22, (arr_9 [i_0] [i_0] [i_2] [i_5])));
                            var_23 = (min((arr_8 [i_0] [5] [i_2] [i_0] [i_5]), ((~(arr_11 [i_4 + 1] [i_4] [i_4] [i_4])))));
                            var_24 -= ((var_18 ? var_8 : (((!(arr_8 [i_0] [i_0] [i_4 - 1] [i_4 + 2] [i_4]))))));
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_25 -= var_11;
                            arr_18 [i_0] [i_0] [i_2] [i_0] [i_6] = (arr_16 [i_0] [i_1] [i_0]);
                            arr_19 [i_0] [i_1] = (((arr_0 [i_0] [i_6]) ? (min((arr_17 [6] [i_4 + 1] [i_4] [i_4 + 2] [i_4]), (arr_11 [i_0] [i_1] [i_2] [i_0]))) : (((-(max(var_18, 1483549213)))))));
                        }
                    }
                    var_26 = (1 >> 0);
                }
            }
        }
        arr_20 [i_0] = ((max(268435455, 1)));
        arr_21 [i_0] [i_0] = ((-(arr_14 [i_0] [10])));
        var_27 = ((((min(1881476161, -109)))) ? (~44334) : 8738727546348345455);
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_28 = (min(var_28, (((-((((-(arr_4 [11]))) % -268435455)))))));
        var_29 = (min(var_29, ((((6648 ? 2141045497 : -1904519570))))));
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        arr_27 [i_8] = ((var_11 > (min(((22 ? (arr_25 [i_8]) : (arr_25 [i_8]))), (((arr_25 [i_8]) ? (arr_25 [i_8]) : var_18))))));
        var_30 = (arr_25 [i_8]);
        arr_28 [13] [13] |= ((((arr_26 [i_8] [i_8]) ? (arr_26 [i_8] [i_8]) : (arr_26 [i_8] [i_8]))));
    }
    #pragma endscop
}
