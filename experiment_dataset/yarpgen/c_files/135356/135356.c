/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 |= var_2;
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = (min((arr_1 [i_1] [1]), (min((max((arr_3 [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0]))), (arr_5 [i_0] [i_0] [i_0])))));
                var_13 += (arr_1 [i_0] [i_1]);
                var_14 *= (arr_2 [i_0]);
                arr_7 [i_0] [i_0] [i_0] = (max(((max((arr_5 [i_0] [i_1] [i_1]), (arr_5 [i_0] [i_0] [i_1])))), (max((arr_1 [i_0] [i_1]), (arr_4 [4] [i_1] [i_0])))));
            }
        }
    }
    #pragma endscop
}
