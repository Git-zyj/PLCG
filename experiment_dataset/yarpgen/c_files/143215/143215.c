/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((((((19024 ? 1729382256910270464 : var_8))) ? (max(12930494030796684990, var_6)) : var_7)), (((-((var_7 << (12930494030796684990 - 12930494030796684978))))))));
    var_16 |= 4506;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0 + 1] [i_0 + 1] [i_1] [i_1] = (((arr_0 [i_0 - 1] [i_0 - 1]) ? (((max(524913659, var_2)) * 0)) : (((((((arr_5 [i_0] [i_1] [i_1]) % 32749))) ? (max(var_4, 4506)) : (var_7 | var_8))))));
                    arr_9 [i_0] [i_0 + 1] [i_1] = (((((arr_5 [i_0 + 1] [i_1] [i_1]) <= (arr_7 [i_1]))) ? ((((max(58116, var_13))))) : (max(8807, 69931370))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((max(-var_10, (arr_5 [20] [16] [i_3]))))));
                                var_18 = (max(var_18, ((max((max(((var_0 ? (arr_15 [i_2] [10]) : var_11)), (~-12067))), ((4092552060 ? (~5516250042912866626) : var_3)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((max((max(12930494030796684990, var_8)), var_3)));
    #pragma endscop
}
