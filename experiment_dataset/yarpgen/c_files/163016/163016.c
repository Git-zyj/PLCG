/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((1066165363 ? 18 : 17828515675043884924)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = ((268369920 ? 65535 : 65530));
                var_13 = (max(var_13, ((((arr_3 [i_0 + 1]) ? var_3 : (max((((arr_0 [i_1]) ? (arr_2 [i_0] [i_1] [i_1]) : var_9)), (arr_0 [11]))))))));
                var_14 = (min(var_14, ((((arr_3 [i_0]) ? ((((arr_1 [i_0 + 1]) << (var_0 - 504750047221283263)))) : (min((((arr_0 [i_1]) ? (arr_3 [i_0]) : (arr_1 [i_1]))), (arr_0 [i_0 + 2]))))))));
            }
        }
    }
    var_15 = var_2;
    #pragma endscop
}
