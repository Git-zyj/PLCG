/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_19 = ((!(arr_6 [i_0])));
            arr_7 [i_0] = ((((((arr_1 [i_1]) ? ((-(arr_6 [i_1]))) : (arr_0 [i_0])))) ? (((((arr_2 [i_0] [i_0]) ? 39192 : 0)) | (((-2697 || (arr_6 [i_1])))))) : (((!(arr_1 [i_0 + 1]))))));
        }

        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_10 [15] [i_0] = ((((((arr_8 [18] [i_2]) ? (arr_4 [i_0 + 1]) : (arr_3 [i_0] [i_0])))) ? (~var_2) : ((-(arr_8 [i_0] [i_2])))));

            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                var_20 *= (((((arr_5 [i_0] [7] [i_0]) ? var_10 : 0)) & (arr_6 [i_3 - 1])));
                var_21 = (((-2147483647 - 1) ? (arr_9 [i_0 + 3] [i_0] [i_3 + 1]) : (arr_9 [i_0 + 1] [i_0] [i_3 - 1])));
            }
            arr_13 [i_0] [i_0] = (arr_6 [i_0 + 3]);
        }
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            var_22 *= (arr_12 [1] [1] [2] [i_0]);
            var_23 = ((((min((arr_1 [i_0]), ((4294967295 ? var_0 : var_1))))) ? ((var_1 + ((min((arr_0 [i_0]), (arr_16 [15] [i_4] [i_0])))))) : ((min(46988, (arr_3 [7] [i_0]))))));
        }
        var_24 ^= ((((((!(arr_0 [10]))) ? ((((arr_14 [i_0] [i_0] [i_0]) ? 10199 : 42790))) : (((arr_2 [i_0] [i_0 + 2]) ? 0 : (arr_12 [18] [i_0 + 3] [i_0 + 3] [i_0 + 3])))))) ? (min(var_6, var_6)) : (((var_11 ? (((arr_15 [i_0]) ? (arr_5 [11] [i_0] [i_0]) : 56491)) : (244 * 2697)))));
    }
    var_25 = ((((((((var_11 ? var_0 : 3660))) ? (~var_4) : var_16))) ? (min(((min(var_12, var_7))), ((var_13 ? var_4 : var_4)))) : ((((var_1 % 1) <= ((var_16 ? var_7 : 61875)))))));

    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_20 [i_5] = ((var_8 & (arr_4 [i_5])));

        /* vectorizable */
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            arr_24 [i_6] = ((((((arr_12 [i_6] [i_6] [0] [i_6]) != var_14))) % (~var_4)));
            var_26 = ((3855715632 - (arr_17 [i_6 - 1])));
            var_27 = (((arr_5 [i_6] [18] [i_5]) ? (arr_17 [i_5]) : ((var_16 ? 2147483643 : (arr_8 [18] [i_5])))));
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            arr_28 [i_5] [i_5] [i_5] = (((((arr_8 [i_7] [i_5]) < (((arr_8 [i_5] [i_7]) ? var_12 : 2887244471)))) ? (((((var_16 ? var_10 : (arr_15 [14])))) ? var_7 : (arr_16 [i_5] [i_7] [i_7]))) : (((((((arr_21 [i_7] [i_5] [1]) ? (arr_21 [1] [i_5] [i_7]) : (arr_5 [i_5] [i_7] [i_7])))) || (arr_2 [i_5] [i_5]))))));
            var_28 = var_15;
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            arr_31 [i_5] [i_5] [i_5] = (((arr_15 [i_8]) != ((+((max((arr_4 [15]), (arr_22 [i_5] [i_8] [i_8]))))))));
            arr_32 [9] [14] [11] = (min((arr_16 [i_5] [i_5] [i_8]), (((arr_8 [i_8] [i_5]) | 262143))));
        }
        arr_33 [i_5] [i_5] = 3722882790;
    }
    #pragma endscop
}
