/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_5 ? var_6 : var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 -= var_9;
                var_13 -= (((~var_1) ? -var_4 : (!var_3)));
                arr_7 [11] [i_0] = ((((((var_10 ? var_2 : var_0)))) ? (~var_4) : (min((((var_7 ? var_4 : var_5))), (~var_10)))));

                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    var_14 = ((((min(((1073725440 ? 1743998845 : 4)), ((var_3 ? var_4 : var_2))))) % (((((var_8 ? var_10 : var_9))) ? -var_3 : (max(-1743998846, 0))))));
                    var_15 = (((((var_3 ? ((var_0 ? var_7 : var_5)) : (!var_9)))) ? (((min(var_1, var_6)))) : (min(var_7, var_7))));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((-(((((var_2 ? var_10 : var_7))) ? (((var_1 ? var_3 : var_1))) : (min(var_5, var_8))))));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    arr_15 [i_3] [4] [i_3] [i_0] = (!-127);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] [i_3] [1] [6] [9] [i_5] = ((-(373979826 / 176550905)));
                                arr_22 [i_0] [i_4] [i_0] [i_4] [i_5] = var_10;
                                var_16 = ((9 ? var_5 : (~-5977535797807762572)));
                                arr_23 [i_0] [i_0] [i_1] [i_1] [i_4] [i_5] = ((251 << (121 - 118)));
                            }
                        }
                    }
                    var_17 = (max(var_17, ((min((~var_2), ((-(~var_1))))))));
                    arr_24 [i_0] = (~-5);
                }
            }
        }
    }
    #pragma endscop
}
