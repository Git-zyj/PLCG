/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = (314235777 != 0);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_12 ^= ((((((arr_5 [i_0 - 1] [i_0 - 1] [i_1] [i_3]) ? (arr_13 [i_0] [i_3] [i_0] [i_0] [i_4] [i_0 - 1] [i_0 - 1]) : var_8)) <= (arr_0 [i_1] [17]))) ? (((arr_8 [i_0] [2] [i_0] [i_0]) ? (arr_8 [i_0] [18] [i_0] [14]) : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_3 - 1]))) : -9223372036854775802);
                                var_13 &= (max((((arr_4 [i_3 - 1] [i_1] [i_0 - 1]) ? (arr_4 [i_3 - 1] [i_2] [i_0 - 1]) : (arr_4 [i_3 - 1] [16] [i_0 - 1]))), (((arr_4 [i_3 - 1] [i_0] [i_0 - 1]) ? (arr_4 [i_3 - 1] [i_4] [i_0 - 1]) : (arr_4 [i_3 - 1] [i_1] [i_0 - 1])))));
                            }
                        }
                    }
                    var_14 = ((((0 && (arr_6 [i_0] [i_0 - 1] [i_1] [i_1]))) ? (arr_6 [i_0] [i_0 - 1] [i_0] [17]) : ((min((arr_6 [i_0] [i_0 - 1] [i_0 - 1] [i_1]), (arr_6 [i_0 - 1] [i_0 - 1] [i_1] [i_1]))))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_17 [i_5] [4] |= ((-((((arr_4 [i_5] [i_5] [i_5]) <= 134)))));
        var_15 *= ((((min((arr_9 [i_5] [i_5] [12] [i_5] [i_5] [12]), (arr_2 [i_5] [i_5] [i_5])))) ? (((arr_2 [i_5] [i_5] [i_5]) ? (arr_2 [i_5] [i_5] [i_5]) : (arr_2 [i_5] [i_5] [i_5]))) : (!30)));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    {
                        arr_30 [i_9] [i_8] [i_6] [i_6] [4] [i_6] = (arr_18 [i_6] [i_8]);
                        var_16 = ((var_9 ? (arr_25 [i_6] [i_7] [11] [i_9]) : (arr_23 [i_6] [i_7 + 1] [i_7 + 1])));
                        arr_31 [i_6] = (((arr_5 [i_6] [i_8] [i_8] [i_6]) ? (arr_5 [20] [i_7] [i_8] [i_9]) : (arr_5 [i_6] [i_7 - 2] [i_8] [i_9])));
                    }
                }
            }
        }
        arr_32 [i_6] = (arr_19 [i_6]);
    }
    #pragma endscop
}
