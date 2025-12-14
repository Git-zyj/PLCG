/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((~((716625079 << (3916 - 3915))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((((~var_14) >= (((arr_4 [i_0] [i_0]) ? -3917 : var_15))))) >= (((((var_7 ? var_2 : var_6)) < 1)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [1] [i_2] = (max((((((((arr_0 [i_1]) ? 230 : var_3))) ? var_10 : var_8))), ((~(arr_14 [i_4] [i_3] [i_2] [i_1] [i_0])))));
                                var_17 = (((((((((arr_13 [i_2]) - 20749)) + 2147483647)) << (((((arr_8 [i_2] [i_2] [i_2] [i_2 + 1]) + 5861873769964833289)) - 9)))) >= (max((!var_12), var_14))));
                                arr_16 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] [7] = (((max((((arr_1 [i_0]) ^ (arr_3 [i_0] [i_1 - 2]))), 26)) * (arr_9 [i_1 + 1])));
                                arr_17 [i_0] [i_1] [i_1] [i_3] [i_2] = ((min(1301718089, (((var_9 ? (arr_10 [i_0] [i_2]) : var_15))))) ^ ((((229 & var_10) ^ 1))));
                            }
                        }
                    }
                }
                arr_18 [14] [i_1 - 2] [i_1] = (!43223);
            }
        }
    }
    #pragma endscop
}
