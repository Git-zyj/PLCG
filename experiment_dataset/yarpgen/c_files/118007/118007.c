/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = var_1;
        var_18 = ((-(arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 = ((-((var_8 ? var_0 : var_13))));
                    var_20 &= (((arr_4 [i_1 - 1] [i_1 - 1]) && (arr_4 [i_1 + 1] [i_1 + 1])));
                    var_21 = ((var_3 ? (arr_1 [i_1 + 1] [i_0]) : (arr_1 [i_1 + 1] [i_1 - 1])));
                }
            }
        }
    }
    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        arr_11 [i_3] = ((~(arr_9 [i_3] [15])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    arr_16 [i_4] [i_5] [i_5] = ((!((((arr_13 [i_3 + 3]) ? (arr_2 [i_3 + 3]) : (arr_7 [i_3 + 3]))))));

                    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_6] |= (((arr_10 [i_3 + 2]) || (arr_18 [i_3 + 2] [i_3 + 2])));
                        var_22 = ((-(((((arr_7 [i_3]) << (var_9 - 1950259584))) - (!var_7)))));
                        var_23 = (min(var_23, (((-((~(arr_17 [i_3 - 1] [i_3 - 2]))))))));
                        var_24 = (max(var_24, (((arr_8 [i_5]) ? (arr_8 [i_5]) : (((arr_8 [i_3 - 1]) ? (arr_8 [i_6]) : var_11))))));
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                    {
                        var_25 = var_11;
                        var_26 = ((~(((arr_17 [i_3 + 2] [i_3 - 1]) ? (arr_17 [i_3 - 1] [i_3 - 2]) : var_12))));
                        var_27 += ((~((47649 ? 17887 : 50))));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                    {
                        var_28 = ((~(!var_10)));
                        var_29 = ((-(min((arr_7 [i_3 - 2]), (arr_14 [i_5] [i_3 + 1] [i_3 + 3])))));
                        var_30 = (min(((60 << (46 - 31))), 47656));
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        var_31 = (arr_26 [i_3 + 3] [2] [i_5] [4] [i_9] [i_5]);
                        arr_28 [i_3 + 2] [i_4] [i_5] [i_9] = ((-(min(((min((arr_27 [i_4] [1] [i_4] [i_4] [i_3 - 2] [i_3 - 2]), (arr_10 [i_5])))), (((arr_10 [i_9]) / (arr_19 [i_9] [i_5] [i_3])))))));
                        var_32 = ((~(max((min((arr_22 [i_3 + 1] [i_4] [i_3 + 1] [i_9]), (arr_21 [i_3] [i_3 + 3] [i_3] [i_3]))), (((var_15 ? var_12 : var_2)))))));
                        var_33 = ((-((-(min((arr_6 [i_4] [i_4] [i_4] [2]), var_11))))));
                    }
                }
            }
        }
        var_34 = ((!(arr_19 [i_3 + 3] [8] [i_3 + 2])));
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 23;i_12 += 1)
            {
                {
                    var_35 = (127 | 27832);
                    var_36 = ((var_12 ? var_5 : (((arr_34 [i_10] [i_12 - 1] [i_12] [i_12]) ? (206 || 199) : ((var_10 ? (arr_1 [i_10] [i_11]) : var_13))))));
                    arr_36 [i_10] [i_12] = (+(((arr_31 [i_10] [i_11]) ? var_8 : (arr_31 [i_10] [i_10]))));
                    var_37 ^= (((arr_0 [i_12 + 1]) ? (arr_6 [i_10] [i_11] [i_12 - 1] [i_10]) : (((((-1780982194 ? -12 : 56))) ? (((arr_32 [i_10]) / (arr_0 [i_12]))) : (arr_31 [i_12 + 1] [i_12 - 2])))));
                }
            }
        }
        var_38 = (min(var_38, ((min((arr_1 [i_10] [i_10]), (((var_0 && (((var_4 ? (arr_7 [i_10]) : var_14)))))))))));
    }
    var_39 = ((16686 ? 195 : 47670));
    var_40 *= (((((var_1 ? 44902 : var_13))) == (min(12, 49))));
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            {
                var_41 = ((((-(arr_23 [i_13] [i_13] [i_14] [i_13]))) > (((var_16 && (arr_23 [i_13] [i_13] [i_14] [i_14]))))));
                arr_41 [i_13] [i_14] |= ((((-1029098779 ? 137 : 11))) ? var_11 : (arr_2 [i_13]));
            }
        }
    }
    #pragma endscop
}
