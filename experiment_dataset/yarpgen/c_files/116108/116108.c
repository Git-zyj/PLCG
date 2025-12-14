/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 = ((((var_8 ? var_3 : var_9)) | (var_7 > var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_12 = ((((((arr_11 [i_0] [15] [i_0]) != (!120)))) | (arr_3 [16])));
                                var_13 = (min(var_13, ((((((!((((arr_9 [16] [16] [16] [17] [16] [14]) ? (arr_6 [8] [0] [8]) : (arr_2 [20] [16]))))))) % (arr_8 [i_4 - 1] [22] [7] [2] [i_4 - 1]))))));
                            }
                        }
                    }
                }
                var_14 = ((((((arr_6 [i_0] [22] [1]) < (arr_6 [18] [18] [10]))))) + ((~(((arr_12 [22] [22] [16]) << (((arr_5 [20] [22] [2]) - 1210719887)))))));
                var_15 = (((((((((arr_5 [12] [i_0] [23]) ? (arr_1 [i_0] [7]) : (arr_4 [5] [i_0])))) ? ((((arr_0 [14] [i_0]) & (arr_3 [1])))) : ((~(arr_9 [7] [7] [11] [9] [9] [19])))))) ? ((((((arr_4 [14] [i_0]) | (arr_3 [22])))) ? (((arr_9 [15] [15] [18] [12] [12] [12]) & (arr_0 [7] [i_0]))) : (~0))) : (arr_3 [23])));
            }
        }
    }
    var_16 = var_3;
    #pragma endscop
}
