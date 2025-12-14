/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = 14;

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            var_13 += -10;
            var_14 = (min((arr_1 [i_1] [i_1 - 1]), var_6));
            var_15 = (arr_1 [i_1 + 4] [i_1 + 4]);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_16 = (min(var_16, (arr_9 [i_0] [1] [i_4 + 1] [i_3] [i_4 - 1])));
                            var_17 = (arr_2 [i_0]);
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_18 = 10;
            var_19 = (max(var_19, var_8));
        }
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            var_20 = (max(var_20, (1 == var_7)));
            var_21 = max((min((arr_11 [i_0] [i_6 - 2] [i_6] [11] [i_6 - 2] [i_6 - 1]), (arr_11 [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6 - 2] [i_6]))), ((max(((min(var_0, var_10))), (~var_4)))));

            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                arr_22 [i_7] [i_6] [i_0] [i_0] = (max(((max((arr_5 [i_6 + 1]), 52835))), ((var_2 ? ((max(30176, var_7))) : (((arr_4 [i_0] [i_0]) | (arr_7 [i_0] [i_0] [i_7] [i_0])))))));
                var_22 = var_12;
            }
            arr_23 [i_0] [i_0] [i_0] = (min(var_7, (arr_9 [i_0] [2] [1] [i_0] [i_0])));
        }
    }
    var_23 ^= 109;
    var_24 = 30176;
    #pragma endscop
}
