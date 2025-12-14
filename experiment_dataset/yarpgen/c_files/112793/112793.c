/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_12 = -9136259985945540186;
        var_13 = -var_5;
    }

    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            var_14 ^= ((-(arr_1 [i_1])));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_15 ^= var_4;
                            var_16 = ((-(arr_5 [10])));
                            var_17 = var_3;
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_18 -= 3655973253;

            /* vectorizable */
            for (int i_7 = 2; i_7 < 12;i_7 += 1)
            {
                var_19 = var_11;
                var_20 = ((~(arr_6 [i_1] [i_1] [i_1 + 1])));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {
                        {
                            var_21 = 64;
                            arr_28 [i_8] [i_6] [i_7] [i_8] [i_9] = ((!(arr_21 [i_8])));
                            var_22 &= (arr_21 [0]);
                        }
                    }
                }
                var_23 = (!7596);
            }
        }
        /* vectorizable */
        for (int i_10 = 2; i_10 < 13;i_10 += 1)
        {
            var_24 = ((-(!5447020265118719694)));
            var_25 = 8245139726081948047;
            var_26 = 4236538656;
            arr_31 [i_1] [i_1] = (arr_4 [i_1 + 3]);
            var_27 = 58428650;
        }
        /* vectorizable */
        for (int i_11 = 3; i_11 < 12;i_11 += 1)
        {
            arr_36 [i_1] = (~7673982759295830192);
            var_28 = var_0;
        }
        var_29 = (((!(arr_18 [i_1] [i_1]))));
    }
    for (int i_12 = 1; i_12 < 13;i_12 += 1)
    {
        arr_41 [i_12] = (~1);
        var_30 = (arr_38 [i_12]);
        var_31 = ((((~(arr_0 [i_12] [i_12])))));
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 10;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 10;i_14 += 1)
        {
            {
                arr_48 [9] [9] [i_14] = 196;
                var_32 = var_2;
            }
        }
    }
    #pragma endscop
}
