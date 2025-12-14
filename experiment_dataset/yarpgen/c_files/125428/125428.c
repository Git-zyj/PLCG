/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((var_0 < var_0) ? 16252928 : (((((var_14 % var_1) >= ((var_6 ? var_9 : 16152017142797887823)))))))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 += var_13;
                                var_17 = (((arr_1 [i_1] [i_1 - 1]) < (arr_5 [i_0] [i_1] [i_2])));
                                var_18 = ((((max((arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]), -6753912455949641434))) >> (-var_11 - 82)));
                            }
                        }
                    }
                    arr_12 [i_1] = (((((arr_8 [i_2] [i_2] [i_2 - 1] [i_1] [i_1] [i_1]) ? (arr_8 [i_2] [i_2] [i_2 - 1] [i_2] [i_0] [i_0]) : -6753912455949641445)) / (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                }
            }
        }
        arr_13 [i_0] = 6753912455949641425;
        arr_14 [i_0] = (((((-1763538962 ? (arr_5 [i_0] [i_0] [i_0]) : (((arr_2 [i_0]) ? 6753912455949641429 : var_8))))) ? (min((min(var_3, (arr_4 [i_0] [i_0] [i_0] [i_0]))), (!0))) : (((arr_7 [i_0] [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0])))));
        arr_15 [i_0] = min((((((max(var_13, 1))) > ((var_1 | (arr_7 [i_0] [i_0])))))), (((~0) ? var_10 : 948166475)));
    }
    #pragma endscop
}
