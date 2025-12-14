/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_18 * (((-9154719570041375584 + 9223372036854775807) << (((var_8 + 32417) - 44))))));
    var_20 |= -var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_21 = ((!(arr_2 [i_1] [i_3])));
                        var_22 -= min(((+((((arr_1 [14]) < 20))))), 1);
                    }
                    arr_11 [i_0] [i_1 - 2] [i_1 - 2] = ((1 == (min((arr_2 [i_1 - 2] [i_1 - 2]), (min(4294967284, 33554304))))));
                }
            }
        }
    }
    #pragma endscop
}
