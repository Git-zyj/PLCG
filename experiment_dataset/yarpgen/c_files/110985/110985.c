/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] |= ((var_2 ^ (arr_3 [i_0] [i_1 + 1])));
                var_18 = (min(var_18, (((arr_3 [i_0] [i_1 + 1]) / (((((241 ? 18 : var_11)))))))));
            }
        }
    }
    var_19 *= var_11;
    #pragma endscop
}
