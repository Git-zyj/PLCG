/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((~576459652791795712) >= (((var_1 ? var_10 : var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = (min(var_14, var_6));
                arr_7 [i_0] = ((72057594037927928 || ((min((arr_4 [i_0 - 3] [i_0 - 2] [i_0 - 3]), 4474)))));
            }
        }
    }
    #pragma endscop
}
