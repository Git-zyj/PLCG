/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((-2007979503 && ((max((min(var_1, 910972940)), (var_0 ^ var_4)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = ((!(((~(max(23681, 1743141180)))))));
                var_15 = (max(-127, (-2147483647 - 1)));
                var_16 = (arr_4 [i_0] [i_0] [i_1]);
            }
        }
    }
    var_17 = (max(var_17, (((((((var_4 ? var_9 : var_3))) == 0))))));
    var_18 = (min(var_18, ((((1536 & 3383994379) <= var_8)))));
    #pragma endscop
}
