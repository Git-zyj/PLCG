/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [0] = -15;
                arr_6 [i_0] = 4623443878330125354;
            }
        }
    }
    var_12 = var_1;
    var_13 = var_3;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_3] [i_2] = ((-(arr_1 [i_2])));
                    arr_16 [i_2] [i_3] [i_2] = ((!(((var_10 / (arr_8 [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
