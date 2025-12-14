/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0 + 1] = (arr_0 [i_1]);
                var_14 -= (((1871582388 & 2147483647) / 1871582388));
            }
        }
    }
    var_15 &= ((var_9 ? (((((var_10 ? 1871582388 : 16760832))) ? 4 : (((var_2 + 2147483647) >> var_3)))) : var_5));
    var_16 = ((-((var_1 >> (((var_2 | 4) + 9740))))));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = 1;
        var_17 = 3758096384;
        var_18 += (arr_5 [i_2] [i_2]);
        var_19 *= (((((~(arr_0 [i_2])))) ? (43 <= 43) : ((0 ? var_9 : var_9))));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_20 *= 60;
        arr_12 [i_3] = (max(6284546782295028420, 1));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    var_21 -= (arr_2 [i_4]);
                    arr_17 [i_3] [i_4] [i_3] [2] = (-9223372036854775807 - 1);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_23 [i_4] [i_4] = ((-5 == -1) || ((min(((1871582416 ? var_1 : 8192)), (((arr_18 [i_3] [i_4] [i_5]) ? (arr_4 [1]) : (arr_20 [i_6] [i_4] [i_4] [i_3])))))));
                                var_22 -= arr_0 [9];
                                var_23 ^= (arr_4 [i_5]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
    {
        var_24 -= (arr_25 [i_8]);
        var_25 -= ((32454 ? 1 : (-2147483647 - 1)));
        arr_26 [8] = -2147483647;
        arr_27 [i_8] = (-32767 - 1);
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 9;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                {
                    var_26 = var_11;
                    arr_32 [i_8] [10] [i_9] = var_8;
                    var_27 -= var_4;
                }
            }
        }
    }
    #pragma endscop
}
