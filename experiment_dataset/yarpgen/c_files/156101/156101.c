/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((4294967270 && (((max(var_18, var_8)) < (var_2 ^ var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (arr_3 [i_0 + 1])));
                var_21 += (((((-(arr_3 [i_0 + 2])))) ? ((2 - (arr_0 [i_0 + 1]))) : (((arr_0 [i_0 - 1]) % (-9223372036854775807 - 1)))));
                var_22 = 2147483647;
            }
        }
    }
    var_23 = 116;
    var_24 = (max(var_18, ((var_2 ? (!var_8) : (((var_16 + 9223372036854775807) >> 0))))));
    #pragma endscop
}
