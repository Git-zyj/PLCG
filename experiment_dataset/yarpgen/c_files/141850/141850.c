/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = ((~(((-9223372036854775807 - 1) ? 2614668615 : 1680298700))));
                arr_8 [i_0] [i_0] [i_1] = ((+(((~-26857) * 0))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                arr_13 [i_2] = ((9223372036854775807 ? (~-26851) : ((4294967272 | ((253173359 ? 4870822189468630811 : 9))))));
                arr_14 [i_2] [i_2] = ((-2614668615 << (-9223372036854775807 & 2937473431)));
            }
        }
    }
    var_14 = (max(var_14, ((((var_5 && var_0) ? (~65535) : 1)))));
    #pragma endscop
}
