/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 = (((252085645 % (arr_8 [i_1] [i_2 + 1] [i_1]))));
                    var_20 = (max((((var_18 != var_17) ? (((max((arr_8 [7] [13] [i_1]), (arr_1 [i_0]))))) : ((3845511136 ? var_7 : var_12)))), ((max(((var_3 + (arr_4 [i_2]))), ((max((arr_3 [i_0] [i_1 - 1]), 252085636))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_21 *= ((((14514236494470517325 || (((256898756 ? 2048176204 : 2355363628))))) ? (arr_7 [i_0] [i_1]) : ((((((arr_11 [i_0] [i_1] [i_2] [i_4]) ? var_7 : (arr_16 [i_0] [i_1 - 1] [21] [i_2] [i_2] [i_2]))) > (((20 ? 9223372036854775807 : 3127910525))))))));
                                var_22 = (min(var_22, (~2048176204)));
                                arr_17 [i_1] [i_0] [i_0] [i_0] [i_0] = (arr_4 [i_2 - 1]);
                            }
                        }
                    }
                    arr_18 [i_0] [i_1] [8] [20] = var_0;
                }
            }
        }
    }
    var_23 = var_16;
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    arr_27 [i_7] [0] [6] [i_5] = (max((max(var_1, var_18)), (arr_23 [i_5] [i_6] [i_6])));
                    var_24 = (min(var_24, (((((((max(-1, var_14)) + 2147483647)) << (((var_15 + 1841424657) - 8))))))));
                }
            }
        }
    }
    #pragma endscop
}
