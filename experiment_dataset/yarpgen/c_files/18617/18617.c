/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_15 + (max(-1839281946, var_3))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (((arr_0 [i_0 + 2] [i_0 - 1]) ? (arr_0 [i_0 - 1] [i_1]) : (max(1839281945, 8635571161330737944))));
                arr_5 [i_0] [15] [i_1] = 8635571161330737944;
            }
        }
    }
    #pragma endscop
}
