/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (max(((((arr_1 [i_1]) ? (arr_1 [i_1]) : var_9))), (((arr_1 [i_0]) ^ (arr_2 [i_0])))));
                var_16 = 3391165340383991541;
            }
        }
    }
    var_17 |= ((-(0 & 5)));
    var_18 = (!var_11);
    var_19 = var_9;
    #pragma endscop
}
