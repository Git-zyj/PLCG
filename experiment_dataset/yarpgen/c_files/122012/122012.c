/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_1, (((min(var_7, var_11)) - (!var_15)))));
    var_17 = ((((~(min(var_5, var_14)))) == (93 < 811923129)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = ((+(((arr_4 [i_0] [i_1]) - (arr_4 [i_1] [i_0])))));
                var_19 = (((((max((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1]))))) / (((((arr_0 [i_1]) * (arr_3 [i_0] [i_1] [i_1]))) + (min(-1, 95))))));
                var_20 = (~var_14);
            }
        }
    }
    #pragma endscop
}
