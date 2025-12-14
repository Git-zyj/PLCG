/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((max(var_10, var_8)) / 243))) ? 18446744073709551606 : (min(var_1, var_3)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] &= 18446744073709551606;
        var_14 = (max(var_14, (((var_1 ? 1610612736 : (arr_0 [15]))))));
        var_15 &= (arr_1 [1]);
        arr_3 [i_0] = ((arr_0 [i_0]) | 24576);
        arr_4 [i_0] [i_0] = 15777333458081185035;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_16 = (min(((var_8 ? (arr_1 [i_1 - 1]) : (arr_5 [i_1 - 1] [i_1]))), (!2268543170)));
        var_17 -= min((arr_1 [i_1]), (((((min((arr_6 [10]), (arr_6 [6])))) >= (arr_5 [1] [2])))));

        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            arr_10 [2] |= ((((((max(2026424113, var_2)) | var_7))) ? ((max((min(-1610612750, (arr_8 [i_1] [i_1] [i_1]))), (arr_9 [14] [14] [i_2 - 1])))) : ((var_0 & (arr_1 [i_1 - 1])))));
            var_18 = (18446744073709551601 - 1);

            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                var_19 += ((max((((arr_5 [i_2 + 1] [14]) ? 168 : (arr_11 [12]))), ((((arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [15]) ? (arr_9 [2] [2] [2]) : var_5))))) - (!var_7));
                arr_13 [3] [i_1] [i_3 + 3] = ((var_1 ? -688917136 : ((~((1022506001 ? 462195655 : 14809))))));

                /* vectorizable */
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    var_20 = (max(var_20, (((arr_15 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) || var_4))));
                    arr_16 [i_1] [i_2 - 1] [i_2 - 1] [i_2] [0] [i_1] = 11;
                    arr_17 [i_1] [i_1] [i_2 + 1] [11] = ((-((var_2 ^ (arr_8 [13] [13] [13])))));
                }
                var_21 += (((((max(var_0, var_10)) ? var_1 : (arr_14 [i_3 + 2] [i_2 - 1] [i_1])))));
            }
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                var_22 = (arr_14 [i_1] [i_2] [7]);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            arr_26 [12] [6] [6] [i_1] [12] = ((((15 ? (min(var_7, var_3)) : (min(var_3, 1)))) % (arr_22 [0] [i_2])));
                            arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [0] = (max(13398, (min((arr_0 [i_2]), var_3))));
                        }
                    }
                }
                arr_28 [i_1] = (arr_8 [i_2] [i_2] [i_2 - 1]);
                arr_29 [i_1] = (max(((14818 ? 13411 : 2193500560)), (arr_8 [1] [5] [i_1])));
            }
        }
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        arr_32 [0] |= ((-((((arr_30 [14]) == (min(-32, 12567644564589513238)))))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 16;i_11 += 1)
                {
                    {
                        var_23 = ((var_9 ? (min((arr_12 [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1]), ((max(4063232, 4294967295))))) : (((min((arr_15 [i_8] [i_8] [i_11 - 1] [i_8]), (arr_15 [i_8] [i_8] [i_11 - 2] [i_8])))))));
                        arr_39 [i_9] = (min(809225246, (min(1, (arr_23 [i_11] [10] [7] [i_11 + 1] [i_11 + 1])))));
                        arr_40 [6] [i_8] [6] [i_9] = (((arr_5 [i_8] [i_9]) && (arr_12 [i_8] [i_8] [17] [i_8])));
                        var_24 |= (((((min(var_2, var_8)) << (((min(7521, 2888550597)) - 7519)))) + (((((arr_31 [i_11 + 1]) < var_8))))));
                    }
                }
            }
        }
        arr_41 [i_8] [12] = (min(var_6, var_5));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        arr_44 [i_12] [8] = ((!(arr_43 [i_12])));
        arr_45 [i_12] = 1131646811;
    }
    var_25 += (var_11 / var_12);
    #pragma endscop
}
