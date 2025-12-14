/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (min(((min((arr_3 [i_0 + 1] [i_0]), 77))), (((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_4 [i_0])))));
                arr_6 [i_0] [i_1] [i_1] = (arr_1 [i_0] [i_1]);
            }
        }
    }
    var_17 *= ((var_14 / (((((25 ? -51 : var_3))) ? 54 : var_8))));
    #pragma endscop
}
