/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((max(140737488354304, 8397378052598483760)) % ((min(var_7, 1188897466224920923))))) <= var_1));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [9] [i_3] [i_4] [7] [9] = (max(((((arr_9 [i_0]) & (((var_9 >> (9223372036854775795 - 9223372036854775787))))))), ((((var_6 * (arr_7 [i_2]))) ^ ((((arr_4 [i_0]) ? (arr_1 [i_0] [i_1]) : (arr_4 [i_0]))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_2] [8] [i_1] &= max((max(-1, -1)), ((((!(arr_4 [i_0]))) ? (arr_12 [i_4] [i_4] [i_4 + 1] [i_4 - 2] [i_4 + 1]) : 1207778036)));
                            }
                        }
                    }
                    arr_16 [3] [i_2] = ((-((-15058171582234037364 * ((max(0, -5)))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    var_13 = (arr_6 [i_0]);

                    /* vectorizable */
                    for (int i_7 = 4; i_7 < 11;i_7 += 1)
                    {
                        arr_23 [10] [i_7 - 1] [i_7] [i_7] [i_7 - 1] &= arr_5 [i_7 - 3] [i_7 - 2];
                        var_14 ^= ((!(arr_10 [i_7 - 3] [i_7 - 2] [i_7 - 4] [i_7 - 2] [i_7 - 4] [i_7 + 1])));
                        var_15 = (-(arr_12 [i_7 - 2] [i_7 - 2] [i_7 - 3] [i_7 - 3] [i_7]));
                    }
                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        var_16 = (min(var_16, ((min((-7 / 9223372036854775798), (min((arr_3 [i_8 + 1]), (arr_17 [i_8 + 1] [i_8 + 1]))))))));
                        arr_27 [i_0] [6] [i_0] [i_8] [i_0] = (((arr_11 [i_8 + 4] [i_8 + 4] [i_5] [i_0]) ? ((-(arr_11 [i_8 + 3] [i_8 + 3] [i_6] [3]))) : ((((!(arr_11 [i_8 + 3] [i_8 + 4] [11] [i_5])))))));
                    }
                    arr_28 [0] [i_5] = (((!var_0) ? ((var_6 ? (((-(arr_10 [i_6] [i_5] [i_5] [i_5] [i_0] [i_0])))) : ((~(arr_8 [i_5]))))) : ((max((arr_20 [i_0] [i_0] [i_5] [i_6]), -281474976710655)))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                arr_33 [i_0] [i_5] [i_6] [i_9] [i_9] [i_10] [i_9] = -0;
                                arr_34 [i_0] [i_0] [i_0] &= ((!((min(-1350101268, -9223372036854775795)))));
                            }
                        }
                    }
                }
            }
        }
        var_17 &= (314911554942545110 ^ (arr_22 [i_0] [i_0] [i_0] [i_0] [5]));
        var_18 = 0;
    }
    var_19 = 7;
    #pragma endscop
}
