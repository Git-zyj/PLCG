/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = (min(var_10, ((((arr_1 [i_0]) ? (max((arr_1 [i_0]), (arr_1 [i_0]))) : ((47 ? (arr_1 [i_0]) : (arr_1 [i_1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_1] [i_1] [i_3] [i_4] = ((var_6 ? (((((27001 ? -27002 : -27002))) + var_9)) : ((((arr_7 [i_0] [i_1]) ? (arr_7 [i_0] [i_1]) : var_0)))));
                                var_11 = (min(((((min(var_8, (arr_3 [i_0] [i_1] [i_1])))) - (arr_2 [i_1] [i_1] [5]))), (arr_5 [i_1] [i_1])));
                                var_12 = (min(-26998, (min(27001, (arr_4 [i_1])))));
                                arr_13 [i_4] [i_4] [i_1] [i_2] [i_1] [i_1] [i_0] = 26992;
                            }
                            for (int i_5 = 0; i_5 < 0;i_5 += 1)
                            {
                                var_13 *= -1909824693;
                                var_14 = (-var_8 + (arr_5 [i_5 + 1] [i_1]));
                                var_15 = (arr_3 [i_2] [i_3] [i_1]);
                                arr_16 [i_1] [i_1] [i_2] [2] [i_5 + 1] [2] [i_3] = (((((arr_14 [i_0] [i_1] [i_2] [i_3] [i_1] [i_3] [i_1]) + (((arr_2 [i_1] [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_1 [3]))))) + ((((max(26999, var_6))) ? var_2 : (arr_6 [i_0] [i_1] [i_2] [i_1])))));
                            }
                            arr_17 [i_1] [i_1] [i_1] = (((((min(27001, (arr_15 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2] [i_3]))))) ^ ((min((arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]), (arr_3 [i_1] [i_1] [i_1]))))));
                        }
                    }
                }
                arr_18 [i_1] [i_1] [i_1] = ((min(var_4, (arr_10 [i_0] [i_0] [i_1] [i_1] [i_1]))));
            }
        }
    }
    var_16 = (max(var_16, (((((((-27002 - var_8) + -4095))) ? var_3 : (max(var_6, 26997)))))));
    var_17 = var_6;
    var_18 = var_6;
    #pragma endscop
}
