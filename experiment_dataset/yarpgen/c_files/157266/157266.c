/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += ((var_10 != ((var_4 ^ (!1950131502)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = ((max(-var_10, ((11 ? 411079660 : -6)))));
                var_17 -= (max((arr_2 [i_0]), (((arr_3 [i_0] [i_0] [i_1 + 1]) / (arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 1])))));
            }
        }
    }
    #pragma endscop
}
