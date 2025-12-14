/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!((((max(var_12, var_0)) ^ (((min(var_12, var_2)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((0 ? 0 : 0));
        var_14 = (arr_0 [i_0] [i_0]);
        var_15 = var_0;
        arr_3 [i_0] [i_0] = (((~5) ? (((arr_0 [i_0] [i_0]) & (arr_1 [i_0]))) : 8));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_17 [20] [i_2] [i_3] [i_4] = var_0;

                        for (int i_5 = 3; i_5 < 21;i_5 += 1)
                        {
                            arr_20 [i_5] [i_5] [i_3] [i_3] [i_3] [i_3] = ((~(min((arr_15 [i_5 - 3] [6] [6] [i_5] [i_5 - 2] [i_5]), (!var_9)))));
                            arr_21 [i_1] [i_1] [i_1] [i_4] [i_5 - 1] [i_4] [i_5] = var_3;
                            arr_22 [8] [8] [i_1] [16] [i_5] = ((((min((2 < 1), (var_6 | var_9)))) ? (((arr_5 [i_5]) ? (arr_19 [i_5] [i_4] [i_4] [i_5] [i_2] [i_1] [i_1]) : (7 >> 5))) : ((((var_9 ? (arr_8 [i_4]) : var_0))))));
                            var_16 = ((max(5, -var_1)));
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_17 = (((((-(arr_9 [i_2] [i_3] [17])))) ? (arr_25 [i_1] [i_2] [i_3] [i_4] [i_6]) : -var_1));
                            arr_26 [i_3] [i_3] [9] [9] = (max((max((((1 ? var_4 : 65535))), -var_6)), ((max(((var_2 ? 65522 : var_9)), var_12)))));
                            var_18 = ((10 ? ((min(4, (max((arr_5 [i_1]), 9))))) : ((~((65534 ? 8 : var_1))))));
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_19 += var_2;
                            arr_29 [i_1] = (((arr_12 [i_1] [i_3] [i_3]) ? (((var_1 << (var_8 - 1300130434683081383)))) : (((arr_12 [i_1] [i_2] [i_3]) ? 65534 : (arr_12 [i_1] [i_1] [i_1])))));
                            var_20 = ((((((max(var_12, var_0)) | (2 || var_1)))) || var_4));
                        }
                    }
                }
            }
        }
        arr_30 [1] = (((((-var_7 ? -2 : ((var_4 - (arr_27 [10] [1] [i_1] [i_1] [i_1] [0] [i_1])))))) || ((max(var_0, var_6)))));
        arr_31 [i_1] = var_11;
        var_21 = (((18 <= var_0) ? (min(var_10, (~var_2))) : ((((var_2 ? var_7 : var_4))))));
    }
    #pragma endscop
}
