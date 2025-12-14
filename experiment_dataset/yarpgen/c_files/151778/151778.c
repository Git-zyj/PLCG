/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((~((-89 ? 14 : var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_1 - 2] = (((((arr_0 [i_0 + 1] [19]) ? (-127 - 1) : (arr_3 [i_1 + 2]))) >= (arr_3 [i_0 + 1])));
                arr_5 [5] = (min((((arr_1 [i_1] [i_1 + 4]) & (arr_0 [i_0] [i_1 + 4]))), ((min((arr_0 [i_0 - 2] [i_1 - 2]), (arr_0 [i_0 - 2] [i_1 + 2]))))));
            }
        }
    }
    var_18 = var_8;
    var_19 = (((var_14 < var_11) & (min((~var_3), (var_10 | var_3)))));
    #pragma endscop
}
