/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 += (min(((var_11 - (~var_8))), var_11));
                var_15 &= ((!(max(var_1, var_1))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_16 = ((~(((var_11 / var_6) ? (!var_11) : 2776574212))));
                                arr_11 [i_0] [i_0] [i_0] [i_0] = max(((((var_0 ? var_2 : var_1)) & var_4)), (max(((var_8 ? var_6 : var_7)), var_2)));
                                var_17 += ((((-((max(var_6, var_6))))) ^ (min(var_12, (min(var_0, var_7))))));
                                arr_12 [i_3] &= min((var_4 && var_12), ((var_7 ? var_1 : var_0)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((((!var_2) ? ((var_2 ? var_1 : var_8)) : (min(var_0, var_8)))))));
                            var_19 = ((((min(var_12, var_4))) ? (!var_12) : (!var_8)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {
                        {
                            arr_24 [i_8] [i_1] [i_1] [i_0] = (((min(var_2, var_6))) ? (max((var_0 >= var_2), var_2)) : (var_5 | var_7));
                            var_20 += ((max(((max(var_8, var_1))), (var_8 + var_1))) != (min((~var_6), (!var_2))));
                            arr_25 [i_0] [i_0] [i_1] [i_7] [15] [i_8 - 2] = ((!(((max(var_2, 1518393070)) >= var_4))));
                            arr_26 [i_8 + 1] [i_0] [i_7] = (((min(-97, -684081445)) * (max((!var_1), (var_6 & var_7)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
