/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    var_21 = var_15;
    var_22 = ((var_15 != (((min(121, -104))))));
    var_23 = (var_8 != var_15);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_0] = (1918270058 ? 121 : (32651 - 3496227507));
                arr_8 [i_1] = 97;
                arr_9 [i_1] = ((!(((-30 ? (min(var_5, var_1)) : var_16)))));
            }
        }
    }
    #pragma endscop
}
