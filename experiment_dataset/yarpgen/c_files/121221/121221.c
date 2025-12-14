/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!(-var_4 * var_2)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = (max(var_16, ((min((-124 * var_12), ((var_4 ? ((var_10 ? (arr_3 [i_1] [i_0]) : var_4)) : var_11)))))));
                var_17 = ((((((arr_1 [i_1]) - var_14))) < ((max(-25856, 1)))));
            }
        }
    }
    #pragma endscop
}
