/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [11] = (((-(arr_1 [i_0] [i_0]))));
        var_14 = (arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 = ((91 ? -2320829902392343729 : 16515820452706392407));
                    var_16 |= var_10;
                    arr_9 [i_2] [i_1] [i_0] = ((arr_7 [6] [i_2] [5] [i_0]) + (((((var_6 & (arr_4 [i_1])))))));
                    var_17 ^= (arr_7 [i_2] [i_2] [i_1] [i_0]);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        var_18 = arr_4 [i_0];
                        arr_19 [i_5] [i_4] [i_0] [i_0] = ((~((~(arr_6 [i_3] [i_3] [2])))));
                        var_19 ^= (~0);
                        arr_20 [i_3] = -11600;
                    }
                }
            }
        }
        var_20 = (min(((~(((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_13 [i_0]) : (arr_10 [i_0]))))), (((arr_12 [i_0] [i_0]) ? (arr_12 [i_0] [i_0]) : (arr_12 [2] [i_0])))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        arr_25 [i_6] = ((((((arr_22 [i_6] [i_6]) || (arr_24 [i_6] [i_6])))) | (arr_21 [i_6])));
        arr_26 [0] &= (~8191);
        var_21 = (max(var_21, (((arr_22 [12] [12]) ? (arr_22 [18] [18]) : (arr_22 [6] [6])))));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            {
                var_22 = (arr_21 [i_7]);
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 7;i_11 += 1)
                        {
                            {
                                var_23 = ((((max((arr_35 [i_11 + 2] [i_11 + 3]), 24697))) ? (arr_35 [i_11 - 2] [i_11 + 1]) : (arr_35 [i_11 - 2] [i_11 + 2])));
                                var_24 ^= ((min(var_5, (arr_40 [i_11] [i_11 - 2] [i_11] [i_11 - 2] [i_11 + 1]))));
                            }
                        }
                    }
                }
                arr_41 [i_8] [i_8] [i_7] = ((((((arr_15 [12] [i_8] [12] [i_7]) ? 24092 : (arr_32 [i_7]))))) ? 562949886312448 : 3048047488348351117);
            }
        }
    }
    var_25 = (min(var_25, var_5));
    #pragma endscop
}
