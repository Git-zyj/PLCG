/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 33;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [14] [i_1 + 1] [12] &= -var_15;
                arr_6 [i_0] [i_0] = ((((!(arr_2 [i_1 - 2] [13]))) ? 25525 : ((3 + ((var_10 ? var_0 : var_0))))));
                arr_7 [i_0] = ((~((0 ? (arr_0 [12]) : (arr_2 [13] [13])))));
            }
        }
    }
    #pragma endscop
}
