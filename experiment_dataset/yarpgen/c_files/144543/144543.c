/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 *= (((((var_7 ? var_12 : 65520))) & (min(var_5, var_0))));
                var_15 = ((((max(var_6, (((((arr_4 [i_0] [i_0] [i_0]) + 2147483647)) >> (var_3 - 1041455929)))))) <= 2737526902));
            }
        }
    }
    var_16 = (max((((min(var_4, var_11)) > (var_9 ^ 104))), (((max(var_3, var_5)) == var_12))));
    var_17 = (min(var_17, ((min(4988594867627547589, 2785672089581206521)))));
    #pragma endscop
}
