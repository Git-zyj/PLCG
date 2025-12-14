/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] [12] [3] = ((((((63 ? (arr_0 [9]) : (arr_0 [0])))) ? (var_19 & var_8) : (((arr_2 [i_0]) ? (arr_1 [i_0]) : var_16)))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_8 [i_2] [i_1] [i_0] = (min(((((15360 ? (arr_3 [i_0]) : (arr_1 [i_1]))))), (arr_7 [i_0] [i_0])));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_15 [i_1] [i_1] = (((arr_7 [i_1] [i_2]) ? (arr_7 [i_0] [i_0]) : 3053186782970525997));
                            arr_16 [i_1] [i_1] = ((63 ? -77 : 63));
                        }

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_20 += var_12;
                            arr_20 [i_1] = ((~(arr_1 [i_3])));
                            var_21 = (min(var_21, (arr_6 [i_0] [i_1] [i_2])));
                        }

                        for (int i_6 = 2; i_6 < 23;i_6 += 1)
                        {
                            var_22 = (min(var_22, var_2));
                            arr_23 [i_6] [i_1] [i_2] [21] [i_1] [21] = (32767 - 11);
                            var_23 = (((arr_17 [i_0] [0] [i_6 - 1] [i_6 - 1] [i_0] [i_2] [i_2]) >= (((arr_17 [i_0] [i_6] [i_6 + 1] [i_0] [i_6] [i_2] [i_6]) - (arr_17 [i_0] [i_0] [i_6 - 2] [i_1] [i_0] [i_3] [i_1])))));
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_27 [i_0] [i_1] [i_1] [i_2] [i_3] [i_2] [i_7] = ((var_15 ? (arr_22 [i_0] [i_0] [i_2] [i_3] [i_7] [i_1] [i_0]) : ((max((arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_22 [i_7] [i_3] [i_3] [i_3] [i_2] [23] [i_0]))))));
                            var_24 = 200;
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_25 += ((((arr_7 [i_2] [i_8]) != (arr_19 [i_8] [i_2] [i_2] [i_1] [i_0] [i_0] [i_0]))) ? (arr_11 [i_2]) : (arr_1 [i_8]));
                        var_26 = ((((arr_3 [i_2]) ? var_11 : (arr_18 [i_8] [i_8] [i_8] [i_1] [i_2]))));
                        var_27 = (min(var_27, (arr_21 [i_1] [i_2])));
                    }
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        arr_32 [i_0] [i_1] [i_2] [i_9] = ((-(max(6952461122523860217, 76))));
                        var_28 = (max((76 / var_18), (arr_2 [i_2])));
                        var_29 = (max(var_29, 76));
                    }
                }
            }
        }
    }
    var_30 ^= ((((((max(var_2, 24))) - ((var_11 ? var_6 : var_18))))) ? (max(var_15, 0)) : (((((var_13 ? var_13 : var_0))) ? (min(188, -1148553562)) : (32 != var_15))));
    var_31 = (max(63, ((1 - ((-64 ? 149 : var_1))))));
    #pragma endscop
}
