/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_14));
    var_17 = var_2;
    var_18 = (((~var_10) ^ var_2));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_19 -= (((((~(arr_0 [i_0])))) ? ((min((arr_1 [i_0]), (arr_1 [i_0])))) : (arr_1 [i_0])));
        var_20 -= ((!((min(16, 65535)))));
        arr_2 [i_0] = (65546 ? ((((3812847489 & (arr_0 [i_0]))) | (arr_1 [i_0]))) : (((var_1 - (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_21 = (min(var_21, (arr_9 [i_1] [10] [i_5 - 2])));
                                var_22 = (min(var_22, (((958697845 ? ((-65536 ? (arr_13 [i_1] [i_1] [10] [i_1] [i_1] [i_1] [i_1]) : (201776184 && 67108863))) : 8)))));
                                var_23 += (arr_11 [2] [i_2] [i_5 - 2] [16]);
                            }
                        }
                    }
                    var_24 += (((arr_6 [12]) % (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                    var_25 = (arr_4 [i_1] [i_1]);
                    var_26 *= (arr_8 [i_1] [i_1] [4] [i_1]);
                    var_27 -= (((arr_10 [i_1] [i_1] [i_2] [i_2] [0] [i_3]) ? var_11 : (arr_4 [i_1] [i_2])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    arr_20 [i_1] = (((arr_0 [i_7]) - (arr_0 [i_1])));
                    arr_21 [i_1] = (((((arr_10 [i_1] [i_7] [i_7] [i_7] [i_1] [i_1]) ? 2147221504 : var_7))));
                    var_28 ^= ((arr_10 [i_1] [i_1] [i_6] [i_7] [10] [14]) ^ (((~(arr_1 [i_1])))));
                    var_29 = ((var_12 + (((arr_9 [i_1] [5] [i_7]) ? (arr_5 [i_6]) : 3957289589112736353))));
                    var_30 = ((((max((arr_6 [i_1]), var_13))) ? ((((arr_15 [i_1] [6]) ? (arr_9 [i_1] [i_6] [i_6]) : (arr_14 [i_1] [i_1] [i_1])))) : (((-1264715800 ? 3100250487492787791 : 84)))));
                }
            }
        }
        var_31 = max((((arr_13 [i_1] [i_1] [17] [i_1] [i_1] [i_1] [i_1]) ? (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (32767 ^ var_11))), ((((arr_4 [i_1] [i_1]) ? 94 : (arr_4 [i_1] [i_1])))));
        var_32 = (max(var_32, ((((((142 ? 402955754 : 48))) ? ((0 ? 148 : 2)) : (arr_3 [i_1]))))));
    }
    #pragma endscop
}
