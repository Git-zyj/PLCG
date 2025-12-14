/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_15 -= (((arr_4 [2] [i_1 + 1] [i_1 + 1]) / var_5));
                arr_6 [i_0] [i_0] = 4324185994787998271;
            }
        }
    }
    var_16 += var_11;
    var_17 += var_14;
    var_18 &= (((!(~2686422491504948973))) ? var_0 : ((var_14 ? var_5 : ((13975873881563342304 ? var_12 : 18446744073709551615)))));
    #pragma endscop
}
