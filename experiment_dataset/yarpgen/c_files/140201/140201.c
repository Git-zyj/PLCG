/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_14 *= ((-(~var_7)));
                    var_15 -= ((((((((arr_6 [i_0] [i_1] [i_0] [i_2 - 2]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_1] [5] [i_1])))) ? ((min((arr_8 [i_0] [i_2 + 1] [i_2 + 2]), (arr_1 [0])))) : (((arr_4 [i_1]) ? (arr_3 [i_2]) : (arr_6 [i_0] [i_1] [i_0] [0]))))) ^ (((!((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? (arr_3 [i_1]) : (arr_7 [i_0] [5] [i_0] [i_0])))))))));
                    var_16 *= (((((((((arr_8 [i_0] [i_1] [i_2]) / (arr_5 [5] [i_1])))) ? (max((arr_1 [i_1]), var_11)) : -var_9))) ? ((83 ? 1 : 279223176896970752)) : (arr_7 [3] [1] [i_2] [4])));
                }
            }
        }
    }
    var_17 = max(var_13, var_5);
    var_18 = (max(var_18, ((((var_2 % var_3) ? var_0 : (max(var_0, var_13)))))));
    #pragma endscop
}
