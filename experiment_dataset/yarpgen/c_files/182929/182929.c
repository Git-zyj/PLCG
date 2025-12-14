/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~((16777215 ? 39583 : 39581))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [1] |= (((((min(var_7, var_4)) ? (((96 ? 39583 : 25953))) : (var_3 + 28)))) ? var_10 : (!var_7));
                var_13 -= (!var_0);
            }
        }
    }
    #pragma endscop
}
