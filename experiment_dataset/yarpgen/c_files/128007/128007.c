/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (2147483641 ? var_8 : -700702256);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = (max((arr_0 [6]), (arr_0 [i_0 + 2])));
                arr_6 [i_0] [i_1] = 2147483619;
            }
        }
    }
    var_15 = var_4;
    #pragma endscop
}
