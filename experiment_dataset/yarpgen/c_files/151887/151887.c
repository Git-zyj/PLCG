/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151887
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
                arr_4 [i_1] = min(((min(((var_12 ? 190 : 0)), ((var_1 ? var_10 : var_12))))), ((max((arr_1 [i_1]), var_3))));
                var_14 = (min(232, (arr_3 [i_0] [10] [i_0])));
                var_15 = (min(var_15, (((((var_7 ? var_12 : (arr_1 [i_1])))) ? -35540677 : (0 ^ 3004174927828005159)))));
            }
        }
    }
    var_16 = ((4294967295 ? 1 : 121));
    var_17 = (~var_2);
    var_18 = var_8;
    #pragma endscop
}
