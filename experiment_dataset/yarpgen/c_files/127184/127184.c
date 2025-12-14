/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = (arr_3 [i_0] [i_0] [1]);
                var_21 -= (!var_7);
            }
        }
    }
    var_22 = (min(var_22, (~var_6)));
    var_23 = (min(var_23, ((((-(144115187002114048 - 13253387267304576919)))))));

    /* vectorizable */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_24 = (max(var_24, (arr_3 [i_2 + 1] [i_2 + 1] [i_2])));
        var_25 = (min(var_25, -var_5));
    }
    #pragma endscop
}
