/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 = ((!(-127 - 1)));
                    var_12 = (max((max(13, (((arr_6 [i_0] [i_0] [2]) ? 1 : 9)))), var_4));
                    arr_8 [i_1] [i_1] [i_0] &= ((((((-5928588685033286293 ? (arr_0 [i_0 - 2]) : 242))) ? (max(-23046, 14312229892688060293)) : var_8)) & (!var_0));
                }
            }
        }
    }
    var_13 = (65535 / var_0);
    var_14 = (((((((max(4006, var_1))) ? ((max(var_9, 1))) : var_0))) ? var_9 : 1085752817));
    #pragma endscop
}
