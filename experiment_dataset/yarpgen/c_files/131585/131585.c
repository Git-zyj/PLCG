/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 += (min((((arr_5 [i_1 - 2] [i_0 + 2] [i_2 + 3] [i_1 - 2]) / (arr_5 [i_1 + 1] [i_0 - 1] [i_2 - 2] [i_2]))), ((((((arr_4 [i_1 + 1] [i_0 + 1]) ? var_11 : -1332403560)) <= ((4683 + (arr_6 [i_0 - 2] [i_1] [i_2] [i_2]))))))));
                    var_22 = (~4128);
                }
            }
        }
    }
    var_23 = (max(1467090473, var_1));
    #pragma endscop
}
