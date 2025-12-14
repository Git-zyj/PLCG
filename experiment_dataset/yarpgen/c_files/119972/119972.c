/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_20 ^= ((-1207650094 ? var_6 : ((var_18 ? (arr_3 [12]) : (arr_1 [i_0] [i_1 + 2])))));
            var_21 *= var_10;
            var_22 = (((arr_2 [i_1 + 1] [i_1 + 3] [i_1 + 2]) ? 37788 : (((37788 == ((1 ? 1 : 37788)))))));
        }
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_10 [i_0] [8] [i_3] [i_0] = -2147483647;
                var_23 = (((arr_7 [4] [i_2 + 1] [i_2 + 1] [i_2 + 1]) ? (((87 < var_0) ? (((arr_1 [0] [i_2]) ? (arr_5 [i_0]) : 121)) : (((87 ? var_6 : 27748))))) : ((-32 ? -1501866680 : 17899403691794343040))));
                var_24 = var_10;

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_25 = (min(var_25, ((((arr_5 [6]) ? ((121 ? (0 * 65) : 244)) : ((((!(!121))))))))));
                    var_26 = 91;
                    var_27 = ((((((arr_0 [i_0] [1]) ? ((max(var_0, var_3))) : (arr_12 [i_0] [i_2 + 1] [i_3] [i_4] [i_4])))) ? 2010452163 : (max(((var_7 ? 87 : (arr_1 [i_0] [i_2]))), ((var_0 ? 78 : (arr_4 [i_2 + 1] [2])))))));
                }
            }
            arr_15 [i_0] [i_0] [i_0] = var_15;
            arr_16 [i_0] [i_0] [i_2 + 1] = ((var_14 ? ((((arr_5 [i_0]) > 27))) : (((arr_7 [i_2] [i_2 + 1] [i_2 + 2] [i_2]) ? var_6 : (arr_7 [i_2] [i_2 + 2] [i_2 + 1] [i_2])))));
            var_28 += (((arr_12 [i_0] [0] [i_2] [i_0] [i_2 + 2]) + (~-2010452172)));
        }
        var_29 ^= var_16;
        var_30 ^= (((((((arr_5 [8]) ? (arr_14 [2] [i_0] [i_0] [i_0] [2]) : var_16)))) ? (var_0 == var_8) : ((9223372036854775807 ? var_2 : (arr_2 [i_0] [i_0] [1])))));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        var_31 &= ((var_3 ? (((((-(arr_7 [i_0] [i_5] [4] [i_7]))) <= ((var_0 ? var_11 : var_9))))) : -74));
                        var_32 = (min(var_32, (arr_3 [i_6])));
                        var_33 = var_11;
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_34 = min(var_2, (((1238292906 <= -30984) ? (((arr_25 [i_8]) ? -533807262 : var_17)) : var_8)));
        var_35 = (min(var_35, (((max((20501 + 0), var_6)) != (arr_25 [i_8])))));
        arr_28 [i_8] [i_8] = ((-(29360128 < 1)));
    }
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        var_36 -= ((var_13 ? 127 : var_2));
        var_37 = var_11;
    }
    var_38 *= (-58 > var_16);
    var_39 = ((var_10 ? 1 : 20951));

    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        arr_35 [i_10] = ((((((((-(arr_5 [6])))) ? (arr_17 [i_10] [1]) : ((1 ? var_6 : 1))))) ? (var_14 > var_13) : (((((-(arr_18 [8])))) ? ((((arr_0 [1] [i_10]) != var_18))) : (((arr_24 [i_10] [i_10] [i_10] [i_10]) ? 831247391 : var_8))))));
        arr_36 [i_10] = 235;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        arr_41 [i_11] [13] = var_2;
        var_40 += ((~(arr_27 [i_11])));
        arr_42 [i_11] = var_7;
        var_41 = (((((var_5 << (var_10 - 230141897)))) ? ((-82 * (arr_7 [i_11] [i_11] [i_11] [i_11]))) : var_5));
        arr_43 [i_11] [i_11] = ((arr_26 [2] [i_11]) ? var_10 : (((arr_29 [i_11]) ? var_14 : var_9)));
    }
    #pragma endscop
}
