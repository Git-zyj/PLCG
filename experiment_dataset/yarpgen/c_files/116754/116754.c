/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((min(-var_3, ((var_2 ? ((max(var_5, var_12))) : (min(234881024, var_9)))))))));
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((((var_14 ? (var_12 != var_6) : (arr_0 [i_0])))) ? (((var_11 - var_5) ? ((max(var_5, (arr_3 [i_0])))) : var_8)) : var_5));
                var_17 = (min((((30 ? ((234881024 ? 234881026 : 2007)) : var_12))), ((((min(-234881025, var_11))) ^ ((var_7 / (arr_0 [i_0])))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 6;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 6;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_0] [i_1] = (max(var_13, (arr_7 [i_0] [i_2 - 3] [i_3])));
                                var_18 *= (((~var_5) ? (arr_8 [i_4] [i_1 - 2] [i_2] [i_1 - 2] [i_0] [i_2]) : var_1));
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_3] [i_0] = ((((234881040 ? (min(0, -234881024)) : 2007))) ? (var_9 || var_10) : (((((var_9 & (arr_12 [i_0] [i_1])))) ? var_7 : -var_6)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (min(var_19, ((((-127 - 1) ? 17140 : 19571)))));
    #pragma endscop
}
