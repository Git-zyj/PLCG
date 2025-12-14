/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_14 = (-(((var_2 ? 1 : (arr_0 [i_0])))));
                            arr_13 [i_0] [i_0] [2] [i_0] [i_3 - 1] [i_3 + 2] = (arr_11 [i_0] [i_0]);
                            var_15 = ((!(((arr_9 [i_0] [1] [i_0] [i_0] [i_0]) == ((var_4 ^ (arr_9 [i_0 - 1] [i_1] [i_0 - 1] [i_3] [i_3])))))));
                        }
                    }
                }
                arr_14 [8] [i_1] |= ((((((arr_6 [0]) ? var_1 : var_3))) ? (((var_6 ? var_2 : var_8))) : (max(((123 ? (arr_12 [10] [i_1 + 2] [i_0] [10]) : (arr_2 [i_1]))), (arr_12 [i_0 - 1] [i_0 - 1] [i_0 + 1] [6])))));
            }
        }
    }
    var_16 = (min(var_0, (((var_8 / var_1) ? var_0 : ((max(var_10, var_3)))))));
    var_17 = var_6;
    var_18 = ((var_13 >= ((-(~var_13)))));
    var_19 = ((70 ? (var_10 / -var_7) : ((var_4 ? var_10 : (max(var_2, var_9))))));
    #pragma endscop
}
