/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (((((max((arr_4 [i_0] [i_0] [i_1]), 8609072535318946874)) / (arr_2 [i_0] [i_0]))) | (((min((arr_5 [5]), var_1))))));
                arr_6 [i_0] [i_1] = ((max(1437989163, 7337140130610643282)));
            }
        }
    }
    var_16 = (((-1437989163 + 2147483647) >> (-1714959735 + 1714959749)));
    var_17 = 250;
    #pragma endscop
}
