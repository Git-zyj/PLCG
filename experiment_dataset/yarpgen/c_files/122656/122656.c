/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_18 = (max(((max(((-(arr_0 [i_0]))), (max((arr_0 [i_0 - 1]), (arr_0 [i_0])))))), (((arr_0 [i_0 - 1]) / var_3))));
        arr_3 [i_0 + 1] = var_14;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2 + 1] [i_2 + 1] [i_1] = (arr_5 [i_0] [i_1] [i_2]);
                    arr_9 [i_1] [i_1] [i_1] = ((max(-9, 54)));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_1] = (((min((arr_5 [i_2 + 2] [i_2] [i_3 + 1]), (arr_5 [i_2 - 1] [i_2 + 1] [i_3 - 3]))) > (((arr_5 [i_2 + 1] [14] [i_3 + 1]) ? (arr_5 [i_2 + 2] [i_3 - 3] [i_3 - 1]) : (arr_5 [i_2 - 1] [6] [i_3 + 1])))));
                                var_19 = ((!((max((((arr_12 [i_0] [i_1] [11] [i_3] [i_4] [i_4] [i_4]) ? 5695490586011377129 : (arr_4 [13]))), ((max((arr_6 [i_4] [i_2] [i_1] [i_0]), var_3))))))));
                                var_20 = ((((((max((arr_0 [i_4]), (arr_6 [i_4] [i_2] [i_1] [i_0])))) ? (var_9 * var_7) : (((arr_1 [i_0]) ? -29423 : (arr_11 [i_0 - 1] [i_0] [2] [1] [i_0] [i_0]))))) / (arr_6 [i_4] [i_3 - 1] [i_2 - 1] [i_0])));
                                var_21 = min(var_17, (max(var_3, (arr_2 [i_1] [i_4]))));
                            }
                        }
                    }
                }
            }
        }

        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            var_22 = 29415;
            var_23 = (min((min((max(516096, var_15)), -9)), -var_8));
            var_24 = (((((max(65535, var_6))) ? var_17 : ((var_2 ? var_0 : 5890240918980852264)))));
            var_25 = var_3;
        }
        var_26 = var_14;
    }

    for (int i_6 = 3; i_6 < 11;i_6 += 1)
    {
        var_27 = (max(((((arr_16 [i_6]) ? (arr_0 [i_6]) : var_1))), var_4));
        var_28 -= var_3;
    }
    var_29 = ((((-((var_11 ? 8 : var_9)))) & (((((var_0 ? var_2 : 28796))) ? (!10) : (~var_0)))));
    #pragma endscop
}
