/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_2] = (min(2786361811, (((-(arr_7 [i_1] [i_2]))))));

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        arr_12 [i_0] [i_2] = var_8;
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((((var_6 ? var_10 : (((arr_3 [i_0]) ? var_6 : var_3)))) / (arr_7 [i_3] [i_3 - 1])));
                        var_15 = ((((arr_5 [i_0 + 3] [i_3]) ? (arr_5 [i_0 - 3] [i_0 - 3]) : (arr_11 [11] [i_0]))));
                        arr_14 [12] [i_0] = ((((((arr_6 [i_0] [i_0] [i_0 + 2] [i_0 - 1]) == (arr_1 [i_0] [i_0])))) != -0));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_16 = (((((~(arr_17 [i_0] [8] [i_0])))) ? 5867613606984374667 : ((max(var_2, (arr_16 [i_4] [0] [i_1] [i_0]))))));
                        var_17 = (max(((-(max(var_6, 7925641626015726098)))), ((((((arr_2 [i_1]) ^ 105))) | var_6))));
                        arr_19 [i_0] [i_1] [i_1] [i_4] = (arr_2 [i_0]);
                        arr_20 [i_0] [i_0] [2] [i_4] = ((((-(((arr_6 [i_0] [i_0] [4] [4]) + (arr_16 [i_0] [i_0] [i_0] [1])))))) ? (((arr_5 [i_0 + 1] [i_0 + 3]) ? (min(1022, (arr_4 [i_0] [7] [i_0]))) : (((min(13, 152)))))) : (((arr_5 [i_0] [i_0 - 1]) ? (arr_5 [i_0] [i_0 + 2]) : (arr_5 [i_0] [i_0 - 1]))));
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_18 = ((((+((var_3 ? (arr_9 [i_0]) : (arr_21 [8] [8] [8] [i_0] [i_1]))))) - ((max((min((arr_4 [i_0] [i_2] [i_0]), (-2147483647 - 1))), (arr_18 [1] [3] [i_1] [4]))))));
                        arr_23 [10] [i_0] [i_2] [i_2] = 50;
                        var_19 = (((((9 ? (((arr_16 [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [i_0]) : var_12)) : var_14))) ? (((var_1 ? (((arr_15 [i_1] [1] [i_0] [i_1]) ? (arr_5 [11] [i_5]) : (arr_11 [i_0] [i_0]))) : (((-120 ? -68 : 1664249416)))))) : (~1)));
                        arr_24 [i_0] [i_1] [i_1] = ((((var_8 ? (~var_5) : (arr_4 [i_0 - 2] [i_1] [i_5]))) & ((((915052353 ^ 131) ^ ((~(arr_9 [9]))))))));
                    }
                }
            }
        }
    }
    var_20 = 1259604779;
    #pragma endscop
}
