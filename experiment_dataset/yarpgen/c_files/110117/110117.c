/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = var_2;
        arr_3 [7] = var_11;

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            var_17 = (arr_1 [i_1 + 1]);

            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                arr_9 [i_1] [i_1] = ((!(arr_0 [i_1 + 2])));
                var_18 = (min(var_18, (!-1)));
                var_19 = (max(var_19, 0));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_20 = (arr_8 [i_4] [i_2 - 2] [i_1 + 1] [i_0]);
                            var_21 *= ((!(arr_14 [i_4] [i_2 + 1] [i_1 - 1] [i_1])));
                        }
                    }
                }
            }
            arr_18 [i_1] [6] [i_1] = (((arr_5 [i_1 + 2] [i_1 + 2] [i_1 - 1]) < var_3));
            arr_19 [i_1] [i_1] = ((-(arr_11 [i_1] [i_1] [i_1 - 2] [i_1] [i_1])));
        }
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            var_22 = (arr_6 [i_5] [i_5] [i_5]);
            var_23 = (arr_1 [i_5 + 1]);
        }
        arr_22 [i_0] [i_0] = arr_14 [i_0] [i_0] [i_0] [i_0];
    }
    var_24 ^= var_0;
    #pragma endscop
}
