/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_15 [i_1] [i_2] [i_3] [i_1] = (max(((+(((arr_7 [i_0] [i_1]) ? (arr_12 [i_2]) : var_5)))), (((((((arr_10 [i_1] [i_1] [5] [i_1]) ? (arr_4 [i_3]) : 106555568))) ? (arr_10 [i_1] [i_2] [i_3 - 1] [i_3 - 1]) : ((min((arr_12 [i_1]), (arr_12 [i_2])))))))));
                            var_16 = (max(var_8, (arr_1 [i_3 - 1] [i_3 - 1])));
                            arr_16 [i_0] [i_1] [2] [i_0] [i_4] = var_3;
                        }

                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            var_17 = ((+(min((((arr_3 [i_0]) ? var_12 : (arr_18 [0] [i_5 - 1]))), ((1 / (arr_11 [i_1] [i_1] [i_2] [i_1])))))));
                            var_18 = (max(((~(arr_4 [i_3 - 1]))), var_4));
                            arr_19 [i_5] [i_5] [i_5] [i_5] [i_1] = (arr_11 [i_1] [i_2] [i_3] [i_5 + 1]);
                        }
                        var_19 = (((arr_12 [i_3 - 1]) ? (max(((var_7 ? (arr_12 [i_3]) : var_1)), 10)) : (arr_6 [i_0] [i_0])));
                    }

                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        var_20 = (((var_0 >= var_8) ? var_10 : ((((((arr_11 [i_1] [i_1] [i_2] [i_6]) ? 4188411728 : (arr_4 [1])))) ? (max(var_15, 4188411727)) : (arr_14 [i_0] [i_1])))));
                        var_21 = ((~(((max((arr_14 [i_2] [i_6 + 2]), (arr_0 [i_0])))))));
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {

                        for (int i_8 = 2; i_8 < 15;i_8 += 1)
                        {
                            arr_27 [i_8] [5] [i_1] [5] [i_8] [i_1] = var_14;
                            var_22 = (arr_21 [i_0] [i_2] [i_1] [i_8]);
                            var_23 = (!4188411727);
                        }
                        arr_28 [i_1] [i_2] [i_1] [i_1] = (max((((arr_21 [i_0] [i_0] [i_1] [i_7]) | (arr_21 [i_0] [i_0] [i_1] [i_7]))), ((max((arr_4 [i_0]), (((var_9 >= (arr_23 [i_0] [i_0])))))))));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            arr_32 [i_1] [15] [i_2] [1] [i_9] = (((((var_9 ? 106555565 : (arr_10 [i_1] [i_1] [0] [i_1])))) ? (arr_5 [i_0] [i_0] [i_2]) : (arr_6 [i_0] [12])));
                            var_24 = ((var_6 ? (arr_17 [i_0] [i_0] [i_2] [i_7] [i_7]) : var_10));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_25 = ((1 ? 55 : -1682));
                            var_26 = (((((-(arr_1 [i_0] [i_7])))) && ((max(4294967295, (arr_3 [i_7]))))));
                        }
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            var_27 = ((54608 ? 1725867761 : 8191));
                            arr_37 [i_1] [i_2] [i_2] [i_1] [i_1] = 1;
                            arr_38 [4] [i_1] [i_2] [i_7] [i_1] [i_11] = (((var_10 >> (65535 - 65509))));
                            arr_39 [9] [i_7] [i_7] [i_1] [9] [i_1] [i_0] = (min((((arr_4 [i_7]) ? var_13 : (arr_4 [i_2]))), (arr_4 [1])));
                            var_28 = var_4;
                        }
                        var_29 = ((((arr_24 [i_0] [2] [11] [i_0] [i_0] [i_0]) + ((((arr_0 [i_0]) ? (arr_26 [i_0]) : (arr_4 [4])))))));
                        var_30 = ((((((arr_7 [i_0] [i_1]) * var_4))) - (min((arr_9 [i_1] [i_1]), ((-(arr_21 [i_0] [i_0] [i_1] [i_7])))))));
                    }
                }
            }
        }
    }
    var_31 = ((((max(var_5, ((max(var_12, var_8)))))) ? var_6 : var_14));
    #pragma endscop
}
