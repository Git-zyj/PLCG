/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = var_18;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = var_18;
                    var_21 = (var_8 + -799465157);
                    var_22 = (-(arr_3 [i_0] [i_1]));
                    arr_10 [i_2] [i_2] = (arr_3 [10] [i_2]);
                }
            }
        }
        var_23 = ((~(arr_5 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 14;i_3 += 1)
    {
        var_24 = ((-(!21190)));
        var_25 &= ((~(arr_5 [i_3 - 2] [i_3 + 1])));
    }
    var_26 = var_3;
    var_27 = ((-((((var_9 < var_2) > 14)))));
    #pragma endscop
}
