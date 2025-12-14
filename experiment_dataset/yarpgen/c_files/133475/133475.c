/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_11 <= (((~2146435072) ? ((min(var_15, -735))) : var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (((min(0, 17395479237112165766))) ? (((0 | ((-(arr_5 [6])))))) : 8700881121748642577);
                arr_6 [i_0] = (~1608975334866528682);
            }
        }
    }
    var_18 = var_14;
    var_19 = ((60 << (((~var_6) + 50207))));
    #pragma endscop
}
