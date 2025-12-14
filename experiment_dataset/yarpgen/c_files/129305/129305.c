/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((var_0 != var_14), (max((var_8 & var_13), var_14))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (min(28411, var_7));
        arr_4 [i_0] = (arr_1 [i_0] [i_0]);
        arr_5 [i_0] = ((+(((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
        arr_6 [i_0] [i_0] = (~117);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_16 = ((min(117, (max(var_1, var_5)))));
        arr_11 [i_1] = (((((arr_8 [i_1] [i_1]) ? (arr_8 [i_1] [i_1]) : (arr_10 [i_1] [i_1]))) << (((arr_10 [i_1] [i_1]) - 522881270))));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    {
                        var_17 = (((96 == ((183 ? 40256 : (arr_7 [i_1]))))));
                        arr_19 [i_2] [i_1] [i_3] [i_3] [i_3] [i_2] = var_14;
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        arr_31 [i_5] [i_5] [i_6] = (min((((var_6 / (26396 + var_13)))), ((((max(var_13, var_5))) ? var_4 : (((arr_24 [i_5 + 4]) ? var_9 : 5180155905805858107))))));
                        var_18 = ((var_2 == (((((arr_22 [i_5 + 1] [i_8]) == (arr_23 [i_5 + 2])))))));
                        var_19 = 38168;
                    }

                    for (int i_9 = 2; i_9 < 21;i_9 += 1)
                    {
                        var_20 += (((max((arr_32 [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_9 - 2] [8] [i_5 - 1]), ((0 ? 13266588167903693508 : var_12)))) > (max((arr_33 [i_5 + 4] [i_6] [i_5 + 4] [i_9]), (min(117, var_4))))));
                        arr_34 [i_5] [i_6] [i_6] [i_5] = var_12;
                    }
                }
            }
        }
    }
    #pragma endscop
}
