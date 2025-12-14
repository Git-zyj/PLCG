/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [16] &= ((((((arr_0 [1]) == (arr_4 [i_0] [i_0] [i_1 - 1])))) * (arr_4 [i_0] [i_1] [i_0])));
                var_13 += arr_0 [18];
                var_14 = (((arr_3 [i_0] [i_1 + 2] [i_1 + 2]) ^ ((((((arr_2 [i_0]) + (arr_4 [1] [i_1] [i_1]))) == (((arr_2 [i_0]) * (arr_4 [i_0] [i_0] [i_0]))))))));
                var_15 = ((((arr_4 [i_0] [i_0] [i_1 - 2]) >> (arr_4 [i_0] [i_1] [i_1 - 3]))));
                var_16 = (min((((((!(arr_0 [i_0])))) > (((arr_4 [i_0] [i_0] [i_1 - 2]) & (arr_2 [i_0]))))), (min((((arr_1 [i_0]) > (arr_0 [i_0]))), (arr_2 [i_0])))));
            }
        }
    }
    var_17 = var_8;

    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = (max(((-((((arr_1 [i_2]) >= (arr_7 [i_2 - 2] [i_2])))))), (((!(((arr_2 [i_2]) >= (arr_3 [i_2] [i_2 + 1] [i_2 + 1]))))))));
        arr_9 [i_2] [i_2] = ((max((arr_7 [i_2] [i_2]), (((arr_6 [i_2 - 2]) & (arr_6 [10]))))));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        var_18 -= ((max((arr_3 [i_4 - 2] [i_4 - 2] [i_4 - 1]), (arr_3 [i_4 - 1] [i_4 + 2] [i_4 + 2]))));

                        for (int i_7 = 3; i_7 < 13;i_7 += 1)
                        {
                            arr_26 [i_7 - 2] [i_6] [i_5 + 1] [i_4] = (((((arr_4 [i_6] [i_6] [i_7 + 3]) + (arr_4 [i_5 + 1] [i_5] [i_7 + 3]))) >= ((((arr_10 [i_3] [i_4]) == (arr_14 [i_3] [i_3]))))));
                            var_19 = ((~(arr_23 [i_7] [i_7] [i_7] [i_7] [i_3] [i_7 + 1] [i_3])));
                        }
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_20 = ((((((arr_19 [i_6] [i_3]) > (((!(arr_11 [i_5]))))))) >= (arr_12 [i_4 - 2])));
                            var_21 = ((((-(arr_16 [i_3] [i_3]))) / (((((arr_0 [i_8]) > (((arr_3 [i_4] [i_5 - 1] [20]) << (((arr_24 [i_3]) - 10136))))))))));
                        }
                        for (int i_9 = 2; i_9 < 15;i_9 += 1)
                        {
                            var_22 = (arr_11 [i_4 - 1]);
                            var_23 = ((arr_29 [i_3]) | (arr_24 [i_5]));
                        }
                        var_24 = (((((arr_12 [i_6]) + (arr_15 [i_3] [i_4] [i_5 - 1])))));
                        arr_32 [i_6] [i_4] [i_4] [i_6] = (((arr_15 [i_3] [i_4] [i_5]) & ((((((arr_0 [i_3]) & (arr_10 [i_6] [i_6]))) % (((arr_17 [i_3] [i_3]) + (arr_12 [i_5 - 1]))))))));
                        arr_33 [i_3] [i_4] = (((~(arr_23 [4] [i_4 + 2] [i_4 - 1] [i_4 - 1] [1] [4] [i_4]))));
                    }
                }
            }
        }
        var_25 += (((arr_31 [i_3] [i_3] [i_3] [i_3] [i_3]) != (((((arr_10 [i_3] [i_3]) + 2147483647)) << (((arr_28 [i_3] [i_3] [2] [i_3] [i_3] [i_3] [i_3]) - 727687536982938065))))));
        arr_34 [i_3] |= arr_14 [i_3] [i_3];
    }
    #pragma endscop
}
