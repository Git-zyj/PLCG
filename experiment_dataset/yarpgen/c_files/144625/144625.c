/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = ((!((((((var_7 ? var_1 : (arr_2 [i_1 + 1] [12])))) * 1841172718764161453)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (max((min(((-1041289225 ? 32 : 18441)), var_14)), ((((((arr_8 [i_4] [i_3] [i_2] [4]) ? 29921 : var_1))) ? (~-7) : (((arr_5 [11] [i_2] [11]) ? var_8 : var_16))))));
                                var_21 = ((-((~(arr_10 [i_0] [i_1 + 1] [i_0] [i_1 + 1] [i_0])))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {
                    var_22 = ((+(((arr_4 [i_0 + 3] [i_5 - 2] [i_0 + 3]) ? (arr_6 [i_0] [i_0] [i_6] [i_0 + 2]) : (arr_2 [i_0 + 1] [i_5 - 2])))));
                    var_23 = (min(var_23, (arr_12 [i_6] [i_6])));
                    var_24 = 1584943591;
                    var_25 = (min(var_25, var_12));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_26 -= ((var_11 && (arr_18 [i_7] [i_7])));

        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            var_27 = (arr_19 [i_8]);
            var_28 = ((~((var_17 ? var_0 : (arr_20 [i_7] [16])))));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            var_29 = ((arr_25 [i_7]) > (arr_22 [i_7] [i_9]));
            var_30 = (!51);
            var_31 = ((var_15 / (arr_17 [i_7])));
            var_32 = var_15;
        }
        var_33 ^= 32;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {

        for (int i_11 = 4; i_11 < 9;i_11 += 1)
        {
            var_34 += ((~((~(arr_1 [6])))));
            var_35 = (((arr_24 [i_11] [14]) + (arr_7 [i_11] [i_11] [i_11 - 4] [i_11] [i_11 - 4] [i_11])));
            var_36 = (((var_9 ? var_18 : (arr_10 [i_10] [i_10] [i_10] [i_11] [10]))) << (var_13 + 114680372));
        }
        var_37 = (arr_13 [i_10] [i_10] [i_10]);

        for (int i_12 = 1; i_12 < 7;i_12 += 1)
        {
            var_38 = ((var_17 ? -25 : (arr_1 [6])));
            var_39 *= ((-1085432938 ? (arr_20 [i_10] [i_10]) : (arr_9 [i_12 + 3] [i_12 + 2] [i_10] [i_10])));
            var_40 &= ((var_9 ? (arr_26 [i_12 + 2] [i_12 + 2]) : (var_17 < 0)));
        }
    }
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        var_41 = arr_14 [i_13] [i_13] [i_13] [i_13];
        /* LoopNest 2 */
        for (int i_14 = 2; i_14 < 10;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 12;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 12;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 11;i_17 += 1)
                        {
                            {
                                var_42 = ((((((arr_9 [i_15] [i_14 - 2] [i_17] [i_17]) ? (arr_24 [8] [8]) : 62911))) & ((max(4, ((-17 & (arr_6 [10] [i_13] [i_14] [8]))))))));
                                var_43 *= ((((!((((arr_40 [i_17] [i_16] [i_15] [i_14]) ? var_10 : (arr_10 [i_13] [i_14 - 1] [4] [i_16] [3])))))) ? (((arr_10 [i_13] [i_14] [i_15] [i_16] [i_17]) | ((var_15 ? (arr_2 [i_13] [i_15]) : (arr_19 [i_13]))))) : var_10));
                            }
                        }
                    }
                    var_44 ^= ((-(((!(-1177242850 || var_13))))));
                }
            }
        }
    }
    var_45 = 2969797248;
    #pragma endscop
}
