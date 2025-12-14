/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_5 ? var_5 : ((~(~var_12)))));
    var_15 = (max(var_15, var_4));
    var_16 = ((~(min(((var_1 ? var_12 : 1427994714)), var_4))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (max(-6529263919164349336, 0));
                    var_17 &= (arr_4 [i_0] [i_0] [i_1 - 1] [i_1 - 1]);
                }
            }
        }
    }
    #pragma endscop
}
