/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = (min(0, ((!(arr_0 [i_0])))));
                var_16 = ((max(1335196663144416032, 112)));
                var_17 = ((((min(2887878817, var_15))) ? ((max((arr_1 [i_1] [i_0]), (arr_2 [i_0])))) : (((((arr_2 [i_0]) && (arr_1 [i_0] [i_1])))))));
            }
        }
    }
    var_18 = (max((!var_4), ((17111547410565135584 ? (var_3 && var_3) : 1335196663144416041))));
    var_19 = var_7;
    #pragma endscop
}
