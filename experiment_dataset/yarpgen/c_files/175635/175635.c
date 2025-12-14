/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((((!var_8) ? (var_2 == var_11) : var_1)), ((min(var_9, var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (min((min((arr_1 [i_0 - 2] [i_0 - 1]), (arr_3 [i_0 + 2] [i_0 - 2]))), (7397205428462507604 || 7177664029385464124)));
                var_14 = (arr_1 [8] [i_1]);
            }
        }
    }
    var_15 = (((!(var_10 / var_5))));
    #pragma endscop
}
