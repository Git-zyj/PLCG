/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] &= ((var_6 ? (arr_1 [i_0]) : -6396208339479539733));
                arr_5 [14] [i_1] = (~6396208339479539733);
            }
        }
    }
    var_13 -= (((max((~240), (var_5 / 250))) <= (--1525216418)));
    #pragma endscop
}
