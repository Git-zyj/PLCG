/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_12 *= (arr_0 [i_0]);
                var_13 = arr_3 [i_1 + 1] [i_0];
            }
        }
    }
    var_14 ^= (((min(((var_6 ? var_10 : var_6)), -1)) != var_3));
    var_15 = ((var_6 ? (((!var_10) ? (!-111) : var_8)) : ((-((var_8 ? var_1 : 142))))));
    #pragma endscop
}
