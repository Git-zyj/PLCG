/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 13651948984961785856;
    var_17 = ((((var_9 ? (var_1 && var_8) : (~-106))) ^ var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] = 108;
                    var_18 |= max((arr_0 [i_1] [i_2]), 125);
                    arr_9 [i_0] [i_1] [i_2] = ((((arr_2 [i_0]) ? (arr_2 [i_1]) : (arr_2 [i_2]))));
                    arr_10 [i_0] [i_1] [i_0] [i_2] = ((-(min((arr_7 [i_0] [i_0] [i_1] [i_2]), (arr_7 [i_2] [i_0] [i_0] [i_0])))));
                }
            }
        }
    }
    var_19 = var_7;
    #pragma endscop
}
