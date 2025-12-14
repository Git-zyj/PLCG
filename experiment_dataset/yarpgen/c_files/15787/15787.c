/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_14 = (max(var_14, (((((((arr_1 [i_0 + 1]) <= (arr_0 [i_0 + 1])))) == ((((arr_1 [i_0 - 1]) >= (arr_1 [i_0 + 1])))))))));
        var_15 = ((+(((arr_1 [i_0 - 1]) << (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_16 = -1;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    var_17 = (arr_1 [i_1]);
                    arr_10 [i_1] [i_1] [12] [i_3] = (((arr_3 [i_1]) & (arr_3 [i_1])));
                    var_18 = (min(var_18, (((var_13 ? (arr_9 [i_1] [i_1] [13]) : (arr_0 [i_1]))))));
                }
            }
        }
        arr_11 [i_1] = (arr_6 [i_1]);
    }
    var_19 = (max(var_19, (((14705 ? var_5 : (27684 & var_0))))));
    var_20 = var_5;
    #pragma endscop
}
