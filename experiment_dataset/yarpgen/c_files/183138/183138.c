/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((((var_6 ? var_7 : var_4))) ? var_8 : var_3))) ? (((((0 ? 1 : 1))) ? var_8 : var_3)) : ((max(var_0, var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_2] [i_2] = -2367793501;
                    arr_8 [i_0] [i_0] [i_1] [i_2] = (~0);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_13 = (((arr_9 [i_0 + 1] [i_0 + 3] [i_0 + 1]) ? (arr_9 [i_0 - 1] [i_0 + 3] [i_0 - 3]) : (arr_9 [i_0 - 2] [i_0 - 2] [i_0 + 1])));
                    var_14 = (arr_4 [i_0] [i_0] [i_0]);
                    var_15 = var_9;
                    arr_12 [i_0] = (arr_11 [i_0 - 2]);
                }
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    arr_16 [i_0] [i_1] [i_0] [i_4] = ((((min(32767, (((arr_11 [i_0]) & var_8))))) ? (((((arr_6 [i_1]) >> (var_6 - 13781))) + (arr_13 [i_0 + 3] [i_0] [i_0]))) : ((((((6 ? 0 : 7)) >= var_5))))));
                    arr_17 [i_0] = ((72 ? (arr_0 [i_4]) : ((min(7, 2744564345)))));
                    arr_18 [i_0] [i_0] = (((arr_6 [i_0 - 3]) ? ((-(arr_5 [i_0 - 3] [i_0] [i_0 - 2]))) : (((arr_5 [i_0 - 3] [i_0] [i_0 - 2]) / (arr_5 [i_0 + 3] [i_0] [i_0 + 3])))));
                }
                var_16 = (arr_5 [i_0] [i_0] [i_1]);
                var_17 = 1;
                arr_19 [i_0] = 508;
                arr_20 [i_0] = ((var_4 ? (((arr_15 [i_0] [i_0]) / (arr_15 [i_0] [i_0]))) : 3382));
            }
        }
    }
    #pragma endscop
}
