/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_9, var_4));
    var_15 = ((-2496802084559762626 || (var_0 && 12704)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_16 -= var_1;
                var_17 = (min(var_17, (((((((min(29996, (-127 - 1))))) & ((29996 ? 35566 : 4294967295))))))));
                var_18 = (((arr_0 [i_1 + 2] [i_1]) && var_8));
            }
        }
    }
    #pragma endscop
}
