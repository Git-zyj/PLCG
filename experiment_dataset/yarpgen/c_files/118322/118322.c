/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0 - 2] [i_1] [i_1] = (min(var_4, (14559110424366063840 && 65535)));
                arr_5 [i_1] [i_1] = (-var_7 | var_7);
            }
        }
    }
    var_12 = ((-(~-380917852)));
    var_13 = (((((-(252 + var_6)))) - var_11));
    #pragma endscop
}
