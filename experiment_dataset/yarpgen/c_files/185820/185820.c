/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = (min(var_14, (((max(816396631433917415, var_0))))));
        var_15 = (min(var_15, (((!((((arr_1 [10] [i_0]) + var_8))))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                {
                    var_16 = (((arr_6 [i_2]) ? (arr_6 [i_2]) : 0));
                    var_17 = (min(var_17, 384));
                }
            }
        }
        var_18 = ((arr_8 [i_1 - 2]) | (arr_8 [i_1 - 2]));
        var_19 = (min(var_19, (!1073741823)));
    }
    var_20 = var_9;
    #pragma endscop
}
