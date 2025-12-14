/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = (min((arr_3 [i_0]), (((arr_3 [i_1]) ? ((((arr_1 [i_1]) ? (arr_0 [1]) : (arr_3 [i_0])))) : (max((arr_3 [0]), (arr_1 [8])))))));
                arr_4 [i_0] = (!8339);
            }
        }
    }

    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        arr_9 [i_2] = (arr_7 [i_2 + 1]);

        /* vectorizable */
        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            arr_12 [i_2] = 1;
            var_22 = arr_6 [i_2] [i_2];
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
        {
            var_23 = ((((((arr_11 [i_2] [i_2 + 1] [i_2]) && ((min(var_9, (arr_13 [i_4]))))))) << (var_13 - 85)));

            /* vectorizable */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_24 += (((arr_7 [i_2]) & var_17));
                var_25 = ((!(arr_8 [i_2 + 1])));
            }
            var_26 = (max(var_10, ((min(var_17, ((((arr_6 [i_2] [i_4]) || (arr_15 [i_2] [i_4] [1] [i_4])))))))));
            var_27 = (~-5022112383338339423);
            var_28 ^= ((((((-(arr_14 [i_2 - 1] [i_2 + 1]))) + 2147483647)) >> (arr_14 [i_2 - 1] [i_2 - 1])));
        }
        arr_18 [i_2] = min(((min(var_1, (arr_15 [i_2] [i_2] [i_2 + 1] [i_2 + 1])))), (((((arr_5 [i_2] [i_2]) ? var_9 : var_11)) / (arr_5 [i_2] [i_2]))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 15;i_7 += 1)
            {
                {
                    arr_23 [i_6] [1] = (max((arr_10 [i_7]), (((arr_17 [i_7 - 2] [i_2 - 1] [i_2 - 1] [15]) ? (arr_6 [i_7 - 3] [i_2 - 1]) : (arr_6 [i_7 + 1] [i_2 - 1])))));
                    arr_24 [i_6] = ((((((!var_2) | (((arr_19 [i_7] [i_6]) ? (arr_22 [i_2] [i_2 - 1] [i_6] [i_7 + 1]) : (arr_6 [11] [1])))))) ? (((0 <= ((min((arr_7 [i_7]), -14260)))))) : (arr_7 [i_2 + 1])));
                    var_29 &= (((arr_8 [i_2 - 1]) ? -16614108877302006972 : (arr_8 [i_2 - 1])));
                    arr_25 [i_2] [i_6] [i_6] [i_6] = ((((((arr_13 [i_7]) ? (((arr_13 [i_6]) ? (arr_5 [i_6] [i_6]) : var_17)) : (((arr_11 [i_2] [i_2 - 1] [i_2 - 1]) ? (arr_13 [i_6]) : (arr_6 [1] [i_6])))))) ? (arr_14 [i_7] [i_2 - 1]) : (arr_13 [i_7])));

                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        arr_28 [i_8] [i_6] [i_6] [i_2] = (((arr_19 [1] [i_6]) > (((arr_13 [2]) & (arr_6 [i_2] [i_6])))));
                        var_30 = -101;
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        arr_31 [i_9] = (min((((-(arr_30 [i_9])))), 26851));
        var_31 = (((arr_30 [i_9]) / (max((max((arr_29 [i_9]), (arr_30 [i_9]))), ((((arr_30 [i_9]) ? 0 : (arr_30 [i_9]))))))));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_32 = (((arr_30 [i_10]) < (((var_18 << (var_7 - 13786221985937221000))))));
        arr_35 [i_10] &= 71;
        arr_36 [1] = (arr_33 [i_10]);
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 8;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        var_33 = (((max((((arr_13 [i_10]) == (arr_41 [i_10] [1] [i_11] [1]))), (-830 == 8074231577631715648))) ? var_13 : ((~(arr_38 [i_10] [i_11 - 1] [i_12 - 3])))));
                        var_34 &= ((+(((arr_21 [i_11 - 1] [2] [i_12]) ? (arr_21 [i_11 - 1] [1] [1]) : (arr_21 [i_11 - 1] [4] [4])))));
                        arr_47 [i_11] [i_11] [i_11] [i_11] = ((~(arr_1 [i_10])));
                    }
                }
            }
        }
    }
    var_35 += var_2;
    #pragma endscop
}
