/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (!7)));
    var_13 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [1] [i_2] = ((7 || ((!(arr_3 [i_0] [i_1])))));
                    var_14 = (min(((-(arr_2 [i_2] [i_1]))), ((~(arr_6 [i_0] [4] [6] [i_2])))));
                    var_15 = ((-252 - (min((min(8189766332167679522, var_7)), 63))));
                }
            }
        }
    }
    #pragma endscop
}
