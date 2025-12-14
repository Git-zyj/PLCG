/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_9 & 0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_1] [i_1] = (max((((((min(0, var_9))) >= ((var_8 ? var_3 : var_2))))), (max((1 + var_8), (0 >= var_2)))));
                    arr_9 [14] [14] [i_2] = (min((((arr_6 [i_0] [i_0] [i_1] [i_2]) << (((arr_6 [i_2] [2] [i_1] [i_0]) - 8918037210106476179)))), (1 > var_0)));
                }
            }
        }
    }
    var_12 &= ((var_8 & ((var_9 | ((var_5 >> (var_4 - 147)))))));
    #pragma endscop
}
