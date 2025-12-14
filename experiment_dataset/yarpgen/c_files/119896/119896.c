/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((((65535 ? ((max(2024041255, -4022057255111263740))) : (max(var_0, var_10)))) ^ ((((max(var_1, var_9))) ? ((var_0 ? var_9 : var_1)) : (((var_3 ? var_3 : var_1)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_12 ^= (((var_10 ? (arr_3 [4]) : (arr_3 [8]))) - var_1);
                    arr_7 [16] [20] [20] [i_0] |= (max((arr_3 [18]), (max((arr_3 [10]), (arr_3 [14])))));
                }
            }
        }
    }
    #pragma endscop
}
