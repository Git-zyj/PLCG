/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_14 = (arr_0 [i_0 + 1]);
                var_15 += 324435761;
            }
        }
    }
    var_16 = -50;
    var_17 = ((var_0 + (var_4 & var_9)));
    var_18 = (min(((1 ? 5204147673127987708 : 8128)), ((((~10187) ? 11 : 58230)))));
    #pragma endscop
}
