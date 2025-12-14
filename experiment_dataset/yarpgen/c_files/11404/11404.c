/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                        {
                            var_18 = (max(var_18, ((((arr_4 [18] [i_1]) == (max((arr_2 [i_0] [i_3] [i_4]), (arr_2 [21] [i_2] [i_1]))))))));
                            arr_11 [i_4] [i_4] [i_4] [i_2] [i_4] = ((-73 / (arr_10 [i_2] [i_2] [i_2] [i_3] [i_2])));
                            var_19 = (max(var_19, (((var_9 && (arr_7 [i_0] [8] [8] [i_0] [13] [8]))))));
                            arr_12 [i_2] [i_3] [19] [i_2] [i_2] = (arr_2 [i_1] [i_3] [i_1]);
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            var_20 ^= var_15;
                            var_21 = (arr_1 [6] [i_5]);
                        }
                        var_22 |= ((arr_8 [0] [i_1] [i_2] [i_3]) | ((461297179 ? (((5040 << (((arr_13 [i_2] [i_2] [22] [i_1]) - 38979))))) : (max(16892893064564729918, var_7)))));
                    }
                }
            }
        }
        var_23 = (arr_7 [i_0] [i_0] [i_0] [1] [i_0] [14]);
        arr_17 [2] [i_0] = (arr_8 [i_0] [i_0] [i_0] [i_0]);
        var_24 += (((((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_2 [i_0] [i_0] [i_0]))) / (arr_9 [i_0] [i_0] [i_0] [i_0])));
    }
    for (int i_6 = 1; i_6 < 11;i_6 += 1)
    {
        arr_21 [i_6 - 1] [i_6] = (arr_2 [i_6] [i_6] [i_6]);
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 0;i_8 += 1)
            {
                {
                    arr_28 [i_8] [i_6] [i_6] = (min(((min((((arr_1 [i_6 - 1] [i_6 - 1]) & (arr_5 [1] [20]))), (((arr_9 [i_6] [i_6] [i_8 + 1] [i_6 - 1]) ? (arr_3 [5] [i_7 - 1]) : 15867))))), (((var_12 ? 0 : var_14)))));
                    var_25 = (min(var_25, (((((((4 << (-4 + 34))))) ? var_14 : (arr_16 [16] [1] [i_7 + 2] [i_7 - 1] [i_6 + 2] [1]))))));
                }
            }
        }
        var_26 += ((((((arr_26 [i_6 + 2]) ? (arr_9 [12] [i_6 + 1] [12] [i_6 + 2]) : (arr_4 [i_6] [8])))) ? 1 : (min(var_14, ((max((arr_15 [i_6] [i_6] [i_6] [2] [i_6]), (arr_5 [i_6] [10]))))))));
        var_27 = ((((((arr_9 [i_6] [i_6] [18] [i_6]) ? (var_3 % 32767) : (((19653 ? 31383 : -106)))))) ? ((((45072 % (arr_25 [i_6] [i_6 - 1] [i_6 - 1]))))) : ((((((arr_7 [16] [i_6 + 2] [i_6] [i_6] [i_6] [i_6]) ? (arr_8 [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1]) : 18446744073709551615))) ? ((min(41684, (arr_9 [i_6] [i_6] [i_6 - 1] [0])))) : (arr_0 [i_6] [i_6])))));
        var_28 = (max(var_28, (((((max(4219, (arr_1 [i_6] [9])))) ? (((arr_27 [i_6] [i_6 - 1] [10] [i_6]) / ((var_9 ? 1 : (arr_8 [i_6 - 1] [1] [i_6] [i_6]))))) : var_1)))));
    }
    for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
    {
        var_29 -= arr_9 [i_9] [19] [16] [2];
        var_30 = (((min(4, ((max((arr_0 [i_9] [i_9]), (arr_8 [i_9] [i_9] [i_9] [i_9])))))) & (max(var_9, (min((arr_29 [i_9] [i_9]), var_16))))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
    {
        var_31 = arr_7 [i_10] [i_10] [i_10] [i_10] [12] [15];
        var_32 = 570;
    }
    var_33 = var_8;
    #pragma endscop
}
