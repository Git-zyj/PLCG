/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = (min(122, 2372872943));
                var_19 = var_3;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                var_20 = (((arr_1 [i_2] [i_3]) ? ((((~var_12) ? 124 : var_11))) : ((((min((arr_7 [i_2] [i_3]), 121))) ? 2455 : ((10560526487102769668 ? 13210462272850753902 : var_9))))));
                arr_10 [i_3] = var_0;

                /* vectorizable */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    var_21 = var_2;
                    var_22 -= (var_13 * var_6);
                    arr_14 [1] [i_3] [i_4] = (arr_12 [i_2] [i_3] [i_4]);
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_23 = (max(var_23, ((((((~121) * var_16)) + (min(((var_16 ? (arr_5 [4]) : var_4)), var_2)))))));
                            arr_20 [i_3] = ((var_14 ? -66 : (arr_11 [i_2] [i_2] [i_5 - 1] [i_5])));
                            var_24 = (max(var_24, (((~(!1437))))));
                            var_25 += ((~(((arr_11 [i_5] [i_2] [i_2] [i_2]) ? var_5 : (arr_11 [i_5] [i_5 - 1] [10] [i_2])))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            {
                var_26 = (((arr_3 [i_7]) <= ((((arr_3 [i_7]) && -122)))));
                var_27 = (((((arr_15 [i_7] [i_8] [i_7] [i_8]) << (((arr_3 [19]) + 12)))) / ((((arr_4 [i_7]) >= var_8)))));

                /* vectorizable */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    arr_29 [i_7] [5] [i_8] [i_7] = var_10;
                    var_28 &= 13210462272850753896;
                }
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    arr_33 [i_7] [1] [i_7] = -32766;
                    arr_34 [11] [i_7] [11] = ((((arr_31 [i_7]) * ((((var_16 <= (arr_6 [i_7]))))))) * (((3629001029 ? (arr_27 [i_7] [i_7] [5] [5]) : (arr_24 [i_7] [i_8] [i_7])))));
                }
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    arr_38 [i_7] [i_8] [i_7] = (((1 << (((((arr_5 [i_7]) + 292)) - 10)))));
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 14;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            {
                                arr_45 [i_7] [i_8] [i_7] [i_7] [i_13] = (arr_24 [i_7] [i_7] [i_7]);
                                var_29 ^= (arr_25 [10] [i_8] [2] [12]);
                                var_30 *= (arr_30 [10]);
                            }
                        }
                    }
                }
                var_31 = var_16;
            }
        }
    }
    #pragma endscop
}
