/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = ((max(var_10, (arr_4 [i_0]))));
                var_19 *= 24;
                var_20 |= (((arr_3 [i_1 - 1] [i_1 - 1]) ? (arr_1 [i_1 - 1] [i_1 - 1]) : ((max((arr_3 [i_1 - 1] [i_1 - 1]), var_5)))));
            }
        }
    }
    var_21 = ((var_15 * (((((var_17 ? var_9 : var_8))) ? -var_6 : ((4294967295 ? var_9 : var_11))))));
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 18;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_22 = var_6;
                            var_23 = (min(var_23, (arr_1 [i_4 - 1] [i_2 - 2])));
                        }
                    }
                }
                var_24 = ((max((arr_12 [i_2] [i_2 - 2] [i_2 - 1] [i_2 - 2]), (arr_14 [i_3 + 1] [i_3 - 2] [i_3] [7] [7]))) - ((((arr_6 [i_2]) ? (((arr_13 [i_2] [i_2] [i_2]) ? var_11 : var_1)) : (((min((arr_5 [i_2]), (arr_9 [i_3 + 2])))))))));
                var_25 = (min(var_25, ((((arr_4 [i_3]) + (((((11904 ? (arr_14 [i_2] [i_2] [i_2 - 2] [i_2] [i_3]) : (arr_7 [13])))))))))));
            }
        }
    }
    var_26 = ((((-var_12 < ((min(var_16, var_14)))))));
    #pragma endscop
}
