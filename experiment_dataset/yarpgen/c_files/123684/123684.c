/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_10 = (var_9 & var_0);
        var_11 = (max(var_11, (arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_5 [i_1] = var_1;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_12 = 49274;
                        arr_15 [i_1] [i_2] [i_1] [i_2] = 3968;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        arr_19 [i_5] [i_5] = ((2794800787 ? (arr_0 [i_5] [i_5]) : var_2));
        var_13 = ((((arr_2 [i_5]) <= 16242)));
        arr_20 [i_5] [i_5] = 49267;
    }
    var_14 = (max(var_14, -var_9));
    var_15 = (min(var_15, var_5));
    #pragma endscop
}
