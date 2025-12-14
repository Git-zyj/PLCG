/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= 1711198521;
    var_18 = ((((((1711198521 ? 133258398 : var_8))) ? var_13 : ((var_15 ? -1711198539 : 1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((((((((28376 ? 1 : 1))) | var_11))) ? 1 : 1));
                arr_5 [i_0] [i_0] [i_0] = (min(((((((var_4 ? 1 : var_14))) + 4095))), (((!-1711198522) + (max(var_8, 1))))));
            }
        }
    }
    #pragma endscop
}
