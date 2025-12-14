/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((var_17 * var_3) ? var_9 : (var_19 / var_11)))) * (((var_10 / var_12) * ((var_19 ? var_0 : var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 *= (max((arr_7 [i_0] [i_0]), (arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 1])));
                    var_22 = (min(var_22, (arr_1 [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
