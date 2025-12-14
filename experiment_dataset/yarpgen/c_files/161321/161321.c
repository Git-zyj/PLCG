/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max((max((var_3 | var_4), (((var_10 ? var_11 : var_7))))), ((max(((var_9 ? var_8 : var_8)), (-6220 / 216))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] [i_2] [i_3] = (min(-80, 4454906277465272364));
                            var_12 = (min(992, -281474976710656));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_13 = ((((max(var_8, (var_8 & var_3)))) & (max((var_1 / var_4), var_5))));
                            arr_19 [i_0 + 1] [i_1] [i_4] [i_5] = ((var_4 ? (var_10 ^ var_3) : (max(var_4, var_2))));
                            arr_20 [i_5] [i_5] [i_5] [20] = ((((var_1 ? var_5 : var_5)) < (var_1 ^ var_2)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        {
                            var_14 = var_9;
                            var_15 = ((((max((min(var_5, var_11)), (var_2 || var_2)))) | var_2));
                        }
                    }
                }
            }
        }
    }
    var_16 = var_11;
    #pragma endscop
}
