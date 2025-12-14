/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_12 ^= (arr_1 [i_0]);
        var_13 = ((-(arr_1 [i_0])));
        var_14 = (max((arr_1 [i_0]), (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        var_15 &= ((3314253241 < (arr_1 [i_1 - 2])));
        arr_5 [i_1] = (max((((!(arr_3 [i_1 + 2])))), (((max(-2066176030416520012, (arr_3 [7]))) / (arr_3 [i_1 - 1])))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_17 [0] [i_2] [i_2] [0] [i_2] [i_2] &= ((((((~(arr_13 [i_4] [i_2] [i_1]))))) ? ((((!((min(1073741824, (arr_15 [i_1] [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 2])))))))) : (max((459981699 & 3873), (arr_7 [i_3])))));
                        var_16 |= (min((min((arr_12 [i_1 - 1] [i_1 + 2]), -66846720)), ((((((52 ? (arr_2 [8]) : (arr_10 [7] [7])))) ? (arr_1 [i_3]) : (arr_15 [i_1] [i_1] [i_1 + 2] [i_1] [5]))))));
                    }
                }
            }
        }
        var_17 &= (((((((((arr_1 [i_1]) ? (arr_8 [1] [i_1] [i_1]) : (arr_16 [i_1] [i_1] [i_1] [i_1] [0] [i_1])))) ? (arr_10 [i_1] [i_1 + 2]) : (arr_4 [i_1])))) ? ((((var_7 - (arr_3 [i_1]))))) : (max(((1006632960 ? (arr_11 [i_1] [i_1] [6]) : 1111156194)), 59059))));
    }
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        var_18 = 33292288;
        var_19 = (min(var_19, (((((((var_10 - (arr_19 [i_5]))) % 741637673)) << (((max(((~(arr_19 [i_5 - 1]))), (arr_0 [i_5] [i_5]))) - 4294967138)))))));
        var_20 |= 8160;
        arr_21 [i_5] = ((var_1 ? ((+(((arr_20 [i_5 - 2] [i_5]) ? (arr_20 [1] [1]) : (arr_18 [i_5] [i_5]))))) : (((arr_20 [i_5 + 1] [i_5 + 1]) - var_1))));
    }
    for (int i_6 = 1; i_6 < 20;i_6 += 1)
    {
        var_21 = (((((((arr_24 [i_6 - 1]) && (arr_24 [i_6 + 1]))))) < ((~(arr_24 [i_6 - 1])))));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    var_22 = ((~((~(min(var_4, (arr_24 [i_8])))))));
                    var_23 ^= (arr_25 [i_7] [15]);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                var_24 = (min(var_24, ((max((min(((~(arr_32 [16] [i_7 - 1] [3]))), (~-5172))), ((-((70931694131085312 ? -32765 : (arr_32 [i_6] [i_7] [i_8]))))))))));
                                var_25 = (arr_27 [i_6] [18] [i_6]);
                                arr_39 [i_6] [i_9] [i_8] [i_8] [i_10] [i_10] |= (((((((var_2 && (arr_33 [i_6] [4] [i_6 - 1] [i_6] [4] [i_6]))) ? (max((arr_35 [i_6] [i_6] [i_8] [i_8] [16] [i_10]), (arr_34 [i_7] [i_7 - 1] [i_9] [1]))) : ((max((arr_22 [i_10]), var_5)))))) && ((((arr_27 [i_6 - 1] [i_7 + 1] [i_9]) ? ((var_7 ? -6351911949363759229 : (arr_22 [i_8]))) : ((~(arr_36 [i_6]))))))));
                            }
                        }
                    }
                    var_26 = var_6;
                }
            }
        }
        arr_40 [i_6] [i_6] = -var_6;
    }
    var_27 = var_9;
    #pragma endscop
}
