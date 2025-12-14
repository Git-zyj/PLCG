/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_2));
    var_12 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (arr_1 [i_0 - 1]);
                arr_6 [i_0] [7] = ((((min(var_4, (-1 >= 62728)))) ? (max((arr_4 [i_0 - 1] [i_1] [i_1]), var_7)) : -32512));
            }
        }
    }
    var_13 = (min(var_13, var_8));
    #pragma endscop
}
