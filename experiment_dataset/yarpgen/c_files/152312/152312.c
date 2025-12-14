/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((!(arr_1 [i_0] [i_0])));
        arr_3 [9] = -32753;
    }
    for (int i_1 = 4; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] = (max(var_10, ((max((arr_6 [i_1]), (arr_5 [i_1]))))));
        arr_8 [i_1] = (((((((arr_4 [i_1 - 4]) || (((~(arr_4 [i_1])))))))) | ((-(max((arr_5 [i_1]), 4294967295))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_16 = arr_9 [13];
                    arr_14 [i_1] [i_2] = (((min(var_10, var_9))));
                }
            }
        }
    }
    var_17 = ((((var_10 + var_15) ? var_2 : ((var_10 ? var_9 : 31744)))));
    #pragma endscop
}
