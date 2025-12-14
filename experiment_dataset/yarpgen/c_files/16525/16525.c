/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    var_13 = (min(var_1, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    var_14 = (min(var_14, (arr_5 [0] [0])));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_15 = (min(var_15, (((~(max(1148417904979476480, (((arr_10 [i_0] [i_0] [i_2] [i_2]) ? var_6 : var_10)))))))));
                        arr_11 [i_0] [i_2 + 4] [i_1] [i_0] = (((((((4294967295 ? 7 : 255))) ? 4294967274 : -127))) ? ((var_11 ? (arr_3 [i_3] [i_2] [i_0]) : (var_6 / var_1))) : ((((((arr_10 [i_0] [1] [i_2] [i_3]) | (arr_2 [i_0] [i_1] [i_0]))) * 25))));
                    }
                    var_16 = ((((~(max(283726776524341248, (arr_8 [i_2] [i_1] [i_1] [i_0] [i_0]))))) | 0));
                    arr_12 [i_0] = (min(0, (((arr_2 [i_2 + 4] [i_2 + 3] [i_0]) ? 22 : var_4))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_1] [i_2 + 3] [i_0] [i_5] = (((max(0, (max(var_1, 0))))) ? 16777152 : (((((min((arr_2 [i_1] [i_4] [i_0]), var_7))) ? 0 : 10))));
                                var_17 *= 124;
                                arr_19 [i_1] [i_2 - 2] [i_4] [i_0] = -18;
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    arr_22 [i_0] [i_1] [i_0] [i_0] = (arr_21 [i_0] [i_1] [i_6]);
                    arr_23 [i_0] [i_1] [i_0] = ((-((~(~var_5)))));
                    var_18 = ((var_8 ? (((((0 ? 4 : 4278190143))) ? ((var_2 ? var_7 : (arr_10 [5] [i_0] [i_0] [i_0]))) : var_0)) : ((var_6 / (arr_20 [10])))));
                }
                arr_24 [i_0] [i_0] [i_1] = 0;
            }
        }
    }
    #pragma endscop
}
