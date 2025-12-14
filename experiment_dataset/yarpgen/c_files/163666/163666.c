/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((((!-7104690476567015401) <= var_7))), var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = (((((((min(211, var_9))) ? (!var_9) : var_4))) <= ((var_1 ? (min(-22, 110)) : (arr_1 [i_1 - 3] [i_1 - 2])))));
                arr_8 [i_1] [i_1] = (min(var_1, 5584432020709664999));
            }
        }
    }
    var_12 = (min(var_12, ((max((-22 || 9223372036854775807), 6)))));
    #pragma endscop
}
