/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] |= (min(0, ((max(-3674381670842355020, (arr_1 [i_0 - 2]))))));
                    var_18 ^= max((((arr_1 [i_0 - 3]) ^ (arr_1 [i_0 - 3]))), (((~(((arr_5 [i_1]) ? (arr_2 [i_0]) : (arr_0 [i_0] [i_1])))))));
                }
            }
        }
    }
    var_19 = (max(var_19, ((((((-((var_2 ? var_3 : var_7))))) ? var_6 : ((var_11 ? -3674381670842355019 : var_15)))))));
    var_20 = (var_7 ? var_0 : var_17);
    var_21 = (max((((((max(-2607, var_11))) ? var_11 : var_9))), ((((max(3674381670842355019, 3674381670842355036))) ? -2629 : ((2335 ? var_7 : var_7))))));
    #pragma endscop
}
