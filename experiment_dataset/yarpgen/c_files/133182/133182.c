/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((max(11422147241103289388, var_8), var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = ((((+(max((arr_2 [i_1]), 7024596832606262250)))) < ((((arr_4 [9]) ? (!3907773581008585193) : (!var_0))))));
                var_12 = (((max(-7024596832606262227, 11422147241103289366)) - ((((((-4789 - (arr_6 [i_0] [i_1 - 3])))) ? (arr_6 [i_1 - 3] [i_1 - 3]) : (((arr_6 [i_1 - 1] [i_0]) ? var_3 : (arr_4 [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
