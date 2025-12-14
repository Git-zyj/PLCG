/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!0);
    var_13 = ((var_9 ? (min((var_5 > var_2), -90)) : var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_1] = (max((arr_1 [i_0] [i_1 + 1]), var_0));
                arr_8 [i_1] [i_1] [i_0] = -22;
            }
        }
    }
    var_14 = var_11;
    #pragma endscop
}
