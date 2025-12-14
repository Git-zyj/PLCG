/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [5] [i_1] = (var_10 & 29);
                    var_11 = (min(var_11, ((-(arr_2 [i_0 + 1])))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            arr_14 [i_3] [i_4] = 18446744073709551615;
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        var_12 = (max((arr_12 [i_3] [i_4 - 1] [i_5 - 2]), ((((arr_10 [1]) ? (arr_11 [i_3]) : 1)))));
                        arr_19 [i_5] [i_5 + 2] [i_5] &= (((((-(arr_13 [i_6] [i_5 + 3] [i_3])))) % ((var_6 ? 3080295261 : ((var_6 ? var_1 : (arr_10 [i_4])))))));
                        var_13 ^= -var_2;
                        arr_20 [i_3] = var_5;
                    }
                }
            }
            arr_21 [i_3] = (max(((((max((arr_13 [i_3] [i_4] [i_4]), (arr_12 [i_3] [i_4] [i_4])))) ? ((~(arr_18 [i_3] [i_4 + 1] [i_3] [i_3] [i_3]))) : (arr_11 [i_3]))), (arr_13 [i_4] [i_4 - 1] [1])));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_28 [i_3] = (min(((((arr_24 [i_3] [i_4 - 1] [i_7] [i_8]) ? (arr_15 [i_3] [i_4] [i_4] [i_3]) : var_1))), (((((var_6 ? (arr_18 [i_3] [i_4] [i_8] [i_8] [i_8]) : var_8))) ? ((~(arr_26 [i_3] [i_4] [8] [i_8]))) : (arr_13 [i_4 - 1] [i_4 + 1] [i_4])))));
                        var_14 -= (max((max(((max(2147483647, (arr_18 [i_3] [i_4] [1] [i_8] [i_4 - 1])))), (arr_22 [i_3] [i_3] [i_7] [i_4 - 1]))), (((~(arr_18 [i_4 + 1] [i_4 + 1] [i_7] [i_4 + 1] [i_7]))))));
                        arr_29 [14] [i_3] [i_3] [i_3] = ((!(((226 ? -2147483647 : var_1)))));
                        arr_30 [i_3] [i_4] [i_3] [i_3] [i_3] [i_4] = ((-9002801208229888 - ((((1680878624 ? 0 : 2097068633))))));
                        var_15 = (max(var_15, ((min((((-2052868001 ? 118 : var_10))), (arr_13 [i_3] [i_3] [i_7]))))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            var_16 ^= (((arr_13 [i_3] [i_3] [i_9]) ? var_10 : (arr_13 [i_3] [i_9] [i_3])));
            var_17 = (((arr_25 [i_3] [i_3] [i_3] [i_3]) ? ((2052868000 ? -36 : 2147483647)) : 15));
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                {
                    var_18 = ((min(((!(arr_37 [i_3] [4] [i_11]))), var_5)));
                    var_19 = var_1;
                    var_20 = ((-1 ? -5250727539397612726 : 1));
                    var_21 = ((!(arr_32 [i_3] [i_10] [i_11])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 12;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                {
                    arr_44 [i_3] = (((max((arr_35 [i_3] [i_12 - 1] [i_13]), ((var_5 ? 3124035116 : var_2))))) ? (arr_13 [i_3] [i_12] [i_13]) : ((((min(var_9, (arr_9 [i_3])))) ? -118 : ((min((arr_34 [i_13] [i_3]), 1))))));
                    arr_45 [i_3] [i_3] [i_3] [2] = (max(0, 24));
                }
            }
        }
    }
    var_22 = (((!(((-1 ? 1 : 5))))));
    #pragma endscop
}
