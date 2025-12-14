/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_0 ? (min((var_3 | var_1), ((var_9 ? var_0 : var_8)))) : ((var_3 ? ((-3398730014633782034 ? 3398730014633782032 : -3398730014633782034)) : (((min(var_8, var_5)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_12 = (min(var_12, ((min(((((max(-3398730014633782034, 65535))) ? 9223372036854775807 : (-9223372036854775807 - 1))), (((max((arr_5 [13] [1]), -9223372036854775807)))))))));
                        var_13 = (((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) >> (((((((arr_0 [i_0]) ? -3398730014633782042 : var_10)))) - 38096))));
                        var_14 = ((min((arr_0 [i_0]), (arr_0 [i_0]))));
                    }
                    var_15 ^= (((((1 ? (arr_0 [i_2]) : (arr_1 [i_1])))) ? (((max(var_8, (arr_9 [10] [i_2] [i_2] [10]))))) : (min(var_2, (-9223372036854775807 - 1)))));
                }
            }
        }
    }
    #pragma endscop
}
