/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0] &= (((min(var_13, var_3)) ? (((min((-32767 - 1), var_6)))) : (((arr_11 [i_0] [i_4 + 3]) ? var_8 : (arr_11 [i_0] [i_4 + 2])))));
                                var_14 += ((~((min((arr_15 [3] [i_1 + 1] [i_4 + 3]), var_4)))));
                                var_15 = 3038184390;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_24 [i_0] [i_0] [i_1 - 1] [2] [i_6] [i_1 - 1] = (max((-2147483647 - 1), ((((min((arr_12 [i_1]), (arr_0 [i_0])))) ? (((arr_7 [i_6] [i_1] [i_5] [i_5]) ? (arr_13 [i_0] [i_1] [i_1] [i_6] [i_1]) : (arr_17 [i_0]))) : ((max(var_3, var_8)))))));
                            arr_25 [i_0] [i_0] [i_6] [i_1 - 1] [i_0] [i_0] = (min(((((arr_19 [i_0] [i_1 + 1] [i_0] [i_1 + 2]) ? var_11 : 9719))), (min((((1562987058 ? 33056 : var_8))), var_9))));
                            var_16 = -1256782900;
                            arr_26 [i_5] [i_1] [i_1 + 1] [i_6] = -34;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_17 = -6597824925271106471;
                            var_18 += ((((((arr_28 [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1]) ? var_1 : var_4))) ? (((4294967295 ? var_7 : (arr_13 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_7])))) : (min((arr_28 [4] [4] [i_7] [i_1 + 2]), (arr_28 [i_1 + 1] [i_1 + 1] [i_7] [i_8])))));
                            arr_31 [i_0] [i_0] [i_8] [i_8] = ((((min((arr_8 [i_1 - 1] [i_1] [i_1 - 1] [i_8]), (arr_8 [i_1 + 1] [i_1] [i_1 + 2] [i_8])))) ? -864201581 : var_4));
                            var_19 = ((max(0, var_4)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            {
                                arr_43 [i_10] [i_10] [i_11] [i_12] [i_11] [i_13] [1] = (var_3 ? (arr_3 [i_13] [i_13] [i_13]) : (arr_38 [4] [4] [4] [i_13]));
                                var_20 &= (max(((min((arr_39 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1]), (arr_39 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1])))), (min(-5, 1220442480))));
                                var_21 = var_12;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 8;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        {
                            arr_49 [i_14] [i_14] [i_10] [i_15] [4] = ((~(((-9223372036854775807 - 1) ? var_10 : (arr_30 [i_10 - 1] [i_10] [i_14 + 1] [i_14 + 2])))));
                            var_22 = ((((min((arr_33 [i_10 - 1] [i_10 - 1]), var_10))) ? (arr_13 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_15]) : (((!(arr_37 [i_10 - 1]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 10;i_17 += 1)
                    {
                        {
                            var_23 -= 1619110558;
                            arr_54 [i_9] [i_9] [i_16] [i_10 - 1] = 0;
                            var_24 = 14842188421156322011;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
