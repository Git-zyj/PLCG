/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    var_20 = ((!(((11023919184372176024 ? (-32767 - 1) : 27188)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0] &= ((var_13 ? ((((arr_2 [i_1 + 3] [i_0 - 2]) || (arr_0 [i_0 - 1] [i_1 + 1])))) : var_4));
                    arr_9 [i_2] [i_1] [i_0 - 1] = (((arr_4 [i_0]) ? (~65535) : (!var_9)));
                }
            }
        }
    }
    #pragma endscop
}
