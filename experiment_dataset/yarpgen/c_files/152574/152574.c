/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -227123653;
    var_18 = -var_3;
    var_19 |= (min((((0 || (((var_8 ? var_8 : var_7)))))), 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((+(((31 ^ var_6) << (((~var_8) + 233))))));
                var_20 = var_6;
            }
        }
    }
    var_21 = (max(var_21, (((!(~29))))));
    #pragma endscop
}
