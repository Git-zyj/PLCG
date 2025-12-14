/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    var_20 = (max((min((var_12 != var_8), var_5)), var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = ((var_11 ? (((arr_3 [1]) ? (arr_0 [i_0] [i_0]) : (max((arr_3 [i_0]), var_14)))) : ((((!((min((arr_4 [i_1]), var_1)))))))));
                var_22 = 30111;
            }
        }
    }
    #pragma endscop
}
