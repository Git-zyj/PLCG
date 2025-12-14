/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_1] [4] [i_0] = (max((arr_4 [i_1]), (max(3895155060, (arr_1 [i_0])))));
                var_17 = 3822879368;
            }
        }
    }
    #pragma endscop
}
