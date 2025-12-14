/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min(-var_10, var_10))) ? (((min(var_0, (!var_12))))) : (min(var_11, (max(853679937, var_7))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_15 -= ((63 ? ((min((arr_2 [i_4] [i_4 + 2]), (arr_2 [i_4] [i_4 - 1])))) : (arr_5 [i_3] [i_1] [i_3])));
                                var_16 = ((-(min((((arr_10 [i_0]) ? 6540115266260401434 : 64)), (arr_12 [i_0] [i_2] [i_4 - 3] [i_4] [i_1])))));
                                var_17 = (max(var_17, ((max(var_5, ((((((arr_3 [i_2]) ? var_4 : (arr_12 [i_3] [i_3] [i_2] [i_1] [i_3])))) ? var_11 : (arr_10 [i_0]))))))));
                                var_18 = (min(var_18, (((2147467264 ? 13472954152401971007 : 13472954152401971005)))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_1] = max(var_13, (arr_0 [i_0] [i_2]));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_20 [i_1] [i_5] [i_2] [i_1] [i_1] [i_1] [i_1] = var_7;
                                arr_21 [i_0] [i_1] [i_5] [i_6] = ((~(((arr_11 [i_0] [i_1]) ? var_5 : var_7))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
