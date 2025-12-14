/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (0 <= 332311652);
    var_16 = ((((3962655626 ? var_5 : ((354055946 ? 11 : var_7)))) / (((((var_9 + var_4) != (1610592335 && var_14)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (arr_4 [i_1] [i_1] [i_1])));
                var_18 -= (((((~((550123834 << (65535 - 65510)))))) ? (((arr_2 [i_1] [i_0 - 1]) & (arr_4 [i_1] [i_0 + 1] [i_1]))) : 2147483647));
            }
        }
    }
    #pragma endscop
}
