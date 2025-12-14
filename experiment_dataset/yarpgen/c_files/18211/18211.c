/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 += 1;
                var_20 = (max(var_20, (((+((0 ? ((((-2147483647 - 1) ^ 0))) : (-9223372036854775807 - 1))))))));
                arr_4 [i_1] = var_9;
            }
        }
    }
    var_21 = ((((min(-4328358665240480182, (200 ^ var_3)))) ? ((min(10905659659847582977, (var_0 >> 1)))) : (min(((var_15 ? var_1 : var_14)), ((var_1 ? var_17 : var_4))))));
    #pragma endscop
}
