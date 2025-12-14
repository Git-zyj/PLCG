/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -32056;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 += (((var_5 < (arr_3 [i_0 + 1] [i_1]))));
                    var_13 = (max(var_13, ((((var_2 < var_3) ? 11045 : -9065)))));
                }
            }
        }
    }
    var_14 ^= (max(((max(var_0, var_8))), (min(var_8, var_1))));
    var_15 |= var_2;
    #pragma endscop
}
