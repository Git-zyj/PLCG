/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((!(((((((arr_5 [i_2]) == 1))) + ((min(255, var_0))))))));
                        var_12 = (((((((((arr_5 [8]) ? (arr_10 [i_3]) : var_1))) ? (max(var_9, 1)) : (arr_9 [i_2 + 2] [i_2 + 1] [i_2] [i_2 - 2] [i_2])))) ? var_4 : ((((14741085477881774890 != 227662390) == (((arr_0 [i_2 + 2]) + var_8)))))));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 9;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_13 = (((((32767 ? 7 : var_6))) ? ((((!(arr_16 [i_0] [i_0] [i_7]))))) : var_9));
                            var_14 = (arr_20 [i_0] [i_4] [i_0] [10] [i_7] [i_7] [i_5 + 1]);
                        }
                    }
                }
            }

            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 7;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 8;i_10 += 1)
                    {
                        {
                            var_15 = 0;
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_9 - 2] [i_10] = (((arr_13 [i_0] [i_4]) & (!var_5)));
                            var_16 = arr_17 [i_10 + 1] [i_0] [i_8] [i_0] [i_0];
                        }
                    }
                }
                arr_33 [i_0] [i_4] [i_0] [0] = 2495;
            }
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        {
                            arr_41 [i_0] [i_12] [i_0] [i_4] [i_0] = var_5;
                            var_17 = ((var_4 - ((var_8 - (arr_24 [i_11])))));
                        }
                    }
                }
                arr_42 [i_0] [8] [i_0] [i_0] = var_5;
                var_18 ^= (arr_26 [i_11] [i_11] [i_4] [i_4] [i_0] [i_0]);
            }
            arr_43 [i_0] [0] [1] = (arr_17 [i_4] [i_0] [i_0] [i_0] [i_0]);
        }
    }
    var_19 *= var_8;
    var_20 = (min(1, var_7));
    #pragma endscop
}
