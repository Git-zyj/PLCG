/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = (min(var_20, var_19));
                var_21 ^= var_6;
            }
        }
    }
    var_22 *= (max(((((var_11 | var_19) & var_2))), var_3));
    #pragma endscop
}
