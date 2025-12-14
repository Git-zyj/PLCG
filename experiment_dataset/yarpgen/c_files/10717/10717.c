/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_6 ? var_17 : (((((var_16 ? 24657 : var_15))) ? (((412235643 ? var_4 : var_10))) : (max(3882731671, var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = 31664;
                var_20 = min((max(-var_13, ((~(arr_5 [i_0] [i_0]))))), ((((arr_4 [i_0] [i_0] [i_0]) == (min((arr_1 [i_0] [i_0]), var_13))))));
            }
        }
    }
    #pragma endscop
}
