/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    var_21 = ((((~(var_9 >= 72))) - var_15));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1 - 4] [i_0] = var_4;
                    arr_8 [i_1 + 2] [i_1] = (arr_5 [i_2]);
                }
            }
        }
    }
    var_22 = var_5;
    #pragma endscop
}
