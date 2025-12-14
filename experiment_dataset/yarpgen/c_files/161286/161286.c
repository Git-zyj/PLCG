/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((min(var_1, (((!((min(var_6, 14886117150097168479)))))))))));
                var_12 = (max((max((arr_6 [i_0] [i_1]), var_0)), (min(var_0, (arr_0 [i_1])))));
            }
        }
    }
    var_13 = var_6;
    #pragma endscop
}
