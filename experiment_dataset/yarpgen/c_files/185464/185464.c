/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((!var_4) ? var_16 : ((max(var_7, var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] = var_18;
                var_20 = (~-var_5);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_21 -= (max(((((max((arr_2 [i_0] [i_0]), (arr_12 [1] [0] [16] [i_3]))) < 9072))), (max((max(var_1, 56454)), ((min(var_12, (arr_5 [i_0] [i_0]))))))));
                            arr_14 [i_2] = var_17;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_22 -= ((-((~((var_0 ? (arr_12 [16] [2] [i_4] [i_5]) : 56463))))));
                            var_23 = ((max((var_8 && 14), (arr_16 [i_1] [i_1 - 1] [21]))) ? ((var_17 ? (arr_2 [i_1 - 1] [i_1]) : var_18)) : ((var_4 ? 0 : (((arr_19 [3] [13] [3] [i_5]) ? (arr_2 [0] [18]) : var_10)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
