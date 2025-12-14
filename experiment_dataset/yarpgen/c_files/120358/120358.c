/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_1 + 1] = (min(((((arr_2 [i_0] [i_1]) ? 1450854574 : var_0))), var_8));
                var_17 = -var_1;
            }
        }
    }
    var_18 = (max(((min(6591, (!var_0)))), ((~((max(var_1, 63942)))))));
    #pragma endscop
}
