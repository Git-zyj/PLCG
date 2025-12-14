/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (max(var_1, var_5));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_12 = var_9;
        var_13 = var_6;
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_14 = (max((max(var_7, var_0)), var_7));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            arr_9 [i_1] [i_2] [i_2] = var_8;
            var_15 = var_10;
            var_16 |= var_8;
            arr_10 [i_1 - 2] [i_1] [i_1] = var_10;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_17 ^= var_4;
            arr_14 [i_1] [i_1] = var_8;
            arr_15 [i_1] = var_3;
            var_18 ^= var_10;
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 10;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                arr_27 [i_4 + 1] [i_5] [i_4] [i_4] = var_7;
                arr_28 [i_4] = var_2;
            }
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                var_19 *= var_9;
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        {
                            var_20 = var_0;
                            var_21 = var_4;
                        }
                    }
                }
            }
            var_22 = (max(var_22, var_3));
            var_23 = var_1;
            var_24 = (min(var_24, var_2));
            var_25 ^= var_1;
        }
        for (int i_10 = 3; i_10 < 8;i_10 += 1)
        {
            var_26 = var_6;
            var_27 = var_0;
        }
        var_28 |= var_6;
    }
    /* vectorizable */
    for (int i_11 = 3; i_11 < 8;i_11 += 1)
    {
        var_29 = var_8;
        var_30 ^= var_2;
        arr_42 [i_11] [i_11] = var_9;
        var_31 = var_1;
    }
    #pragma endscop
}
