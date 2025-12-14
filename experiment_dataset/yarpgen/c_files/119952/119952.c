/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 + 1] [i_2] = (((((-28184 ? 1 : 1))) < ((1 ? 95 : 2959394177))));
                    arr_9 [0] [i_1] [i_2] = (((var_1 | -62) <= (arr_4 [i_2] [i_1] [i_0])));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 24;i_3 += 1)
    {
        var_17 ^= (((var_10 - var_15) || (((+(max((arr_11 [i_3]), 1)))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        arr_19 [i_3] [i_4] [i_5] [i_3] = (max((min(var_8, (arr_10 [i_3]))), var_12));
                        var_18 = (((((arr_17 [i_3 - 1] [i_3 + 1]) && var_13)) ? (((arr_17 [i_3 + 1] [i_3 - 1]) - (arr_17 [i_3 - 1] [8]))) : (arr_17 [i_5 - 3] [i_6])));

                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_19 ^= (min((arr_13 [i_3 - 1] [i_5 - 1]), var_16));
                            var_20 = (min(var_20, (arr_16 [i_7] [1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
