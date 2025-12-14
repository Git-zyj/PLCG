/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_0 ? (var_0 + -105) : (~0))) < ((((max(127, var_0))) / ((max(var_3, var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = ((!((((arr_0 [i_1]) + ((max(var_2, (arr_4 [i_1])))))))));
                var_12 = (max((arr_2 [i_0]), var_10));
                var_13 -= ((((((arr_0 [i_1]) ? var_10 : var_9))) ? 127 : (max(var_7, ((min(var_1, (arr_0 [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
