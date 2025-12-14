/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 30531;
        arr_4 [i_0] [i_0] |= (max(((((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))), (max((~var_7), ((min(63808, 1)))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        var_19 = (min(var_19, 9223372036854775792));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_20 = arr_12 [i_1 - 2];
                        arr_15 [i_1] [i_2] [i_3] [i_3] = (((arr_2 [i_1 - 1]) ? 0 : (arr_7 [i_3 + 1] [i_1 - 1])));
                    }
                }
            }
        }
        var_21 += (((((arr_9 [i_1 + 1] [i_1] [i_1]) ? (arr_8 [i_1] [i_1]) : var_17)) ^ (arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1])));
        arr_16 [i_1 - 2] = (((arr_0 [i_1 + 1] [i_1 - 1]) ? var_10 : 151));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                var_22 = (arr_23 [i_5]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_23 = (((-((max(0, 8696))))));
                            var_24 += (arr_17 [i_7]);
                        }
                    }
                }
            }
        }
    }
    var_25 = var_15;
    #pragma endscop
}
