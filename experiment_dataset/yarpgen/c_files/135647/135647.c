/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max((((max(var_15, var_7)) >> (var_0 - 1254903632))), var_16);

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = arr_4 [13] [i_2];
                    var_20 |= ((max((arr_3 [i_0] [i_2 + 1]), var_14)));
                    var_21 += (arr_2 [i_1] [4]);
                }
            }
        }
        var_22 += 106;
        var_23 *= (max(((((~-91) < (arr_5 [i_0] [i_0])))), (arr_3 [8] [i_0 - 2])));
        var_24 *= var_8;
    }
    #pragma endscop
}
