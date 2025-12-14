/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_15 += (((((arr_6 [i_0]) ? (arr_2 [i_3]) : (arr_2 [i_3])))) ? (arr_2 [i_3]) : (46 + var_9));
                                arr_14 [5] [i_1] [13] [i_0] [i_1] = (arr_5 [i_0 + 1]);
                            }
                        }
                    }

                    for (int i_5 = 3; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [1] [i_0] [1] [i_5] = ((2639081219 << (((~458382265) + 208))));
                        var_16 = (((((((max((arr_12 [i_0] [i_0] [i_2] [i_1] [i_0]), var_4))) ? 115 : 166))) ? ((((((arr_6 [i_0]) ? (arr_11 [i_0] [i_0] [3] [10] [i_0]) : var_13))) ? (~3196317215) : (arr_9 [i_0 - 1]))) : ((min((((arr_16 [i_0] [i_1] [i_2] [i_5]) ? var_6 : (arr_3 [7] [i_5 - 3]))), (((arr_11 [i_0] [i_0] [i_1] [i_2] [i_0]) | var_11)))))));
                        var_17 = ((((max((max(83, var_14)), var_7))) ? ((max((max((arr_3 [i_2] [19]), 153)), (((83 > (arr_15 [i_0] [11] [12] [i_0 + 1] [i_0]))))))) : ((129 ? (arr_10 [i_0 + 1]) : (arr_10 [i_0 - 1])))));
                        arr_18 [i_0] [i_0] = ((((max(var_11, (arr_11 [i_0 + 1] [i_0 + 1] [i_5 + 1] [i_5 + 1] [i_0])))) ? (max(176, (arr_0 [i_0]))) : ((max((~var_14), (max((arr_16 [i_0] [i_1] [i_1] [i_1]), (arr_8 [i_0] [6] [i_0] [i_0]))))))));
                    }
                    for (int i_6 = 3; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        var_18 = ((!((((((arr_2 [i_0]) ? var_12 : (arr_19 [i_0] [i_6]))) << (((var_10 + 110) - 63)))))));
                        var_19 = (max((((arr_12 [i_0] [i_2] [i_2] [i_0] [i_0]) << (((!(arr_12 [i_0] [i_2] [i_1] [i_0] [i_0])))))), ((~(~-14)))));
                        var_20 = ((var_6 ? (arr_2 [10]) : var_4));
                    }
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        arr_26 [i_0] = ((-(((max(var_5, 166)) / (arr_25 [i_7 - 1])))));
                        arr_27 [i_0] [i_0] [i_2] [i_0] [i_7] [i_2] = (max((((arr_25 [i_7 - 1]) ? var_9 : (arr_25 [i_7 + 2]))), (arr_25 [i_7 - 1])));
                    }
                }
            }
        }
    }
    var_21 = (max(var_21, var_14));
    var_22 = (max(var_22, ((((((241 ? (!var_12) : ((var_3 ? 61 : var_12))))) ? (max((min(var_1, 414694111)), -14)) : var_2)))));
    #pragma endscop
}
