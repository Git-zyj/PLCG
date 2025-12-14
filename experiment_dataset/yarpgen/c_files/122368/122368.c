/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = ((~((var_15 ? ((min(var_12, (arr_2 [i_0])))) : ((max((arr_6 [i_0] [i_1]), (arr_2 [i_1]))))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_16 = var_2;
                            arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] = (arr_14 [i_4 - 1] [i_4] [i_4] [i_4] [i_0]);
                            var_17 = (arr_3 [i_0]);
                        }
                    }
                }
            }
        }
        arr_17 [12] |= (((-(arr_13 [i_0 + 1] [14] [i_0] [14] [i_0]))));
        var_18 = (min(var_18, ((((min((max(var_13, (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))), (((18 ? var_5 : 12747))))) * var_5)))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {
                        var_19 = ((arr_11 [i_5] [i_5] [i_7] [i_7]) ? ((var_14 ? var_10 : 15388551609065961303)) : (arr_26 [i_5 + 2] [i_5 - 1] [i_5 - 1] [i_5]));
                        arr_28 [i_5] [i_6] [i_7] [i_8] = -12747;
                    }
                }
            }
        }
        var_20 = ((127 ? 777403010 : (arr_1 [16])));
        arr_29 [i_5] = 18;
        var_21 = (arr_26 [i_5 - 1] [i_5] [i_5] [i_5 + 2]);
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        var_22 = (max(var_10, 5));
        var_23 = (arr_30 [i_9] [i_9]);
        var_24 = -997952814;
    }

    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        arr_36 [i_10] = (min((((arr_33 [i_10]) ? (arr_33 [i_10]) : (arr_33 [i_10]))), 12743));
        /* LoopNest 2 */
        for (int i_11 = 4; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                {
                    arr_43 [i_10] [i_11] [i_10] [i_12] = (max(((((((arr_24 [i_10] [i_11] [i_12] [i_12]) * (arr_21 [i_10] [i_11])))) ? (arr_15 [i_10] [i_11] [i_11] [i_11] [i_12]) : 5719013557852086936)), (((arr_4 [i_11] [i_11 - 4]) ? (arr_4 [i_10] [i_11 + 1]) : (arr_4 [i_10] [i_11 + 1])))));
                    arr_44 [i_10] [i_10] |= var_2;
                }
            }
        }
        arr_45 [i_10] [i_10] = ((-2124115800860631520 ? (((((arr_13 [10] [10] [i_10] [10] [i_10]) || (arr_13 [i_10] [i_10] [i_10] [14] [i_10]))))) : (((arr_13 [i_10] [8] [i_10] [8] [i_10]) ? (arr_13 [i_10] [i_10] [i_10] [10] [i_10]) : (arr_13 [i_10] [i_10] [i_10] [16] [i_10])))));
        var_25 = (((arr_33 [i_10]) == ((((((arr_34 [i_10]) >> (arr_21 [i_10] [i_10])))) ? (max(var_9, (arr_39 [i_10] [i_10] [i_10]))) : (18 * var_3)))));
    }
    for (int i_13 = 0; i_13 < 20;i_13 += 1)
    {
        arr_49 [i_13] [i_13] = (((!var_4) ? -var_0 : ((+((3058192464643590316 ? (arr_47 [i_13]) : -9))))));
        arr_50 [i_13] = (arr_47 [i_13]);
        var_26 = ((var_5 || ((max((arr_48 [i_13]), (arr_47 [i_13]))))));
    }
    var_27 = (!(((max(-1, var_11)) != (var_8 + var_7))));
    #pragma endscop
}
