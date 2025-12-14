/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((((((((~var_15) + 2147483647)) >> (var_0 - 13321099847432970753)))) && (((~(~var_10))))));
    var_18 *= ((((!((min(var_14, var_1))))) ? (((var_4 & var_12) ? ((var_3 ? var_10 : var_13)) : (((var_11 ? 1 : 255))))) : ((((var_12 / var_6) ? 255 : var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, ((((((~255) ? (((var_9 && (arr_5 [0] [20] [i_1] [0])))) : ((((arr_6 [18] [i_1]) == 255))))) * var_14)))));
                    var_20 -= arr_1 [11];
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_2] [i_0] [i_3] [i_4] = (((((((arr_0 [i_2]) % var_6)))) ? ((((arr_11 [i_0] [i_0] [i_2] [i_2] [17]) ? ((max((arr_3 [i_0] [i_2] [i_2]), (arr_6 [i_2] [1])))) : ((min((arr_6 [i_2] [17]), var_9)))))) : (arr_9 [i_0] [i_0] [i_0] [i_0] [14])));
                                var_21 = (max(var_21, ((max((((max((arr_6 [i_3] [i_0]), (arr_9 [0] [i_1] [i_2] [i_3] [6]))) ? (max(var_14, var_13)) : (var_13 && 116))), (((!(!var_12)))))))));
                            }
                        }
                    }
                    arr_13 [i_2] = (((arr_3 [i_0] [i_1] [4]) ? ((((arr_7 [i_0] [i_1]) >= (~var_7)))) : (((((var_12 ? var_8 : (arr_2 [7] [i_1] [i_0])))) ? (((arr_6 [i_0] [i_2]) ? var_15 : (arr_10 [8] [22] [i_2] [i_1] [i_1] [i_0]))) : (((arr_9 [i_0] [i_0] [5] [11] [13]) ? (arr_1 [16]) : (arr_0 [i_2])))))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        arr_16 [i_5] = ((((-(arr_15 [i_5] [i_5])))) || ((((arr_15 [i_5] [i_5]) + (arr_15 [23] [i_5])))));
        arr_17 [i_5] [4] = (((min(((var_3 & (arr_15 [13] [i_5]))), ((((arr_15 [i_5] [i_5]) || 131))))) == ((((arr_14 [i_5] [i_5]) ? ((255 ? 235 : var_9)) : ((((arr_14 [i_5] [i_5]) && (arr_15 [i_5] [i_5])))))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_22 &= (((var_4 ? 30958 : (arr_19 [7] [14]))));
        var_23 ^= (!(arr_11 [14] [14] [i_6] [14] [i_6]));
        var_24 *= (var_10 || 255);
        arr_21 [i_6] |= ((-var_2 ^ ((var_3 ? (arr_9 [i_6] [i_6] [i_6] [i_6] [i_6]) : var_1))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_25 = (((((var_2 << (var_12 - 13398989148903056087)))) ? (((arr_29 [i_8] [i_7] [i_8] [i_7]) >> (4191490390 - 4191490373))) : (((~(arr_7 [i_7] [i_7]))))));
                        var_26 = (((((~(arr_5 [i_7] [12] [i_9] [i_7])))) ? var_12 : (~var_7)));
                    }
                    var_27 ^= (((arr_26 [i_9] [i_9] [i_9]) ? (arr_1 [i_9]) : ((var_15 ? 1 : var_2))));
                    arr_32 [i_8] = ((((var_3 ? var_13 : var_13)) & ((var_13 & (arr_27 [i_7] [i_7] [i_7] [7])))));
                }
            }
        }
        var_28 *= (~var_0);
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 19;i_11 += 1)
    {
        var_29 = (((arr_10 [i_11] [22] [i_11] [0] [i_11] [22]) * (arr_10 [i_11] [5] [5] [20] [i_11] [i_11])));
        var_30 = var_7;
        var_31 ^= arr_27 [i_11] [i_11] [i_11] [i_11];
        arr_35 [i_11] = ((((((arr_0 [i_11]) ? (arr_7 [i_11] [i_11]) : (arr_2 [i_11] [i_11] [i_11])))) ? (!var_0) : (((arr_23 [i_11]) ? var_4 : (arr_10 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))));
    }
    #pragma endscop
}
