/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = ((-((min((max(var_2, -9951)), var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_12 ^= var_0;
                var_13 = (arr_4 [i_0 + 2]);
            }
        }
    }
    var_14 = (min(var_14, (((((((250 ? var_7 : var_5))))) > var_1))));
    #pragma endscop
}
