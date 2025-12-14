/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((((var_1 ? var_8 : (arr_1 [i_0]))))) ? ((min((arr_5 [i_1 + 1] [i_1 + 2]), 23253))) : (min((~var_7), ((max(var_2, var_7)))))));
                var_11 = (max(-32756, var_8));
            }
        }
    }
    #pragma endscop
}
