/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    var_14 = ((((((var_8 ? 3 : var_8))) ? 18446744073709551611 : ((var_4 ? var_4 : 18446744073709551611)))));
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = ((!(((-31269 ? -1496737873 : 13368698030045615447)))));
                arr_7 [i_1] [i_0] [i_0 + 1] = ((14972744544110431245 / (arr_3 [i_0] [0])));
                var_17 += ((0 ? ((min(var_9, ((min(-22, -5777)))))) : (((arr_3 [i_0] [i_0 - 1]) ? (((arr_2 [16] [i_1]) ? (arr_4 [i_0 + 1]) : 1945927690)) : (min(var_4, (arr_4 [i_1])))))));
            }
        }
    }
    #pragma endscop
}
