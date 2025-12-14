/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    var_16 = (max(var_16, var_13));
    var_17 = (((((((931262848812320766 - 12) == (!1))))) < (min((var_9 || 931262848812320794), (min(1, var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (min(var_18, ((max(((((var_11 ? var_6 : var_8)) / (((((arr_0 [1] [i_1]) < var_2)))))), (arr_1 [9] [15]))))));
                arr_4 [i_0 - 2] [1] = (min(((max((max((arr_1 [i_0 - 1] [i_0 - 1]), var_3)), var_3))), ((2 & (((arr_1 [15] [17]) ? (arr_1 [17] [17]) : var_13))))));
            }
        }
    }
    #pragma endscop
}
