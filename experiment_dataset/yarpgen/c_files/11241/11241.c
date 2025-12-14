/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = (min(var_20, var_10));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_21 = ((-(min(var_9, var_16))));
                        var_22 = (max(var_22, ((((((arr_7 [i_0] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2 + 1]) != var_10)) ? (((((arr_7 [i_3] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2 + 2]) || (arr_7 [i_3] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2 - 1]))))) : 23155)))));
                        arr_9 [i_1] = ((var_10 <= (((((var_14 ? var_15 : (arr_5 [17])))) ? (max(var_19, 0)) : ((min((arr_8 [1] [i_1] [i_1] [i_1] [i_1]), (arr_8 [i_0] [i_1] [i_2] [i_1] [i_3]))))))));
                        var_23 = ((((-6610305491620518515 | 3277120559210193198) ? (min(var_2, var_19)) : var_17)) | -1154073865355960882);
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_24 = (~(~var_19));
            var_25 = (~var_1);
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            arr_15 [i_0] [i_0] = (((((var_17 ^ ((-6610305491620518515 ? -1154073865355960884 : -6610305491620518515))))) ? ((max(var_7, -1))) : ((((max(var_10, 43))) ? ((var_3 ? var_9 : var_12)) : var_4))));
            var_26 = (((((arr_13 [i_0] [i_5] [i_0]) >> (((arr_13 [i_0] [i_0] [i_0]) - 35)))) < (arr_13 [i_0] [i_5] [i_0])));
            var_27 = (((((((max(var_1, var_19))) ? 1766331011 : (~-116)))) ? (max(2528636285, var_5)) : (((min(var_13, (arr_12 [i_0] [i_5] [i_5])))))));
        }
        var_28 = (min(((((((arr_6 [i_0] [i_0] [i_0] [16]) ? var_10 : var_14)) == (((var_1 ? (arr_4 [i_0] [i_0] [i_0]) : var_0)))))), (arr_6 [i_0] [i_0] [i_0] [12])));
    }
    var_29 = ((((max(198, var_16))) ? (((((min(var_3, var_6))) ? (0 * var_4) : ((min(var_10, var_4)))))) : ((var_18 ? (((var_4 >> (var_7 - 14391)))) : (var_13 + 8541765493390441325)))));
    var_30 *= (((max((min(2564641742, 3)), var_1)) + (((var_11 ? ((-2150623766988074226 ? var_13 : var_13)) : (var_12 && var_1))))));
    /* LoopNest 3 */
    for (int i_6 = 3; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                {
                    var_31 = ((var_8 ? (((arr_18 [i_8] [i_6]) - var_4)) : (var_7 + var_1)));

                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        var_32 = var_9;
                        var_33 -= (min(((var_2 ? (arr_19 [i_6] [i_6 - 2] [i_6 - 3]) : var_14)), ((min(3880, (arr_24 [i_6] [i_6 + 1] [i_6]))))));
                        var_34 = (max((arr_18 [15] [i_7]), (((var_10 ^ var_12) ? ((max(2048, 125))) : (arr_24 [i_6 + 1] [i_7] [i_8])))));
                        var_35 = (min(var_35, var_1));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        var_36 = (((arr_25 [i_6 + 1] [14] [i_7] [i_6 + 1] [10] [i_6 + 1]) ? var_15 : (arr_25 [i_6 - 3] [i_6 - 3] [i_10] [i_6 - 3] [i_10] [20])));
                        var_37 = ((var_16 ? (arr_21 [i_6 - 3] [i_6 - 1] [i_6 + 1] [i_6 + 1]) : 26965));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            {
                                var_38 = ((!((max(var_7, (max(var_19, 1)))))));
                                var_39 = var_13;
                                var_40 = (max(79, (max(2305843009213693952, var_0))));
                            }
                        }
                    }
                    arr_32 [i_6] [5] [i_8] = var_10;
                }
            }
        }
    }
    var_41 = ((((!(!var_7))) ? ((70 ? 3007053022738124923 : (((202 ? 14513 : 30548))))) : (((var_9 ? ((var_13 ? var_4 : var_9)) : (var_16 || var_17))))));
    #pragma endscop
}
