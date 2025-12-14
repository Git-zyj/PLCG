/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, -var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = (!(!1));
                var_17 = (max(var_17, (((((arr_1 [i_0] [i_1]) < (arr_1 [i_0] [i_0]))) ? (min(((((arr_0 [i_1]) != 1))), (min(1, (arr_1 [i_1] [i_0]))))) : var_15))));
            }
        }
    }
    #pragma endscop
}
