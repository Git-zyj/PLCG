/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_11 <= 2843549268);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] = ((11 && (((-18 ? (max((arr_8 [i_1]), (arr_0 [i_0] [i_0]))) : ((((arr_8 [i_1]) ^ 67108863))))))));

                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            var_20 = (arr_7 [i_0] [i_0] [i_0] [i_0]);
                            var_21 = (arr_8 [i_1]);
                            arr_12 [i_0] [i_1] [i_1] [i_1] [i_4] = (arr_2 [i_1] [i_1] [i_1]);
                            arr_13 [i_0] [i_0] [i_1] [i_0] [i_3] [i_1] = ((~(arr_10 [i_4 - 2])));
                        }
                        var_22 = 3;
                        var_23 = (arr_8 [i_1]);
                    }
                }
            }
        }
        var_24 = (max(var_24, (-9223372036854775807 - 1)));

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_25 = ((~((~(arr_6 [4])))));
            var_26 = (((arr_8 [8]) ^ (((arr_10 [i_0]) ? (((((arr_8 [0]) && (arr_15 [i_5]))))) : (arr_8 [4])))));
            arr_16 [i_5] = 15967;
        }
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                var_27 = (arr_30 [i_9] [i_9] [i_8] [i_6] [i_6]);
                                arr_32 [i_6] [i_6] = (arr_25 [2] [i_7] [2] [i_7]);
                                arr_33 [i_6] [i_6] [i_8] [20] [i_10] = (arr_28 [i_6] [i_6] [i_8] [i_8] [i_8]);
                                var_28 = (arr_17 [12] [12]);
                            }
                        }
                    }
                    var_29 = (((((arr_17 [i_7 - 1] [i_7 - 1]) + 235))) ? (((((120 ? (arr_21 [i_6] [i_6] [i_6]) : (arr_21 [i_6] [i_6] [i_6])))) | (max((arr_26 [i_6] [13] [i_6] [i_6]), (arr_19 [i_6] [i_6]))))) : ((((arr_31 [i_7 - 2] [i_7 - 2] [i_7 - 2]) ? (arr_31 [i_7 - 2] [i_7 - 1] [i_7 - 2]) : (arr_31 [i_7 - 2] [i_7 - 2] [i_7 - 1])))));
                }
            }
        }
        var_30 = (((((arr_20 [i_6]) + (arr_20 [i_6]))) * (((arr_18 [i_6] [i_6]) ? (arr_18 [i_6] [i_6]) : (arr_18 [i_6] [i_6])))));
    }
    for (int i_11 = 2; i_11 < 11;i_11 += 1)
    {
        arr_36 [i_11] = (((max((arr_22 [i_11 + 1]), (arr_21 [i_11 + 1] [i_11] [8]))) > ((((42 <= (arr_6 [i_11])))))));
        var_31 = ((min((arr_10 [i_11]), (arr_10 [i_11]))) | (((arr_26 [i_11] [i_11 - 1] [i_11] [i_11]) ? (arr_20 [i_11]) : 51582)));
        var_32 = (arr_21 [i_11] [i_11] [i_11]);
        var_33 = ((((((arr_17 [i_11] [i_11 - 2]) ? (arr_17 [i_11 + 1] [i_11 - 2]) : (arr_28 [i_11] [i_11 - 2] [i_11 - 1] [i_11 - 1] [i_11 - 2])))) || ((((arr_17 [i_11] [i_11 - 2]) & (arr_26 [i_11] [i_11 - 2] [i_11 - 1] [i_11 - 1]))))));
    }
    var_34 |= (max((max((((-9223372036854775807 - 1) ^ 20)), (((39 ? 201 : 32767))))), (-2147483647 - 1)));
    #pragma endscop
}
