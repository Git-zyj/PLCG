/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_16 ^= ((!((((arr_1 [18]) ? (arr_1 [10]) : (arr_4 [i_0]))))));
                arr_6 [i_0] [i_1] [i_1 + 1] = (((15211 - 50) ? (arr_2 [i_0] [19] [i_0]) : 9223372036854775801));
            }
        }
    }
    var_17 = (min((((((var_13 ? var_11 : 9223372036854775801))) ? ((-9223372036854775801 ? -9223372036854775802 : var_6)) : ((var_1 ? -9223372036854775801 : var_7)))), ((9223372036854775801 & ((-9223372036854775804 ? 9223372036854775791 : 9223372036854775801))))));
    #pragma endscop
}
