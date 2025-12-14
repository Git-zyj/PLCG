/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_15 = ((+((((arr_1 [i_0]) < (arr_1 [i_0]))))));
        arr_2 [i_0] = (max((((255 ? (((arr_1 [i_0]) ? var_3 : 46253)) : -16384))), ((var_7 ? var_4 : (arr_1 [i_0])))));
        arr_3 [i_0] &= ((((((!(arr_0 [i_0]))) ? ((max(-117, (arr_0 [i_0])))) : (arr_0 [i_0]))) ^ (((((~var_2) + 2147483647)) << (((!(arr_0 [i_0]))))))));
        var_16 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_17 = (max(var_17, ((max(((~(arr_4 [i_1] [i_1]))), (arr_4 [i_1] [i_1]))))));
        arr_7 [i_1] = (((((57344 ? (arr_6 [i_1]) : (arr_6 [i_1])))) ? (arr_6 [i_1]) : (((arr_6 [i_1]) ? (arr_6 [i_1]) : (arr_6 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1] [i_1] = ((((((((var_2 ? var_1 : 243))) ? 243 : -116))) ? (arr_6 [i_1]) : (arr_8 [i_1] [i_1] [i_2 - 2])));
                    var_18 = var_4;
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        var_19 = ((var_14 ? (((!(((arr_5 [4]) || -117))))) : 8191));
        arr_16 [i_4] = (arr_9 [i_4] [i_4] [i_4]);

        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {

            for (int i_6 = 4; i_6 < 13;i_6 += 1)
            {
                arr_23 [i_4] [i_6] = var_14;
                arr_24 [i_4] [i_6] [i_6] [i_6 + 2] = var_0;
            }
            var_20 = (((((((max(1, var_4))) ? (arr_19 [i_5] [i_5] [i_5]) : (((arr_21 [i_4] [i_5]) / (arr_6 [6])))))) ? ((((((var_5 ? 57342 : 0))) || (arr_4 [i_4] [i_4])))) : var_9));
            arr_25 [i_4] = ((+((((max((arr_8 [i_4] [i_4] [i_5]), 243))) * (max((arr_19 [i_4] [i_4] [i_4]), (arr_18 [i_4] [i_5] [i_5])))))));
            arr_26 [i_5] = ((((((arr_15 [i_4] [i_5]) ? (arr_15 [i_4] [i_4]) : (arr_15 [i_4] [i_5])))) ? (min((arr_15 [i_4] [i_5]), (arr_15 [i_4] [i_5]))) : (arr_15 [i_4] [i_4])));
            arr_27 [i_4] [i_4] [i_4] = var_5;
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            var_21 -= (arr_28 [i_7]);
            var_22 = (min(var_22, var_4));
            arr_32 [i_4] [i_7] [i_7] = var_6;
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            var_23 = (arr_18 [i_8] [i_8] [i_4]);
            arr_35 [i_8] [i_8] = var_8;
        }
        arr_36 [i_4] [i_4] = ((!((max((((arr_10 [i_4] [i_4]) / 12018337813889226381)), ((max((arr_33 [i_4] [i_4] [i_4]), 243))))))));
        arr_37 [i_4] [i_4] = (arr_6 [i_4]);
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                arr_43 [i_9] = (((((((-(arr_12 [i_9] [i_9] [i_9]))) ^ (255 && var_10)))) ? (((max((arr_10 [i_9] [i_9]), (arr_6 [i_10]))))) : (arr_20 [i_10] [i_10] [i_10] [i_10])));
                arr_44 [i_9] = ((-(max((((116 | (arr_28 [i_9])))), (arr_22 [3] [i_10] [i_9] [i_9])))));
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 9;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        {
                            var_24 = ((((((((arr_0 [i_9]) ? (arr_31 [i_9] [i_10] [i_11 - 1]) : 9)) / -57))) ? ((-((-(arr_1 [i_11 + 1]))))) : (((((((arr_33 [i_11] [i_10] [i_9]) ? (arr_11 [i_9] [i_12]) : (arr_38 [i_9])))) ? (~var_5) : ((103 << (var_6 + 8532819090109823109))))))));
                            arr_50 [6] &= ((((max(var_1, (max(1, 227))))) ? (((var_0 < ((var_2 << (((arr_9 [i_9] [i_10] [5]) - 37937))))))) : ((((6428406259820325235 ? 8192 : 0)) << (((arr_9 [i_11 - 1] [i_11] [i_11 + 1]) - 37934))))));
                            arr_51 [i_9] [i_9] [i_11] [i_9] [1] = (((-((-(arr_17 [i_9] [i_11] [i_12]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
