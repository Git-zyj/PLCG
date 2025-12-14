/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((((var_7 ? (arr_5 [i_1] [i_1] [i_1 - 1]) : (arr_5 [i_0] [i_1] [i_1 - 1]))) <= ((((!((min((arr_0 [i_0] [i_1 - 1]), 3213690394))))))))))));
                var_14 = ((((arr_1 [i_1 - 1] [i_0]) ? var_0 : (arr_0 [i_1] [i_0]))) - (((((arr_0 [5] [i_1]) / var_11)) << ((((-328102937 / (arr_3 [i_0 + 1]))) + 8736)))));
            }
        }
    }
    var_15 = (min(var_15, var_6));
    #pragma endscop
}
