/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_12;
    var_19 = ((~(-32767 - 1)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (max(var_20, (((!((((arr_0 [i_0]) ? var_14 : ((max(1, var_2)))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 ^= var_16;
                    arr_9 [i_1] [i_1] [i_0] = (max(var_0, ((31552 ? (arr_0 [i_0]) : (((((arr_2 [i_1] [i_1]) == 557481943))))))));
                }
            }
        }
        var_22 = var_3;
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_23 &= (min(33983, 32767));
        arr_13 [i_3] [i_3] = 33983;
    }
    var_24 = var_10;
    #pragma endscop
}
