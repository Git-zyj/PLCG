/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = (!0);
                var_15 = (max(var_15, ((~(((arr_0 [4]) ? (arr_3 [i_1 - 2] [i_1 - 2]) : (arr_3 [i_0] [i_0])))))));
                var_16 = (-127 - 1);
            }
        }
    }
    var_17 = (var_10 || var_3);
    #pragma endscop
}
