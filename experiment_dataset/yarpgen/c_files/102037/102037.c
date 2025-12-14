/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [4] [i_1] [i_1] = (((((var_4 ? ((var_6 ? var_10 : var_6)) : var_3))) ? ((56215 & (arr_3 [1] [i_1] [i_1]))) : ((-((var_1 >> (((arr_0 [1]) - 25471))))))));
                arr_5 [i_0] [i_1] = var_9;
                arr_6 [i_1] [i_1] = ((max((((arr_0 [i_0 - 1]) ? (arr_0 [i_0]) : (arr_1 [6]))), ((((arr_2 [7]) | var_6))))));
            }
        }
    }
    var_13 = max(var_4, (((((max(var_7, var_1))) ? 112 : 2837201329))));
    #pragma endscop
}
