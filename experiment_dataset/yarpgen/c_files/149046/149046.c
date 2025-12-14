/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= -17818866476427057539;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_0] [i_1] [i_0] [i_0] = ((4900 ? var_9 : 0));
                        var_16 = (max(var_16, 18200565813131395422));
                    }
                }
            }
        }

        for (int i_4 = 2; i_4 < 7;i_4 += 1)
        {
            arr_15 [i_4] = (arr_9 [i_0]);
            var_17 |= ((((-(arr_9 [i_0]))) ^ ((-1 ? 1 : 11))));
            var_18 = (-32641 >= 18446744073709551593);
            arr_16 [i_4] [i_4] = (arr_14 [i_4 + 1] [i_4]);
        }
        for (int i_5 = 2; i_5 < 7;i_5 += 1)
        {
            var_19 -= (arr_17 [i_5 - 2]);
            arr_20 [8] [5] = (((arr_3 [i_0] [i_0] [i_0]) ? var_0 : var_6));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 9;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    {
                        arr_25 [i_0] [6] [1] [i_7] = (arr_18 [1]);
                        var_20 |= ((1 ? (2020389305 % var_4) : ((9 ? (arr_8 [i_0] [i_5] [i_6] [i_7] [i_7] [i_7]) : var_4))));
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            arr_28 [8] [1] = ((~(-576460752303423488 & var_0)));
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 9;i_11 += 1)
                    {
                        {
                            var_21 ^= (((arr_23 [i_9 + 1] [i_9 - 1] [i_9 + 1] [9] [i_11 + 2] [i_11 - 1]) ? (arr_23 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_11 + 1] [i_11 - 1]) : (arr_23 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_11 - 1] [i_11 + 2])));
                            var_22 ^= 32610;
                            var_23 = var_3;
                        }
                    }
                }
            }
        }

        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            var_24 = (min(var_24, (((627877597282494076 ? 112 : -32611)))));
            arr_40 [i_12] = 2712204228610856015;
            var_25 = var_6;
            var_26 = (((arr_18 [i_12]) * var_2));
            arr_41 [i_0] |= (-(~-25310));
        }
        for (int i_13 = 1; i_13 < 10;i_13 += 1) /* same iter space */
        {
            arr_44 [i_0] = (-9223372036854775807 - 1);
            arr_45 [i_0] = ((15878460157658039818 ? ((var_2 ? -2712204228610856012 : var_3)) : (arr_22 [i_0] [5] [i_13])));
        }
        for (int i_14 = 1; i_14 < 10;i_14 += 1) /* same iter space */
        {
            var_27 = ((!(var_5 != var_13)));
            /* LoopNest 3 */
            for (int i_15 = 2; i_15 < 8;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 11;i_16 += 1)
                {
                    for (int i_17 = 2; i_17 < 9;i_17 += 1)
                    {
                        {
                            var_28 ^= var_8;
                            arr_58 [i_14] [i_16] [i_15] [i_14 - 1] [i_14] = var_8;
                        }
                    }
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 16;i_18 += 1)
    {
        arr_61 [i_18] = ((~((((arr_59 [i_18]) != var_10)))));
        arr_62 [i_18] [i_18] = var_4;
    }
    var_29 += (min((min(var_11, ((6885681287321699544 ? -8425145794918148913 : -93)))), var_9));
    #pragma endscop
}
