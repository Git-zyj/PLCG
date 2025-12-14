/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-4852390695617769801 - ((var_0 + (4090668861 + 2463612220)))));
    var_20 = (((((1831355076 ? 16041773940936502175 : 5809623237541416943))) ? ((var_9 ? 3638892662 : (max(29600, 1674628726)))) : 2278546649));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = (min((~1674628719), (~-29605)));
                var_22 -= (min((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 - 1]))), 29600));
            }
        }
    }
    #pragma endscop
}
