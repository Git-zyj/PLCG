/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = (((15961 || var_6) == var_2));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = (var_8 + var_5);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_0] [i_0] [i_1] = (arr_1 [i_0] [i_0]);
                    arr_10 [i_0] [i_1] [i_0] [i_1] = (max((((var_0 / var_4) ? (((max((arr_5 [i_0]), (arr_0 [i_0] [i_0]))))) : (arr_0 [i_2] [i_1]))), (arr_7 [i_2] [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
