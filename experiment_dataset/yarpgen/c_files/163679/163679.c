/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 *= (arr_3 [i_1]);
                var_20 *= (max((-32767 - 1), (((arr_1 [i_1]) ? (arr_2 [i_1]) : 5251269913425738015))));
                var_21 = (min(var_21, ((max((arr_1 [i_1]), (max((~4), 65408)))))));
            }
        }
    }
    var_22 |= var_6;
    var_23 += ((((!var_8) ? (max(var_2, var_13)) : var_10)));
    var_24 ^= var_4;
    #pragma endscop
}
