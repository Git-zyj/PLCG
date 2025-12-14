/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    var_16 += var_8;
    var_17 += (max(((((((18446744073709551615 >> (var_14 + 1844868653)))) ? (((min(10533, var_3)))) : (128 | 0)))), -9223372036854775796));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0 - 1] [i_0 - 4] = (arr_7 [i_0] [i_1]);
                var_18 = (max(var_18, ((!(arr_7 [i_0] [i_0 + 1])))));
                arr_9 [i_0] [2] [10] = (((65535 ? (arr_1 [i_0 - 2]) : 911843759)) ^ (((arr_7 [i_0] [i_1]) ? 266384039 : var_3)));
            }
        }
    }
    #pragma endscop
}
