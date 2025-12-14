/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_16 ^= ((~(arr_0 [i_0 - 1])));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_17 = ((1 ^ (arr_3 [i_0 - 3])));

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_18 = ((arr_1 [i_0] [i_0 - 3]) && var_11);
                var_19 = (arr_4 [i_0] [16] [i_2]);
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_20 = ((((arr_9 [i_0]) - var_10)));
                arr_10 [i_3] = 2478831974538162201;
            }
        }
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    {
                        var_21 = (((var_12 ? -394762116 : var_12)));
                        var_22 = var_7;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 20;i_8 += 1)
                {
                    {
                        var_23 = (((arr_0 [i_7]) + (arr_17 [i_0] [i_0] [i_8] [i_8 + 2])));
                        arr_24 [i_8] = (((arr_17 [i_0 - 4] [i_4 + 1] [i_8] [i_8 + 3]) >= (arr_6 [i_0 + 1] [i_4 + 1] [i_7 - 1] [i_8 + 3])));
                    }
                }
            }
            arr_25 [15] [15] = ((var_11 > var_9) ? (arr_5 [i_4] [i_0] [i_0]) : ((var_12 ? 12 : (arr_2 [i_4]))));
        }
    }
    var_24 *= var_10;
    var_25 = -1905033924;
    #pragma endscop
}
