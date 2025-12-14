/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (22458 ? ((max(((var_5 ? var_9 : var_4)), ((var_10 ? 32599 : var_7))))) : var_11);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 |= 4611650834055299072;
                    var_14 = ((-((var_10 ? (min((arr_7 [12] [i_0]), 32580)) : ((((arr_1 [i_0]) / var_5)))))));
                    arr_10 [i_0 - 1] = ((~((var_9 ? (arr_2 [i_1 + 1] [17]) : (arr_6 [i_1 - 1] [4])))));
                    var_15 -= (min((arr_9 [i_0 + 3] [i_0 + 1]), ((~(arr_9 [i_0 + 3] [i_2])))));
                }
            }
        }
    }
    var_16 -= ((var_11 ? var_7 : ((-32581 ? (var_1 / var_0) : (((min(var_1, var_1))))))));
    var_17 |= var_6;
    var_18 = max(var_11, (~14841175380801453172));
    #pragma endscop
}
