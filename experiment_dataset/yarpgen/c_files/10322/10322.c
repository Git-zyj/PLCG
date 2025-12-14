/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = ((((-(arr_6 [i_2 - 2] [i_0] [i_0] [i_0]))) < ((max(var_0, (!1412054682))))));
                    var_15 = ((!((max((min(var_8, (arr_1 [i_1]))), (min(var_6, var_4)))))));
                }
            }
        }
    }
    #pragma endscop
}
