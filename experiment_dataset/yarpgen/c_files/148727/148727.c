/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_4 ? ((((var_10 >> (var_12 - 147))))) : var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = ((!(((~(var_13 * var_1))))));
                arr_6 [19] = var_8;
            }
        }
    }
    var_16 = (!(!-var_2));
    #pragma endscop
}
