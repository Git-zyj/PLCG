/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= 0;
    var_13 = ((((min(var_10, (var_3 || var_3)))) ? (max((35681 || var_8), var_3)) : var_3));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 -= (min(var_8, ((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = (arr_2 [i_0] [i_0]);
            arr_6 [i_0] [i_1] [i_1] = (((arr_4 [i_0] [i_1] [i_0]) ? (var_2 && var_7) : 35679));
            var_15 = (arr_3 [i_0] [i_1]);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_9 [i_2] = var_0;
            var_16 = (((((arr_7 [1] [i_2]) ? (arr_3 [i_0] [1]) : var_6)) >> (arr_1 [i_2])));
            arr_10 [i_2] = (((~var_3) >= (((~(arr_7 [8] [i_2]))))));
        }
    }
    var_17 = var_6;
    #pragma endscop
}
