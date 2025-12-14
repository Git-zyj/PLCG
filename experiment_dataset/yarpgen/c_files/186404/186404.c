/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = 3119045921;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_1] [i_3] = ((((~(((arr_2 [i_0]) | (arr_6 [i_4] [i_0] [i_1] [i_0]))))) & var_6));
                                var_16 = (min(((((arr_8 [i_4] [i_1 - 1] [i_0 - 2] [i_0]) >= (arr_8 [i_1] [i_1 - 1] [i_0 - 2] [i_0])))), ((var_13 ? (arr_8 [i_1 - 1] [i_1 - 1] [i_0 - 2] [19]) : 4224861359438064327))));
                            }
                        }
                    }
                    arr_14 [i_1] [i_1] = ((16766051603186651847 / (((var_0 ? (arr_7 [i_1 - 1] [i_1 - 1] [i_0 - 2] [i_0 - 1]) : (arr_8 [i_0 - 1] [i_0] [i_1 - 1] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_5] &= arr_7 [i_5] [i_2] [i_1] [i_0 - 2];
                                var_17 = ((((!(arr_18 [i_0 + 1] [i_1] [i_1])))));
                            }
                        }
                    }
                    arr_22 [12] [i_1] [i_1] = 32755;
                }
            }
        }
    }
    var_18 = (~1175921374);
    var_19 = (min(var_19, var_10));
    var_20 = var_2;
    #pragma endscop
}
