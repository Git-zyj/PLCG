/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_18 = (((((1 ? 1 : 0))) ? (((min(var_11, var_3)))) : ((((arr_0 [i_0]) << (((arr_0 [i_1 + 2]) - 2070363167545661272)))))));
                    var_19 = var_11;
                    arr_8 [i_2] [i_2] [i_2] = (var_3 ? ((((44680 << (var_11 - 26058))) | (arr_5 [i_1 + 1]))) : ((var_14 ? (arr_5 [i_1 - 2]) : var_7)));
                }
                for (int i_3 = 1; i_3 < 24;i_3 += 1)
                {
                    var_20 = ((((min((min((arr_9 [i_3] [i_1 + 1] [1]), var_2)), ((min((arr_1 [i_0]), var_14)))))) ? (~var_8) : ((((min(-100, (arr_7 [i_0] [i_0 + 1])))) + var_5))));
                    var_21 = var_10;
                    arr_11 [i_3] [i_1 - 2] [i_0] = ((min(var_12, -var_8)));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_18 [i_0 - 1] [i_6] [i_6] [i_0 - 1] = (arr_2 [i_0 - 1] [i_5]);
                                var_22 = (min(var_22, (arr_4 [i_1 + 1])));
                                var_23 = ((!(var_0 << 1)));
                                var_24 += ((-(arr_4 [i_0 - 1])));
                                arr_19 [i_0] [i_1] [i_6] [i_4] [i_5] [i_6] = (arr_2 [i_0] [i_0]);
                            }
                        }
                    }
                    var_25 = (max(var_25, (((var_5 ? (1 & 47515) : 65535)))));
                }
                arr_20 [i_0] [i_0] = ((((-(arr_14 [i_1] [i_1] [i_0 + 1] [i_0 + 1]))) == (((((var_17 | (arr_9 [i_1] [i_1] [i_1])))) ? ((max(1, (arr_13 [i_0 - 1])))) : var_16))));
            }
        }
    }
    var_26 = var_12;
    #pragma endscop
}
