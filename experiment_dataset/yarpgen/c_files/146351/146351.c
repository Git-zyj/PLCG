/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_0] = (((max(18446744073709551602, (max((arr_2 [i_0 - 1] [i_1] [i_2]), (arr_5 [i_0]))))) * (((-((13 ? 38153 : (arr_6 [21] [i_1] [17]))))))));
                    var_18 = min((((((var_8 & (arr_1 [i_0 - 2]))) | ((~(arr_3 [i_0] [i_0] [i_2])))))), ((~(2839715317 | 33554))));
                    var_19 = (max(var_19, ((min((min((arr_4 [i_0] [6] [i_0 - 1]), (((arr_4 [i_0] [i_0 + 1] [i_0]) ? (arr_3 [i_0] [i_0] [i_2]) : 113)))), 38141)))));
                    arr_8 [i_0 - 2] [i_1] [i_2] = ((((((arr_4 [i_0 + 2] [i_0 + 1] [i_0]) ? (arr_6 [i_0 + 2] [i_0 + 1] [12]) : (arr_6 [i_0 + 2] [i_0 + 1] [i_0])))) < 1));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                {
                    var_20 = (min(var_20, (arr_9 [10])));
                    arr_17 [2] [i_3] [i_5 - 1] = ((((min(16777215, (arr_2 [i_5 + 1] [i_5 - 1] [i_5])))) ? 16882 : (((arr_2 [i_3] [i_4 - 1] [i_5 - 1]) >> (45982 - 45966)))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_21 = ((21 ? 143 : 8));
                        var_22 = ((18446744073709551615 ? (arr_3 [i_4 - 1] [i_5 + 1] [i_5 - 1]) : (arr_3 [i_4 - 1] [i_5 + 1] [i_5 - 1])));
                    }
                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        var_23 ^= (max(((max((arr_19 [i_4] [i_4] [i_4 - 1] [i_5 + 1]), ((min(var_5, (arr_22 [i_3] [i_7]))))))), (max((min(1, 14221750294312094993)), 4160692159))));

                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            arr_25 [i_3] [i_3] [i_7] [i_3] [i_8] [i_7] [i_8] = (arr_11 [i_5]);
                            var_24 ^= (((arr_13 [i_4] [i_4] [i_4 + 2]) ? 1 : 193));
                            var_25 = var_3;
                        }
                    }
                    var_26 = (min(var_26, ((max((((((31496 ? 1 : (arr_23 [i_3] [i_3] [i_3] [i_3] [i_3] [14] [17])))) ? (min(1049858476, (arr_12 [i_3] [i_4 + 2]))) : (((!(arr_15 [i_3])))))), ((((!(arr_12 [i_3] [i_3]))))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    arr_32 [i_3] [i_3] [i_3] = 2047;
                    var_27 = (min(var_27, 65535));
                }
            }
        }
        var_28 = (((arr_4 [i_3] [1] [i_3]) ^ (((arr_2 [i_3] [i_3] [i_3]) ? (min(1566034382, (arr_10 [i_3]))) : ((116 ? 65535 : (arr_26 [i_3] [i_3] [i_3])))))));
        var_29 -= ((((max(((max((arr_14 [12]), 18932))), (max((arr_18 [i_3] [i_3] [i_3] [i_3]), (arr_4 [i_3] [i_3] [9])))))) ? (((max(1, 1)))) : (max((((-1566034383 + 2147483647) << (18446744073709551615 - 18446744073709551615))), (~var_16)))));
    }
    #pragma endscop
}
