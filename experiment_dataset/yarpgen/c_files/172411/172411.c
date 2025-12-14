/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_2] [i_1] = ((((arr_1 [i_0]) ^ (arr_1 [i_0]))) << (((((arr_3 [i_0]) ? var_3 : (arr_3 [6]))) - 9286277361087555781)));
                    arr_9 [i_2] [i_1] [i_2] = ((((((arr_6 [i_2] [i_1] [i_2]) & var_13))) ? var_12 : ((var_9 ? (arr_2 [i_0]) : var_7))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_14 ^= ((-(arr_12 [i_3])));
        arr_13 [i_3] [i_3] = (!0);
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_20 [i_5] [i_5] [i_5] = var_2;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            var_15 = (arr_19 [i_5]);
                            arr_30 [i_4] [i_5] [i_8] = 1;
                            arr_31 [i_4] [i_5] [i_6] [i_5] [i_4] = (arr_23 [i_4] [i_5] [i_8]);
                        }
                        for (int i_9 = 1; i_9 < 16;i_9 += 1)
                        {
                            var_16 = (((((+(min((arr_28 [i_4] [i_6] [i_6] [i_4] [i_9] [i_9 - 1] [i_4]), var_1))))) ? (((((arr_33 [i_9 + 3] [i_5] [i_6] [i_7] [i_9 + 1]) <= 255)))) : (min(((var_13 << (var_12 - 1378598693977623256))), -32203))));
                            arr_35 [i_5] [i_5] [i_6] [i_7] = ((((max((arr_28 [i_9 + 1] [i_9] [i_9] [i_9] [i_9] [i_9 - 1] [i_9 + 3]), (arr_33 [i_9 + 1] [i_9 + 3] [i_9 + 2] [i_9] [i_9]))))) <= ((~(((arr_28 [i_4] [i_5] [16] [i_7] [i_5] [16] [i_9]) / var_7)))));
                        }
                        var_17 = 58485;
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_18 = (((arr_32 [i_4] [i_4]) || ((((arr_28 [i_4] [i_10] [i_4] [i_4] [i_4] [i_4] [i_10]) ? 1425872938 : (arr_28 [i_4] [i_4] [i_4] [i_10] [i_10] [i_4] [i_10]))))));
            arr_39 [i_4] = ((((max(-var_2, var_8))) ? var_1 : (arr_19 [1])));
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 16;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        {
                            arr_47 [i_4] [1] [i_11] [i_12] [i_13] = (var_1 - ((((arr_37 [i_12 + 2] [i_12 - 2]) + (arr_37 [i_12 + 3] [i_12 - 2])))));
                            var_19 = ((((!(arr_14 [i_4]))) ? (((min(var_10, (arr_24 [i_12 + 3] [i_12 + 3] [i_11] [i_12] [i_13]))))) : ((var_7 ? -6390398566968155378 : (arr_34 [i_12] [i_12 + 2] [i_12 + 2] [i_11] [i_12])))));
                            var_20 = (min((((((-(arr_37 [i_4] [i_10])))) ? var_3 : (arr_45 [i_4] [i_4]))), (arr_33 [i_13] [i_12] [i_11] [i_4] [i_4])));
                        }
                    }
                }
            }
        }
        var_21 += (min((((-(arr_33 [i_4] [i_4] [i_4] [i_4] [i_4])))), ((((((arr_17 [2]) + 9223372036854775807)) << (var_11 - 3248763980))))));
        var_22 ^= ((((((!(arr_40 [i_4] [i_4] [i_4]))))) & (max(-6390398566968155378, 36174))));
    }
    for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
    {
        arr_50 [i_14] [i_14] = var_9;
        var_23 = ((!(((var_3 ? (((arr_49 [i_14]) % 36784)) : (arr_44 [i_14] [i_14]))))));
    }
    var_24 = var_6;
    #pragma endscop
}
