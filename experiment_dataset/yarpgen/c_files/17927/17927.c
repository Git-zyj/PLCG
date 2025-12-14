/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = 63;
                    arr_8 [i_0] = (((((0 ? (arr_1 [i_0]) : -4227784169323558095))) ? ((max(-4447307555483678987, (arr_4 [i_0])))) : 0));
                    var_18 = (arr_0 [i_0] [i_0]);
                }
            }
        }
    }
    var_19 += (min((--0), var_4));
    #pragma endscop
}
