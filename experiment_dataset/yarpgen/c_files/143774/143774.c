/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_10 [i_0] [0] [i_1] [i_1] [i_0] [i_3] = (((max(var_3, (max((arr_8 [8] [6] [i_0] [2]), var_12))))) ? ((-(~0))) : (arr_9 [9] [i_1] [i_1] [9] [i_2] [i_3]));
                        arr_11 [i_0] [i_0] [5] [i_0] [i_0] = (0 - 1);
                        var_19 = var_7;
                        var_20 &= (arr_7 [i_1] [i_2] [i_3]);
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_21 = ((!(145 * var_6)));
                        var_22 = -58545;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_23 = (0 && 421248577);
                            arr_18 [1] [i_0] [i_6] [i_1] [i_6] = (arr_0 [i_0]);
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_24 = 1;
                            var_25 += (((arr_15 [i_7] [2] [i_2] [2] [i_0]) && (arr_15 [i_0] [i_1] [i_2] [1] [1])));
                            var_26 = (arr_16 [i_0] [i_1] [i_2] [i_0] [i_7]);
                        }
                        var_27 -= ((-(arr_20 [i_0] [i_0] [i_0] [i_5] [i_1])));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_26 [i_0] [i_2] [i_0] [4] [i_0] = (((arr_14 [i_0] [i_2] [i_1] [i_0]) ? var_7 : (arr_2 [i_0])));
                            arr_27 [i_0] [i_9] = (((arr_5 [i_1]) ? (arr_12 [i_0] [i_1] [i_9] [i_8] [i_8]) : (arr_12 [i_9] [i_8] [6] [i_0] [i_0])));
                            arr_28 [i_0] [i_8] [i_2] [i_1] [i_1] [i_0] = ((arr_4 [i_1] [i_2]) ? (arr_4 [i_1] [i_9]) : var_3);
                            var_28 ^= ((~(((arr_0 [8]) ? (arr_7 [0] [i_2] [0]) : (arr_8 [i_1] [i_2] [0] [i_9])))));
                            var_29 = (max(var_29, (arr_6 [i_0] [i_1] [4])));
                        }
                        var_30 = (65535 ^ -2147483642);
                        var_31 = (min(var_31, var_13));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_32 = (min(var_32, (~var_9)));
                                var_33 = (!0);
                            }
                        }
                    }
                }
            }
        }
    }
    var_34 = (min(var_34, (((!((((var_3 ? var_4 : 202)) > var_11)))))));
    var_35 = -var_1;
    #pragma endscop
}
