/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((max(((38 ? var_7 : var_0)), 1)));
    var_14 = (((((((max(var_10, 65535)))) + 2147483647)) << (((var_0 + 27951) - 18))));
    var_15 = (max((var_6 | var_9), (((!(((var_11 ? var_7 : var_9))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (((((((arr_3 [i_1] [i_1]) ? (arr_2 [i_0] [i_1]) : var_8))) ? -var_10 : (((arr_4 [i_0]) ? var_5 : (arr_5 [i_0] [i_0] [i_0]))))) >= (((max(var_2, 3930978167)))));
                arr_6 [i_1] = ((!((((((arr_2 [i_0] [i_1]) ? var_8 : var_2))) || ((max(var_7, (arr_3 [i_1] [i_1]))))))));
                var_17 = max(((((((arr_1 [i_0] [i_0]) ? (arr_0 [i_1]) : -32755))) ? ((1507616189 ? var_11 : 10)) : -4232)), (((-31560 - var_7) ? 1 : (arr_5 [i_0] [i_1] [i_1]))));
            }
        }
    }
    var_18 = (max(var_12, ((((var_11 ? 266537165388642 : var_0))))));
    #pragma endscop
}
