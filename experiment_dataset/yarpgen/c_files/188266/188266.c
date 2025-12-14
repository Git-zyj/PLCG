/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 = var_2;
                var_12 = (min((((arr_2 [i_0] [i_0]) ? (arr_2 [i_1] [i_0]) : (arr_2 [i_0] [i_1]))), ((((arr_1 [i_1]) != (arr_4 [i_0] [i_0] [i_0]))))));
            }
        }
    }
    var_13 &= ((1757121355 ? (var_9 | var_7) : ((min(var_4, -1)))));
    var_14 = (min(((-(min(1757121367, 22)))), var_6));
    var_15 = (~var_2);
    #pragma endscop
}
