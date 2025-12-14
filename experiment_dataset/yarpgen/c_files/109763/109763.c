/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = var_14;
                var_18 = (min((((arr_4 [7] [i_1]) ? 32767 : 131)), ((1 ? 1 : 65535))));
            }
        }
    }
    #pragma endscop
}
