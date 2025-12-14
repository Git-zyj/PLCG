/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_15 ? 65532 : 16776192)))) ? (var_17 - -80) : -78);
    var_20 |= var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((var_1 ? -22 : (((arr_0 [i_0 + 2]) - (max((arr_5 [i_0 + 3] [i_0 + 3]), var_14))))));
                arr_7 [i_0] = -var_18;
                var_21 += 16776177;
            }
        }
    }
    #pragma endscop
}
