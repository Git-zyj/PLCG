/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 ^= ((~(arr_2 [i_0 - 2])));
                var_19 = 1279329580;
            }
        }
    }
    var_20 += ((((((var_2 ? var_11 : var_2)))) ? (!var_15) : ((((min(var_1, var_8))) ? ((2304331586 ? var_4 : -6892891348055651097)) : var_11))));
    #pragma endscop
}
