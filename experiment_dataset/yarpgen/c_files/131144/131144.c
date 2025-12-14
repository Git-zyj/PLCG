/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = (min((24 - 7), (arr_2 [i_1] [i_2])));
                    var_15 = (min(var_15, (arr_2 [i_1] [i_0])));
                    var_16 = (max(var_16, (arr_5 [i_0] [i_1 + 2] [i_2] [i_2])));
                    var_17 = (min(var_17, ((((((((68 ? 13591444752981706852 : 1))) ? (((arr_1 [i_0]) & 3932160)) : (((255 >> (240 - 210))))))) ? ((((((-2873263663050805013 ? (arr_1 [i_0]) : 68))) ? ((~(arr_0 [i_2]))) : (max(-1960492331, (arr_0 [i_0])))))) : (max((arr_0 [i_2]), (min(1, 3700601479625462861))))))));
                }
            }
        }
        arr_8 [i_0] = (arr_5 [i_0] [i_0] [i_0] [i_0]);
    }
    var_18 = (max(var_18, ((((((min((var_10 == var_11), var_4)))) * (((!var_2) ? (min(0, 0)) : (((-118 ? var_10 : 1093353127))))))))));
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 7;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 8;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 9;i_6 += 1)
                    {
                        {
                            arr_20 [i_5] = ((18446744073709551611 == ((15696749851961014972 ? 1960492346 : 118))));
                            var_19 *= ((((-1 ? -1 : (arr_6 [i_3] [i_3 + 3] [i_4 + 2]))) ^ (~52)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_29 [i_3] [i_4 + 2] [i_7 - 1] [i_9] = ((+(((arr_5 [i_9] [i_4] [i_3] [i_3]) | (arr_5 [i_9] [i_3 - 2] [i_3] [i_4])))));
                                var_20 += (((((~(((arr_13 [i_7 + 1]) / (arr_1 [i_9])))))) <= (((arr_2 [i_3 - 1] [i_4 + 2]) ? (arr_21 [i_3 - 1] [i_4 + 2] [i_7 - 1]) : (arr_2 [i_3 - 1] [i_4 + 2])))));
                                var_21 += ((224 + (~504560486)));
                                var_22 = (min(var_22, (arr_28 [i_7] [i_9] [i_7 + 1] [i_7 + 1] [i_7] [i_4 + 2])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            {
                arr_35 [i_10] [i_11] = ((+(((arr_3 [i_10] [i_10] [i_10]) / 1960492357))));
                arr_36 [i_10] [i_11] [i_10] = ((((max((-97 ^ -116), 223))) * ((12 << (((((arr_30 [i_11] [i_10]) ? 18446744073709551612 : (arr_3 [i_10] [i_11] [i_10]))) - 18446744073709551553))))));
            }
        }
    }
    #pragma endscop
}
