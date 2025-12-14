/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = 1;
        var_15 ^= 35;
        var_16 = ((((var_13 ? var_11 : (arr_0 [i_0]))) >= -var_12));
        var_17 += (var_2 || (arr_1 [i_0 - 2] [i_0]));
        var_18 = (max(var_18, var_4));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    {
                        var_19 += var_6;
                        arr_13 [i_1] [12] [12] [i_4] [i_1] = (((arr_2 [i_4] [i_3]) != (((0 && (((28671 ? 1 : 1))))))));
                        arr_14 [i_1] [i_1] [1] = ((((max(241, 1516925474))) * (((arr_1 [i_4] [i_1]) % var_0))));
                    }
                }
            }
        }
        arr_15 [i_1] = var_5;

        /* vectorizable */
        for (int i_5 = 3; i_5 < 17;i_5 += 1)
        {
            arr_20 [i_1] = (arr_4 [i_5]);
            arr_21 [i_1] [i_1] [i_1] = (((arr_10 [i_1] [i_5] [i_1]) ? (arr_10 [i_1] [i_1] [i_1]) : var_9));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {

                        for (int i_8 = 2; i_8 < 15;i_8 += 1)
                        {
                            arr_30 [i_8] [i_7] [i_6] [i_6] [1] [i_1] &= -var_6;
                            var_20 = (((arr_26 [i_5] [4] [i_5] [i_1]) && var_13));
                            var_21 = (i_1 % 2 == 0) ? (((7 ? ((((((-127 - 1) + 2147483647)) >> (((arr_5 [i_1]) - 182))))) : (arr_22 [i_1])))) : (((7 ? ((((((-127 - 1) + 2147483647)) >> (((((arr_5 [i_1]) - 182)) + 147))))) : (arr_22 [i_1]))));
                            var_22 = (arr_2 [i_1] [i_5 - 3]);
                            arr_31 [i_1] [i_1] [i_1] [i_1] [17] [7] = 137438953471;
                        }
                        arr_32 [i_1] [i_5] [i_6] [i_7] [i_1] [i_6] = ((!(arr_2 [i_5 - 2] [i_5 - 3])));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_23 = ((-((~(arr_36 [i_5 - 3] [i_10] [i_11])))));
                            var_24 = (arr_11 [i_1] [i_5] [i_9] [1] [i_11]);
                        }
                    }
                }
            }
            arr_39 [i_1] [i_1] [i_1] = (((arr_25 [i_1] [i_5] [i_5] [i_1]) ? -5162788473987799619 : (arr_38 [i_1] [i_5 - 2] [i_1] [i_1])));
        }
        for (int i_12 = 4; i_12 < 17;i_12 += 1)
        {
            var_25 = ((18329107579055024252 ? ((1104036120 ? 2 : -1389589762)) : ((min(49, 147)))));
            var_26 = (((49855 % 255) ? (max(var_0, (arr_40 [i_12] [i_12 - 4] [i_12]))) : ((207 ? 5162788473987799619 : 3972591971))));
        }
        var_27 = (((41537 ? -1 : 28051)));
    }
    for (int i_13 = 2; i_13 < 14;i_13 += 1)
    {
        arr_45 [i_13] = (min((((-(((!(arr_7 [i_13 - 1] [i_13]))))))), (min(var_2, (min(20254, 3583477094))))));
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 13;i_15 += 1)
            {
                for (int i_16 = 4; i_16 < 11;i_16 += 1)
                {
                    {
                        var_28 &= (((!-44) ? ((~((min(var_7, (arr_28 [i_13] [i_13] [i_13] [i_14] [i_14])))))) : var_2));
                        var_29 &= (((((-((((arr_22 [i_14]) != var_14)))))) * (var_0 % var_6)));
                        var_30 = (var_0 ? var_10 : (((arr_38 [i_13] [i_13] [i_13] [i_13]) ? 1 : ((5132 ? (arr_11 [i_13 + 1] [i_13 + 1] [i_14] [i_14] [i_16]) : var_2)))));
                    }
                }
            }
        }
        arr_54 [i_13] = ((((var_11 && (((-(arr_43 [i_13])))))) ? var_10 : var_4));
        arr_55 [i_13] = (((6125635015000894567 && 205) > (max(13001, (min(6, 147))))));
        /* LoopNest 3 */
        for (int i_17 = 2; i_17 < 14;i_17 += 1)
        {
            for (int i_18 = 4; i_18 < 12;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {
                    {
                        var_31 = (!var_8);
                        arr_64 [i_13] [i_13] [i_18] [i_19] = ((((var_8 ? (arr_47 [i_17] [i_17] [i_17]) : (~1707122308))) * (130 & 5132)));
                    }
                }
            }
        }
    }
    for (int i_20 = 2; i_20 < 9;i_20 += 1)
    {
        arr_68 [i_20 + 3] = var_5;
        var_32 = var_2;
    }
    var_33 -= 65535;
    #pragma endscop
}
