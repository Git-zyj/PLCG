/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0 + 1] [9] [i_0] = (~(min(var_9, (((var_0 * (arr_5 [i_0])))))));
                var_11 = ((+((var_2 ? (min((arr_5 [i_1]), (arr_2 [i_1] [i_1]))) : var_0))));
            }
        }
    }
    #pragma endscop
}
