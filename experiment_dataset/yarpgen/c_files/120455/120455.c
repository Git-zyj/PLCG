/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120455
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
                var_20 = 0;
                var_21 = (max(var_21, (((~((~(!var_15))))))));
                var_22 = (max(var_22, (!-16384)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            {
                var_23 = var_8;
                var_24 *= ((-((-(arr_8 [i_2 + 2] [i_3] [i_3 + 1])))));
            }
        }
    }
    var_25 = (min(((43844 ? (max(var_14, var_12)) : var_3)), (((max(251658240, var_15))))));
    #pragma endscop
}
