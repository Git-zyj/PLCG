/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((-(((2478108154 < var_3) ? (var_2 | var_11) : 6928))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (max(((((min(var_6, var_10))) ? ((-(arr_3 [i_0] [1]))) : (arr_3 [i_0] [i_1]))), (~-3)));
                var_17 = ((((((arr_1 [i_0]) || (arr_2 [i_0])))) > (arr_4 [i_0] [i_1] [i_1])));
            }
        }
    }
    var_18 = (max(-4648482559372062983, (((1 < (-127 - 1))))));
    #pragma endscop
}
