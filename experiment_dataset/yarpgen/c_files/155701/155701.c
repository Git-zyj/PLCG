/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 0;
    var_14 = (min(var_14, (max(var_4, 112))));
    var_15 ^= ((-888184360 + 2147483647) >> (2147483647 - 2147483642));
    var_16 = (min(var_16, var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 ^= (max((max((arr_8 [i_2] [i_1]), 0)), (((arr_8 [i_2] [i_2]) / -236679008))));
                    arr_9 [i_0] [i_1] [i_0] = 138;
                    arr_10 [i_0] = (arr_5 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
