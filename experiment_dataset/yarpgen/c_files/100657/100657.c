/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (max((var_10 + var_8), var_3))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (var_2 | -1);
                    var_12 = (max(var_12, 63));
                }
            }
        }
    }
    #pragma endscop
}
