/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            arr_13 [i_2] = var_9;
                            var_11 = (min(var_11, (arr_0 [i_0] [i_0])));
                            arr_14 [i_3] [i_2] = (((((1127295896585576501 ? (arr_9 [i_2] [i_2]) : 4064))) ? var_3 : 396003049));
                            arr_15 [i_2] [13] [i_3] = (~(arr_4 [i_0] [9] [i_1]));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        var_12 = (min(var_12, (arr_2 [i_0])));
                        var_13 = (max(var_13, (arr_8 [i_0] [i_1] [14])));
                        var_14 = (min(var_14, ((((var_5 ? 241 : (arr_9 [i_0] [i_0])))))));
                        var_15 = (min(var_15, (arr_8 [i_0] [i_1] [i_6])));
                        var_16 ^= (arr_11 [i_0] [i_0] [i_1] [i_0] [i_1] [i_6]);
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
        {
            arr_25 [i_0] &= arr_9 [0] [i_0];
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 19;i_9 += 1)
                {
                    {
                        arr_31 [i_0] [i_7] [i_7] [i_9] [i_0] [i_7] = (min((arr_16 [i_9] [i_9 + 1] [i_9]), (arr_23 [i_9 - 1] [9] [i_8 + 2])));
                        var_17 = (max(var_17, (((5191 ? 18347702135600174937 : 7890705606685671531)))));
                        arr_32 [i_0] [i_0] [i_8 - 1] [i_0] &= ((var_3 ? (~4064) : (max((arr_16 [i_7] [i_8 - 1] [i_9]), 1023))));
                    }
                }
            }
            arr_33 [i_0] [i_0] = ((99041938109376665 <= (min((((arr_10 [i_0] [0] [i_0] [i_0]) % (arr_10 [i_0] [i_0] [i_7] [i_0]))), (arr_28 [i_7] [i_7] [i_0])))));
            var_18 ^= ((18347702135600174937 >> (5350 - 5340)));
            var_19 = (min(var_19, 4064));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
        {
            var_20 &= ((var_9 ? (arr_19 [15] [i_10] [15] [i_10]) : (arr_30 [i_10] [i_0] [i_10] [i_10] [i_0])));
            arr_36 [i_10] = (arr_4 [i_0] [i_10] [i_10]);
            var_21 = (arr_22 [i_10] [3] [i_10]);
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            arr_39 [i_0] [i_0] [i_0] = (arr_5 [i_0] [i_11] [i_0] [i_0]);
            var_22 = (max(var_22, (arr_12 [i_0] [i_0] [i_11] [12] [i_0])));
        }
        var_23 = (min(-169817721, 169817720));
    }
    var_24 = var_2;
    var_25 &= var_7;
    #pragma endscop
}
