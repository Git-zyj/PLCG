/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_1 ? 15063660343933708563 : 15063660343933708563));
    var_13 -= var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = (arr_5 [i_2] [i_0]);
                    arr_10 [i_0] [i_0] [i_0] = arr_4 [i_2] [i_0];
                    arr_11 [i_0] = (((arr_7 [i_1] [i_0]) ? (max((arr_0 [i_0]), 3383083729775843053)) : var_0));
                    var_14 += ((((((var_4 ? (arr_7 [i_0] [i_0]) : 3383083729775843052))) ? (arr_4 [i_0] [i_0]) : (max(8, 15063660343933708563)))));
                }
            }
        }
    }
    #pragma endscop
}
