/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (((((min((arr_6 [6] [i_1] [i_0 + 1]), 55))) && ((!(arr_4 [i_0 - 2] [7] [i_0 + 1]))))))));
                    var_19 ^= (((arr_8 [6]) ? (arr_8 [4]) : (max(7305188990971939428, (arr_2 [i_0 + 1])))));
                    arr_9 [i_2] = ((((!(arr_6 [i_0 - 2] [i_0 - 1] [i_0 + 1]))) && (((arr_6 [i_0 - 2] [i_0 - 1] [i_0 + 1]) >= (arr_6 [i_0 - 2] [i_0 - 1] [i_0 + 1])))));
                    var_20 *= ((((((arr_0 [i_0 + 2] [5]) ? (arr_0 [i_0 + 3] [i_0 - 1]) : (arr_8 [6])))) && (((-(arr_2 [i_0 + 2]))))));
                    var_21 = (max(var_21, (((-(((arr_0 [i_0] [i_0 - 2]) ? (arr_0 [i_2] [i_0 + 3]) : (arr_0 [i_0] [i_0 + 2]))))))));
                }
            }
        }
    }
    var_22 ^= ((((var_5 ? var_8 : (var_8 >= var_2))) >= 255));
    var_23 = ((min(-var_2, ((72 ? 10653862039364931385 : 30355)))));
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {

                            for (int i_7 = 1; i_7 < 13;i_7 += 1)
                            {
                                var_24 *= ((arr_13 [i_4 - 1] [i_5 - 3] [i_7 + 2]) ? (((((arr_21 [i_7] [i_7 + 4] [i_6] [i_5 + 1] [i_5 - 3] [i_4 + 1] [i_3]) >= (arr_18 [i_3 + 1] [i_4 - 1] [i_5] [9] [i_7 + 4]))))) : (((arr_23 [i_3] [i_7 + 1] [i_5] [14] [i_7 + 3]) ? (arr_23 [i_3 - 3] [i_7 + 2] [i_7] [16] [14]) : 714302343)));
                                arr_24 [i_3] [i_3] [i_6] [i_3] [i_3] = 78;
                                var_25 = 15248996556593768190;
                                arr_25 [0] |= ((((((arr_22 [i_7 - 1] [i_5 - 2] [i_4 + 1]) ^ (arr_20 [16] [i_6])))) >= (arr_11 [i_3 - 2] [i_4 - 1])));
                                var_26 = (max(var_26, (arr_12 [i_5] [i_5])));
                            }
                            var_27 = (max(var_27, (arr_13 [i_3] [i_4] [i_5])));
                            arr_26 [i_6] [i_4] [i_5 - 2] [i_6] = (((((+((((arr_20 [i_6] [i_6]) && 109)))))) ? (((arr_12 [i_3 + 3] [i_6]) << (((arr_12 [i_3 + 2] [i_6]) - 3344705402)))) : (((-(arr_19 [i_3] [i_4] [i_5] [1]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        {
                            var_28 = (min(var_28, ((max((arr_28 [i_3 + 3] [i_4] [i_8] [8]), (((!(arr_14 [i_3 - 1])))))))));
                            var_29 = 536870911;

                            for (int i_10 = 0; i_10 < 17;i_10 += 1)
                            {
                                var_30 *= (((arr_32 [i_3 - 2] [i_3 - 2] [i_3 + 4] [i_3 - 2]) ? (max((arr_13 [i_4] [i_9] [i_10]), (arr_13 [i_9] [10] [i_8 + 3]))) : (((arr_33 [i_3] [i_3] [i_3 + 2]) ? (arr_33 [i_3] [i_3] [i_3 + 2]) : (arr_33 [i_3] [i_3] [i_3 - 3])))));
                                var_31 = (((((arr_16 [i_4] [i_8 - 1] [i_9] [i_10]) ? 11831847507336990322 : (arr_16 [i_3 - 2] [i_3] [i_3 + 4] [i_3]))) ^ (arr_16 [i_3] [i_3 + 4] [7] [i_3 - 3])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
