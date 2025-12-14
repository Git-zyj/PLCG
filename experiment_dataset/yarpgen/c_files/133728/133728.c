/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((var_14 ? (((~var_15) & (var_6 - var_15))) : ((~(var_16 >= -13))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = (min(var_21, var_11));
                var_22 *= (((!9138758957237832532) - 9138758957237832532));
            }
        }
    }
    var_23 = (min(var_23, -248));
    var_24 = ((max((15255 && 9138758957237832554), (3415203658 != 9138758957237832537))) ? var_5 : var_9);
    #pragma endscop
}
