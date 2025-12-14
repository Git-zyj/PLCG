/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_3 >> ((max(0, var_7))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (((((((max(1, 402653184))) ? (min(var_13, 40032994)) : (arr_1 [i_0 - 1] [i_0])))) ? var_5 : 15790));
                arr_5 [i_1] [i_0] [i_0] = (((51136 != (-2147483647 - 1))));
            }
        }
    }
    #pragma endscop
}
