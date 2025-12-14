/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    var_18 = ((((!28713) << (var_0 + 1398034415))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = ((max(var_1, (arr_0 [i_1]))));
                var_19 = var_7;
                arr_6 [i_0] [i_0] = var_3;
            }
        }
    }
    #pragma endscop
}
