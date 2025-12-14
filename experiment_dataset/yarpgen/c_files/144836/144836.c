/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_20 = (max(var_20, ((min((((((max(64617, var_10))) / ((52348 ? var_7 : var_8))))), (((arr_8 [i_0] [i_1] [i_2] [i_0] [i_0] [i_0]) / (arr_3 [i_3]))))))));
                            arr_11 [i_0] = (((((-1 ? (arr_4 [i_0] [i_1]) : (!13178)))) ? ((((~59377) ? ((var_3 ? (arr_6 [i_0] [i_2] [i_0]) : var_11)) : (arr_4 [i_0] [i_2])))) : ((~(arr_9 [i_1] [i_1])))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_21 = (arr_17 [i_6 + 1] [i_0]);
                                var_22 = (min(((((arr_8 [i_0] [i_5 - 2] [0] [i_6 - 1] [i_0] [0]) ? -362168727 : (~31492)))), (min((((var_18 ? (arr_12 [i_0] [i_1] [9] [i_0]) : -638162988))), ((var_15 ? -593357700486768638 : 1))))));
                                var_23 = ((42864 < ((max((((!(arr_12 [i_1] [i_1] [i_4] [i_0])))), -10581)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        {
                            var_24 = (max(var_24, 0));
                            arr_24 [i_0] [i_0] [i_0] [3] [i_1] = ((-(arr_1 [i_0])));
                            var_25 |= (arr_22 [i_1] [i_1] [i_1] [i_8]);
                            arr_25 [9] [9] [i_0] [i_8] = (arr_8 [3] [i_1] [8] [i_8] [i_8] [3]);
                            arr_26 [i_0] [i_0] [i_0] [i_8] [i_8] = (min(2429200567, (((52348 ? var_11 : 59377)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 22;i_13 += 1)
                        {
                            {
                                var_26 *= ((min((var_13 < var_13), var_12)));
                                arr_37 [i_12] = (max(((((arr_33 [i_12]) < 64617))), (max((min((arr_32 [i_9] [i_10] [i_11] [i_10]), 18446744073709551609)), var_18))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_14 = 1; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 2; i_16 < 24;i_16 += 1)
                        {
                            {
                                var_27 = (max(var_27, var_17));
                                var_28 ^= var_6;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_17 = 2; i_17 < 24;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 24;i_18 += 1)
                    {
                        {
                            var_29 = (min(var_29, (((-(arr_45 [i_9] [16] [10]))))));
                            var_30 = ((((min((arr_28 [i_10]), -10586))) ? 4398042316800 : (((!31492) ? (((max((arr_44 [i_17 + 1] [i_17 + 1] [i_17 - 2] [i_18 + 1]), (arr_33 [i_18]))))) : var_18))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_19 = 1; i_19 < 24;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 25;i_20 += 1)
                    {
                        {
                            var_31 = min((min((31492 ^ 137428940), (arr_53 [i_9] [i_9 - 1] [i_9] [i_9]))), ((((max(-20066, 63))))));
                            var_32 = (((arr_32 [i_9] [i_19 - 1] [i_19 - 1] [i_20]) ^ (min((arr_32 [i_10] [i_10] [i_19 + 1] [i_20]), var_9))));
                            var_33 = (((-2147483647 - 1) ? (arr_29 [i_9 - 1] [i_19 + 1]) : (arr_53 [i_20] [i_19 - 1] [i_19] [i_9 - 1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
