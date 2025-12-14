/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = -1706417393;
                var_21 = (max((((((((arr_5 [i_0] [i_1] [i_0]) < var_3)))) + (min((arr_0 [i_0]), var_5)))), (arr_3 [i_0])));
            }
        }
    }
    var_22 |= ((-((var_17 ? ((1706417419 >> (6148133441420967710 - 6148133441420967684))) : (~1706417376)))));
    var_23 = (min(var_23, ((min(var_3, (max(4294967295, (~var_17))))))));
    #pragma endscop
}
