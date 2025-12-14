/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_13 = (min(var_13, (((max((arr_2 [i_0]), ((var_10 ? (arr_3 [i_1]) : var_10))))))));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_14 = (((((max((arr_8 [i_0 - 2] [i_2] [i_3]), (((var_7 && (arr_4 [i_0] [16])))))))) > ((-var_7 - (((max((arr_10 [2] [i_1] [2] [20]), (arr_5 [11] [i_1 - 3] [i_2])))))))));
                        var_15 = (((!(((var_7 ? var_1 : (arr_5 [20] [i_1] [i_2])))))));
                        arr_11 [i_0] &= (max((max(var_11, (((arr_7 [i_0] [i_0] [15]) ^ (arr_4 [21] [7]))))), ((((min(var_0, (arr_6 [14] [i_2] [i_3]))) >= (((max(var_8, var_10)))))))));
                        var_16 = ((~(max((arr_3 [i_3]), var_3))));
                        var_17 = ((((max(var_11, (arr_10 [20] [i_0 + 1] [i_2] [6])))) >= (((arr_4 [i_0 - 2] [i_0 + 1]) ? (max((arr_4 [i_0 + 1] [i_0 + 1]), (arr_8 [i_0 - 1] [i_1] [i_3]))) : (max((arr_6 [i_2] [i_1 - 2] [11]), (arr_4 [6] [i_3])))))));
                    }
                    for (int i_4 = 2; i_4 < 23;i_4 += 1)
                    {
                        var_18 = (((((((arr_9 [i_0] [i_1]) || (arr_10 [i_0 + 1] [i_0] [i_0 - 1] [i_0]))) ? (arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1] [23]) : (~var_6))) & ((+(((arr_9 [i_0 + 1] [i_0]) % var_8))))));
                        var_19 -= var_1;
                    }
                }

                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_20 ^= ((+(((arr_16 [2] [i_1] [i_1 + 1] [i_1 - 1]) + (((arr_15 [i_0] [i_0] [i_1 - 3] [i_0] [i_6]) ? (arr_7 [14] [i_1 - 3] [i_1]) : var_6))))));

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 23;i_7 += 1)
                        {
                            var_21 = (max(var_21, ((((((((arr_0 [i_0 + 1]) + 9223372036854775807)) >> var_9)) * var_9)))));
                            var_22 = var_2;
                            var_23 = (min(var_23, (((!(((var_8 ? var_5 : var_10))))))));
                            var_24 = var_0;
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_25 = ((+(max((var_11 / var_3), ((var_0 * (arr_20 [i_0] [1] [i_6] [i_8])))))));
                            var_26 += (((((!(arr_14 [14])))) << ((((arr_13 [i_1 - 2]) && (arr_9 [i_1 - 2] [i_0 - 1]))))));
                            arr_26 [i_0] [i_1] [i_1] [i_6] = ((((max((((arr_19 [i_0 - 2] [i_1] [i_0 - 2] [i_6]) ? var_10 : (arr_25 [10] [i_1 + 2] [i_5 + 2] [22] [i_8] [1] [i_8]))), (((!(arr_24 [i_0 + 1] [i_1] [i_1] [i_6] [i_8]))))))) && ((!(!var_1)))));
                            var_27 = arr_17 [i_1 + 1] [9] [i_1 + 1];
                        }
                        for (int i_9 = 1; i_9 < 22;i_9 += 1)
                        {
                            var_28 = (min(var_28, (((+(((arr_21 [i_9] [2] [6] [22] [i_1] [i_0 - 1]) % (max(var_9, (arr_18 [i_0 + 1] [12] [i_0] [i_0 - 2]))))))))));
                            var_29 = ((((var_11 ? (max(var_9, (arr_15 [i_0] [22] [i_0] [i_0] [i_0 - 2]))) : (((var_6 >= (arr_25 [7] [7] [7] [i_5 + 2] [i_5 + 3] [i_6] [7]))))))) ^ var_3);
                        }
                        var_30 = (((arr_21 [16] [i_1] [i_1 + 2] [i_5 + 4] [i_1 + 2] [2]) == (arr_8 [i_0] [i_0 - 2] [i_0 - 1])));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_35 [i_0] [i_1 + 2] [i_5] [i_10] [i_11 - 1] = ((-(((((var_12 ? (arr_18 [i_0] [i_0] [i_0] [1]) : var_12))) % (max((arr_32 [i_0 - 1] [18] [0]), (arr_0 [i_0 - 2])))))));
                                arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10 - 2] [21] = ((((max((max((arr_16 [i_0] [i_0] [i_0 - 2] [4]), var_0)), (arr_15 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_5 - 1] [i_5 + 2])))) || ((-var_0 != ((((arr_6 [i_0] [i_1] [i_5]) << (arr_10 [i_0] [i_1] [i_1 + 1] [1]))))))));
                            }
                        }
                    }
                }
                arr_37 [i_0] = (-((min((arr_23 [i_1 - 1] [i_1 + 2]), (arr_23 [22] [i_1 + 2])))));
            }
        }
    }
    var_31 = ((((var_0 * var_7) ? var_7 : var_7)));
    #pragma endscop
}
