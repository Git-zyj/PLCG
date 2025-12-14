/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    var_17 = (max(var_17, -var_7));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_12 [i_3] [i_1] [i_1] [i_3] [8] = (max(((258183165 ? (arr_5 [i_3] [i_0]) : (arr_5 [i_0] [i_1 - 1]))), (((arr_5 [i_0] [i_0]) ? (arr_5 [i_1 - 1] [i_1 - 1]) : (arr_5 [i_0] [i_0])))));
                        arr_13 [i_3] = (var_13 | var_5);
                    }
                }
            }
        }
        arr_14 [i_0] [i_0] |= ((((((arr_4 [i_0] [2] [i_0]) ? (arr_4 [i_0] [i_0] [i_0]) : var_3))) ? (((max((arr_10 [i_0] [12] [i_0] [i_0]), (arr_10 [i_0] [2] [i_0] [i_0]))))) : 70368744176640));
        var_18 = (min((max((arr_9 [i_0] [i_0] [i_0] [i_0]), var_13)), ((((arr_9 [i_0] [i_0] [i_0] [i_0]) > var_15)))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_19 += (((arr_0 [i_4]) >= var_10));
        var_20 += var_4;
    }
    #pragma endscop
}
