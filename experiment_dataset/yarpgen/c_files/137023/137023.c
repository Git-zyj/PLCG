/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (((min((((arr_3 [i_0] [i_1]) * 1)), (arr_0 [i_1])))) ? 0 : (arr_3 [i_0] [i_1]));
                var_13 = ((-(max((4294967289 / 82), -6739057716424466540))));
            }
        }
    }
    var_14 = (~(((((var_2 ? var_5 : var_3))) ? (((-2147483647 - 1) ^ var_11)) : ((var_0 ? var_10 : var_8)))));
    #pragma endscop
}
