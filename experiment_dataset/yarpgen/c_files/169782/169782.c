/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_15 -= (max((max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))), (max((arr_1 [i_0 - 2]), (arr_1 [i_0 - 1])))));
                var_16 = (max(var_16, ((((((~(arr_3 [14] [i_0])))) ? (((arr_0 [i_1 + 1]) | (arr_0 [i_1 + 3]))) : (arr_0 [i_1 + 3]))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, (((((min((arr_2 [i_3 + 3] [i_1 + 2]), (arr_2 [i_3 - 2] [i_1 + 3])))) ? (((+(((arr_0 [i_1 + 1]) ? (arr_1 [i_1]) : (arr_3 [i_1] [i_0])))))) : ((1 | (max((arr_2 [i_2 - 1] [i_2 - 1]), (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 2] [5]))))))))));
                            var_18 -= ((((((arr_1 [i_0 + 1]) >= (arr_1 [i_0 + 1])))) & ((((min((arr_4 [i_0] [i_1] [i_3]), -11500)) > 0)))));
                        }
                    }
                }
                var_19 = (max((((~((((arr_1 [i_1 + 3]) || (arr_6 [i_0] [4] [16] [16] [i_1 + 3] [i_1 + 3]))))))), (((arr_7 [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 2] [i_1 + 3]) & (arr_7 [i_1] [3] [i_1] [i_1] [i_1 + 2] [i_1 + 1])))));
            }
        }
    }
    var_20 = (max(var_20, (((((!(((var_14 ? var_7 : var_6))))) ? ((var_13 ? (max(var_9, var_14)) : (((var_0 ? 9223372036854775807 : var_13))))) : var_9)))));
    var_21 = (((((var_6 ? var_14 : var_5))) ? var_4 : ((var_14 ? 64295 : var_3))));
    var_22 = ((min(var_7, ((min(var_7, var_6))))));
    #pragma endscop
}
