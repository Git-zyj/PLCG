/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = 7353265807453307694;
                var_14 = ((!(((7353265807453307722 << (((((arr_1 [i_0]) | var_10)) - 3901354813)))))));
                arr_5 [i_0] [i_1] = (!var_2);
            }
        }
    }
    var_15 = var_11;
    #pragma endscop
}
