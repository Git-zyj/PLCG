/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_1 - 2] [i_0] = ((0 ? 0 : -28));
                var_17 = (min(var_17, ((((arr_5 [i_1 - 2] [i_1] [i_0]) * 0)))));
            }
        }
    }
    var_18 = (var_14 % var_4);
    var_19 = var_0;
    #pragma endscop
}
