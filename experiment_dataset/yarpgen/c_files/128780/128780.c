/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = (max(var_12, (~var_4)));
        var_13 = (!-var_6);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_5 [i_1 + 1] = var_3;
        var_14 = var_10;
        arr_6 [i_1 + 1] = var_6;

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_10 [i_1] [i_2] = -var_10;
            var_15 = ((-(~var_10)));
            var_16 = (max(var_16, var_9));
            arr_11 [i_2] = var_6;

            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                arr_14 [3] [3] = (~var_4);
                var_17 ^= var_4;
            }
            for (int i_4 = 4; i_4 < 8;i_4 += 1)
            {
                var_18 = var_2;
                arr_19 [i_1] = var_1;
                arr_20 [i_4] [1] = var_10;
            }
        }
        arr_21 [i_1] = var_10;
    }
    for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_30 [i_5] [i_5] [i_5] [i_7] = var_6;
                    var_19 = (min(var_8, -var_5));
                }
            }
        }
        var_20 = ((~(min(((max(var_3, var_2))), var_8))));
        var_21 = (max(var_21, var_0));
        arr_31 [i_5] = (!var_9);
    }
    for (int i_8 = 1; i_8 < 16;i_8 += 1) /* same iter space */
    {
        var_22 = (max(1503824343, var_7));

        for (int i_9 = 3; i_9 < 16;i_9 += 1)
        {
            var_23 = (min((~var_5), ((min(32767, -32749)))));
            var_24 = (!3918796149);
            var_25 = (!var_8);
        }
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                {
                    arr_44 [i_11] [i_11] = -var_10;

                    for (int i_12 = 1; i_12 < 17;i_12 += 1)
                    {
                        var_26 = (min(var_26, ((min((max(var_3, var_8)), (~var_0))))));
                        arr_49 [i_11] [i_12 - 1] = var_11;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {
                    {
                        var_27 += var_8;
                        var_28 = var_6;
                        var_29 = -var_0;
                        arr_58 [i_15] [i_13] [i_15] = ((~(max(var_9, var_7))));
                    }
                }
            }
        }
    }
    var_30 = 0;
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 11;i_17 += 1)
        {
            {
                var_31 *= ((-(((min(-1877112157908486118, 9223372036854775807))))));
                var_32 = ((max((max(var_0, var_10)), var_5)));
                var_33 = ((min(((max(var_11, var_1))), (~39))));
            }
        }
    }
    #pragma endscop
}
