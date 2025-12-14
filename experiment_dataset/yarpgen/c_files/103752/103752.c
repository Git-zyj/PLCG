/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_0 ? -921638999 : 921638998))) | (((var_3 - var_7) ? var_14 : (var_7 * -16384)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [5] [5] = (((921638998 / 16383) ? (+-2477823967) : ((max(var_7, (arr_2 [i_0] [i_1]))))));
                var_16 = min((((arr_1 [i_1]) ? (arr_1 [i_0]) : var_6)), ((((((-2417 ? 6690 : var_7))) ? ((min(64, -40))) : -16383))));
            }
        }
    }
    var_17 = (min(var_17, var_9));
    var_18 = var_9;
    #pragma endscop
}
