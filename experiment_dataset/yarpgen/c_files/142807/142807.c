/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!((((!var_12) ? ((min(72, -19630))) : (~var_9))))));
    var_18 = (max(var_18, (((min(var_14, var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (max(((max(var_9, 0))), (min((arr_3 [i_1 + 1]), var_4))));
                arr_6 [i_0] [i_1] [i_1] = var_14;
            }
        }
    }
    #pragma endscop
}
