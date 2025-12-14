/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(((2749 ? 0 : 3321043356)))));
    var_15 = (min(-9, (max((max(5793256227231863283, 2901020572)), (((var_3 ? -1655664972 : 67106816)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 -= 20513;
                var_17 ^= (min(((4138733928 ? 329374007 : 14)), (max(var_5, ((21605 ? 1 : 32767))))));
                var_18 = (max((!4091368733), (((arr_5 [i_0] [i_0] [i_1]) == (arr_2 [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
