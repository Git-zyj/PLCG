/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-((-124 ? var_14 : (((min(-124, 108))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((-(~-124)));
                var_20 = (min(var_20, (((-(!-30))))));
                var_21 *= (((((~((min(-30, 40536)))))) ? (max(-30, 4294967295)) : ((((!(((-4670122675524267181 ? 1 : -124)))))))));
            }
        }
    }
    #pragma endscop
}
