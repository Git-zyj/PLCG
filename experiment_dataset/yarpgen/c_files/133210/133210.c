/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((15 ? 3266152350549962514 : 186))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((65 ? ((((min(var_9, (arr_1 [i_0] [i_1])))) / -9937)) : 1)))));
                arr_5 [6] [i_0] [i_0] = (((arr_2 [i_0] [i_0] [i_0 - 1]) ? (arr_1 [i_0 + 1] [i_0 - 2]) : ((min(1, (arr_2 [i_0 + 1] [i_0] [i_0 + 1]))))));
                arr_6 [i_0] [i_1] = var_9;
            }
        }
    }
    #pragma endscop
}
