/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_14, -407718579));
    var_20 = (((var_13 * var_14) + 65535));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = (min(var_13, (arr_2 [i_0])));
                var_22 = (min(var_22, var_11));
                arr_5 [i_0] [i_1] [1] = var_13;
            }
        }
    }
    #pragma endscop
}
