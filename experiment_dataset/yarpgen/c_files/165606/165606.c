/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_10 = (min(1073610752, (arr_2 [i_1 + 1] [i_1])));
                var_11 = (((((arr_3 [0] [i_1]) < 18206992618114431204)) ? (((arr_1 [12] [12]) ? (arr_2 [i_1] [i_1]) : var_9)) : 32752));
            }
        }
    }
    var_12 = (min(var_12, ((((((!(-2107 * 64)))) % (var_6 != var_2))))));
    #pragma endscop
}
