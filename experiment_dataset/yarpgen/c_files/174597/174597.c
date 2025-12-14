/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_14 += (arr_3 [i_0]);
                        var_15 = (arr_12 [i_3] [i_2] [i_2] [i_0] [i_0]);
                        arr_13 [7] &= ((~(((arr_2 [0]) ? (arr_7 [i_3]) : (arr_0 [i_0] [i_0])))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 8;i_5 += 1)
            {
                {
                    var_16 &= (((arr_8 [i_4 - 1] [i_4 - 2]) ? (arr_8 [i_4] [i_4 - 1]) : (arr_14 [i_4] [i_4 + 1] [i_5 + 2])));
                    var_17 = (min(var_17, ((((23749 - var_10) != (var_10 | var_7))))));
                }
            }
        }
        var_18 -= (arr_11 [i_0] [i_0] [4] [8]);
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        var_19 = (arr_18 [i_6]);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 8;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_20 |= (((((arr_32 [i_8 + 1] [i_8 + 3] [i_8 + 3] [i_10] [i_8 + 2]) & 103))) ? (arr_8 [i_8] [i_8 + 2]) : 103);
                                var_21 += (((-(arr_21 [i_8 - 1] [i_8 + 1]))));
                                var_22 = (max(var_22, ((((((-100 / (arr_6 [i_6] [i_8 + 1] [i_8])))) ? (((((arr_6 [i_6] [i_8 + 3] [i_8]) + 2147483647)) >> (((arr_6 [i_9] [i_8 + 2] [i_7]) + 103)))) : -103)))));
                                arr_33 [i_6] [i_6] [i_7] [i_9] [i_10] &= 30324;
                            }
                        }
                    }
                    var_23 -= 35212;
                    var_24 = (((((14 ? (arr_19 [i_6] [i_6]) : ((103 ? var_5 : 103))))) + (max(var_11, ((max((arr_8 [i_6] [i_6]), 35211)))))));
                    var_25 *= ((((((~(arr_17 [i_6] [i_6] [i_6]))) ^ (max(var_7, (arr_0 [3] [3]))))) % 35212));
                }
            }
        }
        var_26 = (min(var_26, ((((((var_13 ? var_13 : (((22 ? var_12 : 30325)))))) ? ((min((arr_6 [i_6] [i_6] [0]), var_0))) : (max((65535 >> 30), (!30324))))))));
        var_27 = 30324;
    }
    for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
    {
        var_28 = (max(2985680608, (arr_15 [i_11] [i_11])));

        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            var_29 = var_0;
            arr_39 [i_12] = ((((min((~4073732334), (!0)))) ? ((-((max(var_2, 0))))) : (arr_24 [i_11] [i_12])));
            var_30 = (min(var_30, 30324));
        }
        for (int i_13 = 3; i_13 < 10;i_13 += 1)
        {
            arr_43 [2] [5] = (max(((~(arr_8 [i_11] [i_13]))), ((((arr_8 [i_11] [i_11]) || (arr_8 [i_11] [i_13 - 3]))))));
            var_31 -= (((((77 >> (((arr_25 [i_13] [i_13 + 1]) - 128))))) ? ((((arr_25 [i_13 + 1] [i_13 - 1]) ? (arr_25 [i_13] [i_13 - 1]) : (arr_25 [i_13] [i_13 + 1])))) : (max(var_1, (arr_25 [i_13] [i_13 - 1])))));
            var_32 = (((-(arr_15 [i_11] [i_13 - 3]))));
        }
        arr_44 [i_11] [i_11] = (max(((((((arr_21 [i_11] [i_11]) ? 30324 : var_8))) ? -103 : (arr_8 [i_11] [i_11]))), (((((arr_19 [i_11] [i_11]) ? 30324 : -1))))));
    }
    for (int i_14 = 2; i_14 < 12;i_14 += 1)
    {
        arr_48 [i_14] = ((((((arr_45 [4] [i_14 - 2]) ? (arr_45 [i_14] [i_14 + 1]) : var_7))) ? ((-(arr_45 [i_14] [i_14 - 2]))) : (arr_45 [i_14 + 2] [i_14 + 3])));
        arr_49 [i_14] = (0 ^ var_13);
    }
    var_33 = var_5;
    #pragma endscop
}
