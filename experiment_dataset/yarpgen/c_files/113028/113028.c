/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 ^= (min((min(1914059750, 311038073)), (arr_4 [6])));
                var_18 = ((var_13 - (arr_1 [i_0] [i_0])));
            }
        }
    }
    var_19 -= var_5;
    var_20 = (((((min(var_7, var_3))) ? ((var_5 ? var_16 : var_9)) : var_13)));
    var_21 = ((var_1 != (max(((var_14 ? var_8 : var_11)), var_12))));
    #pragma endscop
}
