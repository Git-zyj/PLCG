/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 = (min(((max(((var_7 ? var_15 : 828607619)), ((96 ? (arr_2 [i_0] [i_0]) : (arr_10 [14] [14] [i_2] [i_3 - 2])))))), ((((max(1429708814, 87))) ? (min(var_12, var_12)) : (var_8 && 62)))));
                                var_17 = arr_2 [i_1 + 1] [i_4 + 1];
                                var_18 ^= (arr_7 [i_0] [5] [i_0] [i_4]);
                            }
                        }
                    }
                    arr_14 [i_0] [13] [i_1] [i_0] = ((((max((arr_3 [i_1]), var_15))) << ((((var_13 / ((var_10 ? (arr_1 [i_1 + 1]) : var_9)))) - 1))));
                    var_19 = (max((((27060 ? 1935429499 : 5123))), ((var_8 ? (((arr_12 [5] [i_0] [i_1 - 3] [5] [5]) ? (arr_4 [i_0]) : (arr_9 [i_0] [8] [i_2] [8]))) : ((60396 ? (arr_1 [13]) : -29848))))));
                    var_20 -= (min(1, ((var_14 == (arr_7 [i_0] [i_0] [i_0] [14])))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    var_21 = ((1511262021 ? -1022428546 : (min(5139, ((3436442699 ? 2587670024 : var_15))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 19;i_9 += 1)
                        {
                            {
                                arr_29 [i_5] [i_5] [i_6] [i_7] [i_6] [i_6] [i_5] = ((9149857307792178904 ? (min((((17225 <= (arr_17 [i_9])))), ((var_13 ? var_3 : (arr_26 [i_5] [i_9] [i_9] [i_9 + 3] [i_9]))))) : ((var_3 << (((arr_26 [i_5] [i_8] [i_5] [i_5] [i_5]) - 95))))));
                                var_22 = (arr_16 [i_5 + 3] [i_5]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (var_7 & var_2);
    /* LoopNest 2 */
    for (int i_10 = 4; i_10 < 18;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            {
                var_24 = ((min((min((arr_30 [i_11]), (arr_33 [i_10] [i_10]))), (((-29843 ? (arr_32 [i_10]) : 60420))))));
                var_25 |= ((~(arr_28 [i_11] [i_11] [i_10 - 1] [i_10 - 1])));
                var_26 = (min(((-(arr_22 [i_10]))), (arr_33 [i_10] [i_10])));
            }
        }
    }
    #pragma endscop
}
