/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0 + 1] = (((((!((max((arr_2 [i_0]), -2103)))))) - ((max((max(20903, var_7)), (max(var_8, 2102)))))));
        var_10 = arr_2 [i_0 + 1];
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_11 = ((~((var_9 << (((((arr_1 [i_1]) + 4811)) - 24))))));
        arr_8 [i_1] = ((~(-32767 - 1)));
        var_12 = ((~((~(arr_6 [i_1] [i_1])))));
        var_13 = -2098;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_14 |= ((!(arr_9 [i_2] [i_2])));
        arr_11 [i_2] [i_2] = ((-11 ? -706 : -1));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_15 = ((-(arr_20 [i_4])));
                                arr_24 [i_3] [i_3] [i_4] [i_3] [i_4] [3] [i_7] = (((((((0 ? var_7 : 26325))) ? 8849 : (((arr_1 [i_7]) * var_5)))) / 2112));
                            }
                        }
                    }

                    for (int i_8 = 2; i_8 < 15;i_8 += 1)
                    {
                        var_16 ^= ((!((max(-8, ((var_2 ? (arr_20 [i_5]) : (arr_19 [i_3] [i_4] [i_3] [i_4] [i_5] [i_8]))))))));
                        arr_27 [i_4] [i_5] [i_4] [i_4] = (max(((((max(32766, 705))) ? -32758 : (arr_0 [i_8] [i_4]))), -10));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            {
                                arr_36 [i_3] [i_3] [i_3] [i_3] [i_4] = (((arr_35 [i_10] [0] [i_5] [i_5] [i_4] [i_4] [11]) / var_3));
                                arr_37 [i_10] [i_9] [i_4] [i_4] [i_3] = var_7;
                                var_17 = ((~(arr_18 [i_3] [i_4])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
