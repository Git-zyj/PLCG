/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    var_19 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = ((-(max(var_10, (arr_2 [i_0 + 2])))));
                var_21 = ((var_10 ? 5648933915397620086 : -755));
            }
        }
    }
    var_22 *= var_11;
    #pragma endscop
}
