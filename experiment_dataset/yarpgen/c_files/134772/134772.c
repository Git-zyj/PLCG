/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    var_21 = var_11;
    var_22 = ((!(((13533532505096205355 < var_6) < (!var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_5;
                var_23 = (min((0 < 45540), (((arr_2 [i_0 - 3]) | var_16))));
            }
        }
    }
    var_24 = (((var_19 ? -var_12 : ((var_0 ? 119 : var_15)))));
    #pragma endscop
}
