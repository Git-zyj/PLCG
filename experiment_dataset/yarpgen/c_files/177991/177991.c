/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {

                            for (int i_4 = 3; i_4 < 8;i_4 += 1) /* same iter space */
                            {
                                var_18 = ((((((arr_10 [4] [i_0] [5] [i_2 + 1] [i_4 - 2]) & (arr_10 [5] [i_1] [7] [i_3] [i_4 + 2])))) ? (((-5144514158363177660 ^ 3897187299509625194) ^ (arr_0 [i_1]))) : 28));
                                var_19 = (((((((65535 ? (arr_3 [8]) : 5144514158363177660))) && (((65535 ? var_1 : var_8))))) ? ((((min(3039078044, 21474))) ? var_1 : (((!(arr_5 [1] [3] [9] [1])))))) : (arr_12 [8] [0] [i_2 - 1] [1] [i_0] [10] [i_1])));
                            }
                            for (int i_5 = 3; i_5 < 8;i_5 += 1) /* same iter space */
                            {
                                var_20 |= var_0;
                                var_21 = (min(1125899369971712, 3196825396));
                                var_22 ^= (arr_3 [6]);
                                var_23 = ((+(((arr_5 [i_5 - 3] [i_5 + 3] [i_2 - 1] [10]) + (arr_10 [4] [i_2 + 1] [8] [i_2 + 1] [i_5 - 3])))));
                                var_24 *= (min(((((arr_15 [5] [i_2 - 1] [i_5 + 2]) || (arr_15 [1] [i_2 - 3] [i_5 - 2])))), ((255 ? 44062 : -2066406169))));
                            }
                            for (int i_6 = 3; i_6 < 8;i_6 += 1) /* same iter space */
                            {
                                var_25 = (arr_12 [4] [1] [i_2 - 2] [i_2 + 1] [7] [4] [2]);
                                arr_19 [7] [i_1] [i_2 - 3] [6] [5] [0] = var_13;
                            }
                            arr_20 [1] [i_3] = ((1 / (((var_0 + 9223372036854775807) << (var_15 - 15722)))));
                        }
                    }
                }
                var_26 *= (((((2066406172 ? 5144514158363177635 : 1654697602))) + (((-(((arr_15 [i_0] [i_1] [7]) ? var_10 : (arr_8 [i_1]))))))));
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        {
                            arr_27 [i_0] [i_7] [2] [4] = (min((max((arr_5 [i_0] [i_0] [i_7 - 2] [8]), (arr_5 [i_0] [5] [i_7 - 2] [i_0]))), ((((arr_5 [6] [0] [i_7 + 1] [i_1]) || (arr_2 [i_7 + 1]))))));
                            arr_28 [i_8] [4] [2] &= (arr_14 [i_0] [6] [i_7 + 1] [10] [8] [i_1] [i_1]);
                        }
                    }
                }
                var_27 = (max(var_27, var_7));
            }
        }
    }
    var_28 = -5144514158363177660;

    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                {
                    var_29 = (max(var_29, ((((arr_36 [0]) ? var_9 : ((max(var_5, var_7))))))));
                    var_30 = -2066406160;
                    arr_38 [i_9] [13] [18] [19] = (((arr_31 [20]) % (max(-2147483647, ((21474 ? -6907730829819347087 : 228))))));
                }
            }
        }
        var_31 = (((((((((arr_37 [18] [0] [20] [15]) ? var_13 : 63060))) ? (arr_35 [i_9]) : (arr_34 [13])))) ? (arr_36 [17]) : (arr_30 [8])));
    }
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 20;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            {
                var_32 = (+(min((arr_40 [i_13]), 235)));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        {
                            arr_50 [i_15] = (1546420920 & var_4);
                            arr_51 [12] [i_13] [17] = -32747;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
