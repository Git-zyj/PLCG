/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_12 -= 1;
        var_13 *= ((-2147483647 - 1) ? 127 : 2027080382);
        var_14 = (((arr_2 [i_0]) ? var_9 : var_10));
        var_15 = -var_6;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_16 = (((var_11 << (((arr_5 [i_1] [i_1]) - 234)))));
        var_17 = (min(var_17, ((max(var_3, ((max((max((arr_4 [i_1]), var_5)), var_5))))))));
    }
    var_18 = (max(var_18, var_10));

    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        var_19 = (max((max(-17855, 32208)), (arr_9 [i_2] [i_2 - 1])));
        var_20 = (max(-8111935434486495357, (((22232 ? (arr_9 [i_2 - 1] [i_2 + 2]) : (arr_9 [i_2 + 2] [i_2 - 1]))))));
    }
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 18;i_6 += 1)
                {
                    {
                        var_21 = var_6;
                        var_22 = ((-2147483647 ? 127 : 113));
                    }
                }
            }
        }
        var_23 -= ((-124 ? var_2 : 2795913193));
        var_24 = (max(var_24, (((((max(905256545, ((max(1, 32767)))))) < 21)))));
        var_25 = ((1 << (14109811616923792811 - 14109811616923792796)));
        var_26 ^= ((+(((127 + var_11) + -var_1))));
    }
    #pragma endscop
}
