/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_17 = (min(var_17, (((((((max((arr_3 [i_0] [i_1 - 1] [i_2]), (arr_4 [i_2] [i_1] [i_0])))))) + 8850415679490699847)))));
                    arr_6 [i_0] [i_0] [i_0] = (min((arr_0 [i_0]), (min((var_7 + var_9), (arr_0 [i_1 + 2])))));
                    var_18 = (((((arr_3 [i_0] [i_1 - 1] [1]) | 1)) & (arr_1 [i_0])));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_19 = 1;
                    var_20 = ((((arr_8 [i_1] [i_1 + 2] [i_1]) ? var_14 : (arr_8 [i_1] [i_1 + 2] [i_1]))));
                    var_21 &= var_4;
                    arr_9 [i_0] [i_1 + 2] [i_0] [1] = ((var_6 ? (((arr_1 [i_0]) | (min((arr_1 [i_0]), (arr_3 [i_0] [6] [i_3]))))) : (((111 | (arr_2 [i_1 + 1] [i_1 - 1]))))));
                }
                arr_10 [i_0] [i_0] = var_9;
                arr_11 [i_0] [i_1] = (((arr_5 [10]) ? (max((min((arr_4 [i_0] [i_1] [3]), var_7)), ((max((arr_1 [i_0]), var_8))))) : ((((((arr_0 [i_0]) & 1))) ? (arr_0 [i_1 + 2]) : (max(0, var_9))))));

                for (int i_4 = 1; i_4 < 12;i_4 += 1) /* same iter space */
                {
                    var_22 = (max(var_22, (((((min(var_10, (arr_8 [i_4] [i_1 - 1] [i_1])))) ? (arr_8 [i_1 - 1] [i_1 - 1] [i_1]) : ((1 ? (arr_8 [i_4] [i_1 - 1] [i_1]) : (arr_8 [i_4] [i_1 - 1] [1]))))))));

                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        arr_16 [i_0] [i_0] [i_4] [i_5] = ((((((((1 ? (arr_12 [i_0] [i_4 + 4] [i_1] [i_0]) : 92))) ? (arr_4 [i_4] [i_4 + 4] [i_5 + 1]) : 1))) ? (((((arr_14 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_4 + 2]) <= 87)))) : (max((arr_13 [i_0] [i_5 + 2] [i_0] [i_0]), var_9))));
                        var_23 += (((((arr_7 [i_0] [0] [i_4] [i_5]) - (((min(var_12, var_8)))))) <= ((((((1 ? var_9 : var_4)) <= var_0))))));
                        arr_17 [i_0] [i_1] [i_0] [i_5] [i_0] = ((~(((((arr_4 [i_0] [i_1] [i_0]) & var_11))))));
                    }
                    var_24 = (max((arr_1 [i_0]), ((min(var_10, ((var_13 ? 1 : (arr_14 [4] [i_0] [i_1] [i_4]))))))));
                    var_25 = 1;
                }
                for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_26 = ((~(7108293728996404881 + -36)));
                                var_27 = (((((arr_19 [i_1 + 2]) & var_7)) | ((~(arr_14 [i_0] [i_0] [i_0] [i_0])))));
                                var_28 |= (max(((((var_13 ? (arr_3 [i_0] [i_1 + 1] [i_8]) : var_15)) | (min(var_2, 2960304108012206839)))), (max(var_3, (arr_0 [i_0])))));
                            }
                        }
                    }
                    var_29 = var_7;
                }
            }
        }
    }
    var_30 = 127;
    var_31 = (max(var_31, (0 | var_7)));
    #pragma endscop
}
