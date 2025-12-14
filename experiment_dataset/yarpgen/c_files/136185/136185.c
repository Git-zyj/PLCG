/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 127;
    var_12 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_9 [i_2] [i_0] = var_5;
                        arr_10 [i_0] [2] [2] [8] [i_0] [i_3] = (((((((max(var_8, (arr_3 [i_0])))) ? ((max((arr_3 [10]), (arr_8 [i_0] [i_1])))) : var_6))) ? (((((var_2 ? (-127 - 1) : 124))) ? var_9 : (arr_8 [i_0 + 1] [i_0 - 2]))) : (((arr_7 [i_0 - 3] [i_0 + 1]) ? (arr_7 [i_0 - 1] [i_0 - 2]) : (arr_7 [i_0 - 3] [i_0 - 1])))));
                    }
                    var_13 -= (min((arr_0 [i_0 - 2]), var_5));

                    for (int i_4 = 4; i_4 < 10;i_4 += 1)
                    {
                        var_14 = ((140 ? 140 : var_7));
                        arr_15 [1] [i_2] [i_0 - 4] [i_0 - 4] [i_0 - 1] = (max(((((min(var_8, (arr_3 [i_0])))) ? (arr_13 [i_0] [1] [i_0 - 1] [i_0 - 2]) : (((arr_14 [11] [i_1] [i_2] [i_4]) ? (arr_3 [i_1]) : (arr_11 [i_2]))))), (((((arr_6 [i_0]) ? var_9 : (arr_8 [i_1] [i_2])))))));
                        var_15 = (arr_14 [i_0] [6] [1] [i_4]);
                        var_16 &= (min((((((115 ? var_3 : var_3))) ? (max((arr_1 [i_4 - 2] [i_2]), (arr_5 [i_0] [i_1] [i_2] [i_4 - 1]))) : (((var_2 >> (((arr_6 [i_1]) - 30161))))))), ((((((arr_5 [i_0] [i_1] [i_2] [i_4]) ? (arr_13 [5] [i_1] [i_1] [i_1]) : (arr_11 [i_0 - 1])))) ? (arr_1 [i_0 - 1] [i_4 + 1]) : (arr_1 [i_0] [i_0])))));
                        var_17 = ((99 ? 127 : 116));
                    }
                }
            }
        }
    }
    #pragma endscop
}
