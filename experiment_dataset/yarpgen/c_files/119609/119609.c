/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_8 [2] [8] = (max((max(-31738, (arr_1 [i_0]))), ((((var_1 ? (arr_2 [0]) : (arr_7 [i_1] [6])))))));
                arr_9 [i_0] [i_0] = (((arr_0 [i_1] [i_0]) ? -89 : 24724));
            }
        }
    }
    var_11 = (min((max(((max(var_9, var_8))), (max(var_6, var_10)))), var_8));
    var_12 &= (min(var_8, 31737));
    var_13 = var_5;
    #pragma endscop
}
