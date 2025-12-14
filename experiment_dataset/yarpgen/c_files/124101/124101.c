/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_15 = (var_3 ? var_3 : 0);
        var_16 = (var_7 | var_10);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_17 = (arr_7 [i_0 + 2] [i_0 + 3]);
                        arr_11 [i_3] = (arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 3]);
                        arr_12 [i_0 + 3] [i_1] [i_2] [1] &= -102;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 10;i_4 += 1)
    {
        arr_15 [i_4] |= var_6;
        var_18 = (arr_14 [i_4 - 1]);
    }
    var_19 += ((-var_0 ? -1 : (((((1 ? var_11 : var_2)) == var_10)))));
    var_20 = var_7;
    #pragma endscop
}
