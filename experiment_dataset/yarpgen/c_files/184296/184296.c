/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((~(max((arr_4 [i_0] [i_0]), var_4))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (max(((((max((arr_4 [i_1] [i_1 - 1]), 582443736))) ? (arr_0 [i_0]) : (max(var_6, var_1)))), ((min((arr_0 [i_1 - 1]), var_10)))));
                }
            }
        }
    }
    var_11 = (!8352227670165049700);
    #pragma endscop
}
