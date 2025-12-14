/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (min(var_11, ((var_5 ? ((var_9 ? var_0 : var_14)) : (~var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] |= (max(-var_14, ((((arr_0 [i_0] [i_1]) == 216)))));
                var_16 = (min(var_16, ((max((((max(18446744073709551615, var_13)) >> ((max(var_1, 40))))), 6)))));
                arr_7 [i_0] = var_14;
                arr_8 [0] [0] = 1;
            }
        }
    }
    #pragma endscop
}
