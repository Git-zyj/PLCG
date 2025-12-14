/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    var_12 = (max(var_12, (((var_3 ? (~var_4) : var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = 1;
                    var_14 = (max(var_14, (((((1 ? (arr_2 [i_0] [i_2 - 1]) : 1))) ? 1 : ((var_6 ? (arr_6 [i_0] [i_2 - 1] [i_1 + 2]) : 14931))))));
                }
            }
        }
    }
    var_15 = var_2;

    /* vectorizable */
    for (int i_3 = 1; i_3 < 8;i_3 += 1)
    {
        var_16 = ((1 ? (var_7 >= var_9) : 1));
        var_17 = 1;
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 24;i_4 += 1)
    {
        var_18 = -1;
        var_19 = 150705909;
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        arr_19 [i_5] = (arr_14 [8]);
        var_20 = (((arr_14 [8]) ? var_4 : (min(var_9, (arr_14 [6])))));
        arr_20 [i_5] = (((((!(arr_13 [1])))) ^ 1));
        arr_21 [i_5] [i_5] = ((((!(arr_12 [8] [i_5 - 1])))));
    }
    #pragma endscop
}
