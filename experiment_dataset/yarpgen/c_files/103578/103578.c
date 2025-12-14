/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = ((var_7 ? (arr_0 [i_1]) : (((arr_1 [i_1] [i_0]) ? 0 : (arr_0 [i_1])))));
                var_14 = (min((max((arr_0 [i_0]), 1676588076)), (arr_4 [i_0] [i_1])));
            }
        }
    }
    #pragma endscop
}
