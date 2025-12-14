/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 ^= (max((!2894111582), (max(((max(var_9, -52))), 5394))));
                arr_6 [i_0] [i_1] = (max(3307059326, -20590));
            }
        }
    }
    var_19 = ((-20 < (((((59477 ? 6172939768969662507 : var_16))) ? -6172939768969662507 : 3995627431))));
    var_20 = (max(var_20, (!var_8)));
    #pragma endscop
}
