/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_12 -= ((max(0, var_6)));
                var_13 ^= (((((29650 ? var_3 : (arr_3 [19]))) | (~var_0))));
                var_14 *= (((((var_1 ? 167 : ((-1 ? 0 : 48))))) ? var_2 : ((16705792442919173903 ? 6213585742684844748 : 8))));
            }
        }
    }
    var_15 += var_2;
    var_16 = (max(var_16, var_8));
    var_17 = (!var_8);
    #pragma endscop
}
